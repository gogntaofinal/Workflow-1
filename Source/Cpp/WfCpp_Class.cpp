#include "WfCpp.h"

namespace vl
{
	namespace workflow
	{
		namespace cppcodegen
		{
			using namespace collections;
			using namespace reflection;
			using namespace reflection::description;
			using namespace analyzer;

/***********************************************************************
WfGenerateClassMemberDeclVisitor
***********************************************************************/

			class WfGenerateClassMemberDeclVisitor : public Object, public WfDeclaration::IVisitor
			{
			public:
				WfCppConfig*				config;
				stream::StreamWriter&		writer;
				Ptr<WfClassDeclaration>		classDecl;
				Ptr<WfClassMember>			classMember;
				WString						prefix;

				WfGenerateClassMemberDeclVisitor(WfCppConfig* _config, stream::StreamWriter& _writer, Ptr<WfClassDeclaration> _classDecl, Ptr<WfClassMember> _classMember, const WString& _prefix)
					:config(_config)
					, writer(_writer)
					, classDecl(_classDecl)
					, classMember(_classMember)
					, prefix(_prefix)
				{
				}

				void Visit(WfNamespaceDeclaration* node)override
				{
				}

				void Visit(WfFunctionDeclaration* node)override
				{
				}

				void Visit(WfVariableDeclaration* node)override
				{
					auto scope = config->manager->nodeScopes[node].Obj();
					auto symbol = scope->symbols[node->name.value][0];
					auto typeInfo = symbol->typeInfo;
					writer.WriteString(prefix + config->ConvertType(typeInfo.Obj()) + L" " + config->ConvertName(node->name.value));
					auto defaultValue = config->DefaultValue(typeInfo.Obj());
					if (defaultValue != L"")
					{
						writer.WriteString(L" = " + defaultValue);
					}
					writer.WriteLine(L";");
				}

				void Visit(WfEventDeclaration* node)override
				{
				}

				void Visit(WfPropertyDeclaration* node)override
				{
				}

				void Visit(WfConstructorDeclaration* node)override
				{
				}

				void Visit(WfDestructorDeclaration* node)override
				{
					writer.WriteLine(prefix + L"~" + config->ConvertName(classDecl->name.value) + L"();");
				}

				void Visit(WfClassDeclaration* node)override
				{
				}

				void Visit(WfEnumDeclaration* node)override
				{
				}

				void Visit(WfStructDeclaration* node)override
				{
				}
			};

			void GenerateClassMemberDecl(WfCppConfig* config, stream::StreamWriter& writer, Ptr<WfClassDeclaration> classDecl, Ptr<WfClassMember> member, const WString& prefix)
			{
				WfGenerateClassMemberDeclVisitor visitor(config, writer, classDecl, member, prefix);
				member->declaration->Accept(&visitor);
			}
		}
	}
}