/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/NamedLambda.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "NamedLambda.h"

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

#define GLOBAL_SYMBOL ::vl_workflow_global::NamedLambda::
#define GLOBAL_NAME ::vl_workflow_global::NamedLambda::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::NamedLambda::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_NamedLambda)
	vl_workflow_global::NamedLambda instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_NamedLambda)

namespace vl_workflow_global
{
	struct __vwsnf1_NamedLambda_main_
	{

		__vwsnf1_NamedLambda_main_();

		::vl::vint32_t operator()(::vl::vint32_t n) const;
	};

	::vl::WString NamedLambda::main()
	{
		auto fib = LAMBDA(::vl_workflow_global::__vwsnf1_NamedLambda_main_());
		return ((((((((::vl::__vwsn::ToString(fib(1)) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(fib(2))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(fib(3))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(fib(4))) + ::vl::WString(L", ", false)) + ::vl::__vwsn::ToString(fib(5)));
	}

	NamedLambda& NamedLambda::Instance()
	{
		return Getvl_workflow_global_NamedLambda().instance;
	}

	__vwsnf1_NamedLambda_main_::__vwsnf1_NamedLambda_main_()
	{
	}

	::vl::vint32_t __vwsnf1_NamedLambda_main_::operator()(::vl::vint32_t n) const
	{
		auto fib2 = LAMBDA(::vl_workflow_global::__vwsnf1_NamedLambda_main_());
		return ((n <= 2) ? 1 : ((*this)((n - 1)) + fib2((n - 2))));
	}
}

#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
