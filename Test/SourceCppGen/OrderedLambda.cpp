/***********************************************************************
Generated from ../Resources/Codegen/OrderedLambda.txt
***********************************************************************/

#include "OrderedLambda.h"

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_OrderedLambda)
	vl_workflow_global::OrderedLambda instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_OrderedLambda)

namespace vl_workflow_global
{
	::vl::vint32_t OrderedLambda::Apply(const ::vl::Func<::vl::vint32_t(::vl::vint32_t)>& f, ::vl::vint32_t arg)
	{
		throw 0;
	}

	::vl::Func<::vl::vint32_t(::vl::vint32_t)> OrderedLambda::Adder(::vl::vint32_t x)
	{
		throw 0;
	}

	::vl::WString OrderedLambda::main()
	{
		throw 0;
	}

	OrderedLambda& OrderedLambda::Instance()
	{
		return Getvl_workflow_global_OrderedLambda().instance;
	}




}

