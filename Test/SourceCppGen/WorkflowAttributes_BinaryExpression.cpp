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
Class (::calculator::BinaryExpression)
***********************************************************************/

namespace calculator
{
	::calculator::BinaryExpression::BinaryOperator BinaryExpression::GetOp()
	{
		return ::vl::__vwsn::This(this)->op;
	}

	::vl::Ptr<::calculator::Expression> BinaryExpression::GetLeft()
	{
		return ::vl::__vwsn::This(this)->left;
	}

	::vl::Ptr<::calculator::Expression> BinaryExpression::GetRight()
	{
		return ::vl::__vwsn::This(this)->right;
	}

	BinaryExpression::BinaryExpression(::vl::Ptr<::calculator::Expression> _left, ::calculator::BinaryExpression::BinaryOperator _op, ::vl::Ptr<::calculator::Expression> _right)
	{
		(::vl::__vwsn::This(this)->left = _left);
		(::vl::__vwsn::This(this)->op = _op);
		(::vl::__vwsn::This(this)->right = _right);
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
