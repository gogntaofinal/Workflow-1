/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/ClassDtor.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "ClassDtor.h"

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

#define GLOBAL_SYMBOL ::vl_workflow_global::ClassDtor::
#define GLOBAL_NAME ::vl_workflow_global::ClassDtor::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::ClassDtor::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_ClassDtor)
	vl_workflow_global::ClassDtor instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString(L"", false);
	FINALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString::Empty;
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_ClassDtor)

namespace vl_workflow_global
{
	::vl::WString ClassDtor::main()
	{
		auto x = new ::Dtor();
		(::vl::__vwsn::This(x)->name = ::vl::WString(L"x", false));
		auto y = new ::Dtor();
		(::vl::__vwsn::This(y)->name = ::vl::WString(L"y", false));
		auto z = new ::Dtor();
		(::vl::__vwsn::This(z)->name = ::vl::WString(L"z", false));
		(::vl::__vwsn::This(x)->next = y);
		(::vl::__vwsn::This(y)->next = z);
		::vl::__vwsn::This(x)->Dispose(true);
		return GLOBAL_NAME s;
	}

	ClassDtor& ClassDtor::Instance()
	{
		return Getvl_workflow_global_ClassDtor().instance;
	}
}

/***********************************************************************
Class (::Dtor)
***********************************************************************/

Dtor::Dtor()
{
}

Dtor::~Dtor()
{
	(GLOBAL_NAME s = ((((::vl::WString(L"", false) + GLOBAL_NAME s) + ::vl::WString(L"[", false)) + ::vl::__vwsn::This(this)->name) + ::vl::WString(L"]", false)));
	if ((::vl::__vwsn::This(this)->next != nullptr))
	{
		::vl::__vwsn::This(::vl::__vwsn::This(this)->next)->Dispose(true);
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
			IMPL_CPP_TYPE_INFO(::Dtor)

#define _ ,
			BEGIN_CLASS_MEMBER(::Dtor)
				CLASS_MEMBER_FIELD(name)
				CLASS_MEMBER_FIELD(next)
			END_CLASS_MEMBER(::Dtor)

#undef _
			class ClassDtorTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::Dtor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadClassDtorTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<ClassDtorTypeLoader>());
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
