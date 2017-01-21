/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/WorkflowAttributes.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "WorkflowAttributesIncludes.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::WorkflowAttributes::
#define GLOBAL_NAME ::vl_workflow_global::WorkflowAttributes::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::WorkflowAttributes::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_WorkflowAttributes)
	vl_workflow_global::WorkflowAttributes instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_WorkflowAttributes)

namespace vl_workflow_global
{
	::vl::WString WorkflowAttributes::Print(::vl::Ptr<::calculator::Expression> expr)
	{
		if (auto ne = ::vl::__vwsn::SharedPtrCast<::calculator::NumberExpression>(expr.Obj()))
		{
			return ::vl::__vwsn::ToString(::vl::__vwsn::This(ne.Obj())->GetValue());
		}
		else if (auto be = ::vl::__vwsn::SharedPtrCast<::calculator::BinaryExpression>(expr.Obj()))
		{
			auto op = ::vl::WString(L"", false);
			{
				::calculator::BinaryExpression::BinaryOperator __vwsne_0 = ::vl::__vwsn::This(be.Obj())->GetOp();
				if (__vwsne_0 == ::calculator::BinaryExpression::BinaryOperator::Add)
				{
					(op = ::vl::WString(L"+", false));
				}
				else if (__vwsne_0 == ::calculator::BinaryExpression::BinaryOperator::Sub)
				{
					(op = ::vl::WString(L"-", false));
				}
				else if (__vwsne_0 == ::calculator::BinaryExpression::BinaryOperator::Mul)
				{
					(op = ::vl::WString(L"*", false));
				}
				else if (__vwsne_0 == ::calculator::BinaryExpression::BinaryOperator::Div)
				{
					(op = ::vl::WString(L"/", false));
				}
			}
			return ((((((::vl::WString(L"(", false) + GLOBAL_NAME Print(::vl::__vwsn::This(be.Obj())->GetLeft())) + ::vl::WString(L" ", false)) + op) + ::vl::WString(L" ", false)) + GLOBAL_NAME Print(::vl::__vwsn::This(be.Obj())->GetRight())) + ::vl::WString(L")", false));
		}
		else
		{
			throw ::vl::Exception(::vl::WString(L"Unrecognized expression type.", false));
		}
	}

	::vl::vint32_t WorkflowAttributes::Evaluate(::vl::Ptr<::calculator::Expression> expr)
	{
		if (auto ne = ::vl::__vwsn::SharedPtrCast<::calculator::NumberExpression>(expr.Obj()))
		{
			return ::vl::__vwsn::This(ne.Obj())->GetValue();
		}
		else if (auto be = ::vl::__vwsn::SharedPtrCast<::calculator::BinaryExpression>(expr.Obj()))
		{
			auto left = GLOBAL_NAME Evaluate(::vl::__vwsn::This(be.Obj())->GetLeft());
			auto right = GLOBAL_NAME Evaluate(::vl::__vwsn::This(be.Obj())->GetRight());
			{
				::calculator::BinaryExpression::BinaryOperator __vwsne_0 = ::vl::__vwsn::This(be.Obj())->GetOp();
				if (__vwsne_0 == ::calculator::BinaryExpression::BinaryOperator::Add)
				{
					return (left + right);
				}
				else if (__vwsne_0 == ::calculator::BinaryExpression::BinaryOperator::Sub)
				{
					return (left - right);
				}
				else if (__vwsne_0 == ::calculator::BinaryExpression::BinaryOperator::Mul)
				{
					return (left * right);
				}
				else if (__vwsne_0 == ::calculator::BinaryExpression::BinaryOperator::Div)
				{
					return (left / right);
				}
			}
			throw ::vl::Exception(::vl::WString(L"Unrecognized binary operator.", false));
		}
		else
		{
			throw ::vl::Exception(::vl::WString(L"Unrecognized expression type.", false));
		}
	}

	::vl::WString WorkflowAttributes::main()
	{
		auto expr = ::vl::Ptr<::calculator::BinaryExpression>(new ::calculator::BinaryExpression(::vl::Ptr<::calculator::BinaryExpression>(new ::calculator::BinaryExpression(::vl::Ptr<::calculator::NumberExpression>(new ::calculator::NumberExpression(1)), ::calculator::BinaryExpression::BinaryOperator::Add, ::vl::Ptr<::calculator::NumberExpression>(new ::calculator::NumberExpression(2)))), ::calculator::BinaryExpression::BinaryOperator::Mul, ::vl::Ptr<::calculator::BinaryExpression>(new ::calculator::BinaryExpression(::vl::Ptr<::calculator::NumberExpression>(new ::calculator::NumberExpression(3)), ::calculator::BinaryExpression::BinaryOperator::Add, ::vl::Ptr<::calculator::NumberExpression>(new ::calculator::NumberExpression(4))))));
		return (((::vl::WString(L"", false) + ::vl::__vwsn::This(expr.Obj())->Print()) + ::vl::WString(L" = ", false)) + ::vl::__vwsn::ToString(::vl::__vwsn::This(expr.Obj())->Evaluate()));
	}

	WorkflowAttributes& WorkflowAttributes::Instance()
	{
		return Getvl_workflow_global_WorkflowAttributes().instance;
	}
}

#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(::calculator::BinaryExpression)
			IMPL_CPP_TYPE_INFO(::calculator::BinaryExpression::BinaryOperator)
			IMPL_CPP_TYPE_INFO(::calculator::Expression)
			IMPL_CPP_TYPE_INFO(::calculator::NumberExpression)

#define _ ,
			BEGIN_CLASS_MEMBER(::calculator::BinaryExpression)
				CLASS_MEMBER_METHOD(GetLeft, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetOp, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetRight, NO_PARAMETER)
				CLASS_MEMBER_PROPERTY_READONLY(Left, GetLeft)
				CLASS_MEMBER_PROPERTY_READONLY(Operator, GetOp)
				CLASS_MEMBER_PROPERTY_READONLY(Right, GetRight)
				CLASS_MEMBER_FIELD(left)
				CLASS_MEMBER_FIELD(op)
				CLASS_MEMBER_FIELD(right)
			END_CLASS_MEMBER(::calculator::BinaryExpression)

			BEGIN_ENUM_ITEM(::calculator::BinaryExpression::BinaryOperator)
				ENUM_CLASS_ITEM(Add)
				ENUM_CLASS_ITEM(Div)
				ENUM_CLASS_ITEM(Mul)
				ENUM_CLASS_ITEM(Sub)
			END_ENUM_ITEM(::calculator::BinaryExpression::BinaryOperator)

			BEGIN_CLASS_MEMBER(::calculator::Expression)
				CLASS_MEMBER_METHOD(Evaluate, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Print, NO_PARAMETER)
			END_CLASS_MEMBER(::calculator::Expression)

			BEGIN_CLASS_MEMBER(::calculator::NumberExpression)
				CLASS_MEMBER_METHOD(GetValue, NO_PARAMETER)
				CLASS_MEMBER_PROPERTY_READONLY(Value, GetValue)
				CLASS_MEMBER_FIELD(value)
			END_CLASS_MEMBER(::calculator::NumberExpression)

#undef _
			class WorkflowAttributesTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::calculator::BinaryExpression)
					ADD_TYPE_INFO(::calculator::BinaryExpression::BinaryOperator)
					ADD_TYPE_INFO(::calculator::Expression)
					ADD_TYPE_INFO(::calculator::NumberExpression)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadWorkflowAttributesTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<WorkflowAttributesTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
