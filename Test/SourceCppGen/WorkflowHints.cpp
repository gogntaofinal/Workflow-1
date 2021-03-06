/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/WorkflowHints.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "WorkflowHints.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, WorkflowHintsReflection.h) */
#include "WorkflowHintsReflection.h"
#endif
/* CodePack:EndIgnore() */

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

#define GLOBAL_SYMBOL ::vl_workflow_global::WorkflowHints::
#define GLOBAL_NAME ::vl_workflow_global::WorkflowHints::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::WorkflowHints::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_WorkflowHints)
	vl_workflow_global::WorkflowHints instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_WorkflowHints)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	void WorkflowHints::Ensure(bool condition)
	{
		if ((! condition))
		{
			throw ::vl::Exception(::vl::WString(L"Wrong!", false));
		}
	}

	void WorkflowHints::Ensure(bool a, bool b)
	{
		GLOBAL_NAME Ensure((a == b));
	}

	void WorkflowHints::Ensure(::vl::vint a, ::vl::vint b)
	{
		GLOBAL_NAME Ensure((a == b));
	}

	void WorkflowHints::ExtraTests()
	{
		GLOBAL_NAME Ensure((::vl::__vwsn::ToString(static_cast<::vl::vint>(123)) == ::vl::WString(L"123", false)));
		GLOBAL_NAME Ensure((::vl::__vwsn::Parse<::vl::vint>(::vl::WString(L"123", false)) == static_cast<::vl::vint>(123)));
		GLOBAL_NAME Ensure(::vl::__vwsn::Parse<bool>(::vl::WString(L"true", false)), true);
		GLOBAL_NAME Ensure(::vl::__vwsn::Parse<::vl::vint>(::vl::WString(L"123", false)), static_cast<::vl::vint>(123));
		{
			auto v = ::vl::__vwsn::ToString(static_cast<::vl::vint>(123));
			GLOBAL_NAME Ensure((v == ::vl::WString(L"123", false)));
		}
		{
			auto v = ::vl::__vwsn::Parse<::vl::vint>(::vl::WString(L"123", false));
			GLOBAL_NAME Ensure((v == static_cast<::vl::vint>(123)));
		}
		auto sBase = ::vl::Ptr<::workflow::hints::Base>(new ::workflow::hints::Base());
		auto rBase = new ::workflow::hints::Base(static_cast<::vl::vint>(0));
		auto sDerived = ::vl::Ptr<::workflow::hints::Derived>(new ::workflow::hints::Derived());
		auto rDerived = new ::workflow::hints::Derived(static_cast<::vl::vint>(0));
		auto srBase = ::vl::__vwsn::Ensure(::vl::Ptr<::workflow::hints::Base>(rBase));
		auto srDerived = ::vl::__vwsn::Ensure(::vl::Ptr<::workflow::hints::Derived>(rDerived));
		GLOBAL_NAME Ensure((::vl::__vwsn::Ensure(static_cast<::workflow::hints::Base*>(sDerived.Obj())) != nullptr));
		GLOBAL_NAME Ensure(static_cast<bool>(::vl::__vwsn::Ensure(::vl::Ptr<::workflow::hints::Base>(sDerived))));
		GLOBAL_NAME Ensure((::vl::__vwsn::Ensure(static_cast<::workflow::hints::Base*>(rDerived)) != nullptr));
		GLOBAL_NAME Ensure(static_cast<bool>(::vl::__vwsn::Ensure(::vl::Ptr<::workflow::hints::Base>(rDerived))));
		GLOBAL_NAME Ensure((::vl::__vwsn::RawPtrCast<::workflow::hints::Derived>(sBase.Obj()) == nullptr));
		GLOBAL_NAME Ensure((! static_cast<bool>(::vl::__vwsn::SharedPtrCast<::workflow::hints::Derived>(sBase.Obj()))));
		GLOBAL_NAME Ensure((::vl::__vwsn::RawPtrCast<::workflow::hints::Derived>(rBase) == nullptr));
		GLOBAL_NAME Ensure((! static_cast<bool>(::vl::__vwsn::SharedPtrCast<::workflow::hints::Derived>(rBase))));
		GLOBAL_NAME Ensure(true);
		GLOBAL_NAME Ensure((::vl::__vwsn::RawPtrCast<::workflow::hints::Base>(sBase.Obj()) != nullptr));
		GLOBAL_NAME Ensure(true);
		GLOBAL_NAME Ensure((::vl::__vwsn::RawPtrCast<::workflow::hints::Derived>(sBase.Obj()) == nullptr));
		GLOBAL_NAME Ensure((::vl::__vwsn::RawPtrCast<::workflow::hints::Base>(rBase) != nullptr));
		GLOBAL_NAME Ensure(true);
		GLOBAL_NAME Ensure((::vl::__vwsn::RawPtrCast<::workflow::hints::Derived>(rBase) == nullptr));
		GLOBAL_NAME Ensure(true);
		GLOBAL_NAME Ensure(true);
		GLOBAL_NAME Ensure((::vl::__vwsn::RawPtrCast<::workflow::hints::Base>(sDerived.Obj()) != nullptr));
		GLOBAL_NAME Ensure(true);
		GLOBAL_NAME Ensure((! (::vl::__vwsn::RawPtrCast<::workflow::hints::Derived>(sDerived.Obj()) == nullptr)));
		GLOBAL_NAME Ensure((::vl::__vwsn::RawPtrCast<::workflow::hints::Base>(rDerived) != nullptr));
		GLOBAL_NAME Ensure(true);
		GLOBAL_NAME Ensure((! (::vl::__vwsn::RawPtrCast<::workflow::hints::Derived>(rDerived) == nullptr)));
		GLOBAL_NAME Ensure(true);
		auto iNull = ::vl::Nullable<::vl::vint>();
		auto iValue = ::vl::Nullable<::vl::vint>(static_cast<::vl::vint>(1));
		auto sNull = ::vl::Nullable<::vl::WString>();
		auto sValue = ::vl::Nullable<::vl::WString>(::vl::WString(L"2", false));
		GLOBAL_NAME Ensure((! static_cast<bool>(iNull)));
		GLOBAL_NAME Ensure(static_cast<bool>(iValue));
		GLOBAL_NAME Ensure((! static_cast<bool>(sNull)));
		GLOBAL_NAME Ensure(static_cast<bool>(sValue));
		GLOBAL_NAME Ensure((! static_cast<bool>(::vl::__vwsn::NullableCast<::vl::WString>(iNull))));
		GLOBAL_NAME Ensure((::vl::__vwsn::NullableCast<::vl::WString>(iValue) == ::vl::Nullable<::vl::WString>(::vl::WString(L"1", false))));
		GLOBAL_NAME Ensure((::vl::__vwsn::ToString(iValue.Value()) == ::vl::WString(L"1", false)));
		GLOBAL_NAME Ensure((! static_cast<bool>(::vl::__vwsn::NullableCast<::vl::vint>(sNull))));
		GLOBAL_NAME Ensure((::vl::__vwsn::NullableCast<::vl::vint>(sValue) == ::vl::Nullable<::vl::vint>(static_cast<::vl::vint>(2))));
		GLOBAL_NAME Ensure((::vl::__vwsn::Parse<::vl::vint>(sValue.Value()) == static_cast<::vl::vint>(2)));
		GLOBAL_NAME Ensure((! static_cast<bool>(iNull)));
		GLOBAL_NAME Ensure(static_cast<bool>(iValue));
		GLOBAL_NAME Ensure((! static_cast<bool>(sNull)));
		GLOBAL_NAME Ensure(static_cast<bool>(sValue));
		auto x = ::vl::reflection::description::Value();
		auto y = ::vl::__vwsn::Box(static_cast<::vl::vint>(2));
		GLOBAL_NAME Ensure(x.IsNull());
		GLOBAL_NAME Ensure((! y.IsNull()));
		GLOBAL_NAME Ensure((dynamic_cast<::vl::reflection::description::IValueType::TypedBox<::vl::vint>*>(x.GetBoxedValue().Obj()) == nullptr));
		GLOBAL_NAME Ensure((dynamic_cast<::vl::reflection::description::IValueType::TypedBox<::vl::vint>*>(y.GetBoxedValue().Obj()) != nullptr));
		auto z = ::vl::__vwsn::Box(rBase);
		GLOBAL_NAME Ensure((! z.IsNull()));
		GLOBAL_NAME Ensure([&](){ auto __vwsn_temp__ = z; return !__vwsn_temp__.GetSharedPtr() && ::vl::__vwsn::RawPtrCast<::workflow::hints::Base>(__vwsn_temp__.GetRawPtr()) != nullptr; }());
		GLOBAL_NAME Ensure([&](){ auto __vwsn_temp__ = z; return !__vwsn_temp__.GetSharedPtr() || ::vl::__vwsn::RawPtrCast<::workflow::hints::Base>(__vwsn_temp__.GetRawPtr()) == nullptr; }());
		GLOBAL_NAME Ensure([&](){ auto __vwsn_temp__ = z; return __vwsn_temp__.GetSharedPtr() || ::vl::__vwsn::RawPtrCast<::workflow::hints::Derived>(__vwsn_temp__.GetRawPtr()) == nullptr; }());
		GLOBAL_NAME Ensure([&](){ auto __vwsn_temp__ = z; return !__vwsn_temp__.GetSharedPtr() || ::vl::__vwsn::RawPtrCast<::workflow::hints::Derived>(__vwsn_temp__.GetRawPtr()) == nullptr; }());
	}

	::vl::WString WorkflowHints::main()
	{
		GLOBAL_NAME ExtraTests();
		auto hinters = ::vl::Ptr<::test::Hinters>(::test::CreateHinter());
		{
			auto hinters2 = ::test::CreateHinter(static_cast<::vl::vint>(0));
			::vl::__vwsn::This(hinters2)->Dispose(true);
		}
		auto a = [&]()->decltype(auto){ auto __vwsn_temp_x0 = ::vl::__vwsn::Box((::vl::__vwsn::CreateList().Add(static_cast<::vl::vint>(1)).Add(static_cast<::vl::vint>(2)).Add(static_cast<::vl::vint>(3))).list); ::vl::collections::List<::vl::vint> __vwsn_temp_0; ::vl::reflection::description::UnboxParameter(__vwsn_temp_x0, __vwsn_temp_0); auto __vwsn_temp_1 = static_cast<::vl::vint>(4); return ::vl::__vwsn::This(hinters.Obj())->GetList(__vwsn_temp_0, __vwsn_temp_1); }()[static_cast<::vl::vint>(0)];
		auto b = [&]()->decltype(auto){ auto __vwsn_temp_x0 = ::vl::__vwsn::Box(::vl::Ptr<::vl::reflection::description::IValueReadonlyList>((::vl::__vwsn::CreateList().Add(static_cast<::vl::vint>(10)).Add(static_cast<::vl::vint>(20)).Add(static_cast<::vl::vint>(30))).list)); ::vl::collections::List<::vl::vint> __vwsn_temp_0; ::vl::reflection::description::UnboxParameter(__vwsn_temp_x0, __vwsn_temp_0); return ::vl::__vwsn::This(hinters.Obj())->GetReadonlyList(__vwsn_temp_0); }()[static_cast<::vl::vint>(0)];
		auto c = ::vl::__vwsn::Unbox<::vl::vint>(::vl::__vwsn::This([&]()->decltype(auto){ auto __vwsn_temp_x0 = ::vl::__vwsn::Box(::vl::Ptr<::vl::reflection::description::IValueReadonlyList>((::vl::__vwsn::CreateList().Add(static_cast<::vl::vint>(100)).Add(static_cast<::vl::vint>(200)).Add(static_cast<::vl::vint>(300))).list)); ::vl::collections::Array<::vl::vint> __vwsn_temp_0; ::vl::reflection::description::UnboxParameter(__vwsn_temp_x0, __vwsn_temp_0); return ::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueReadonlyList>(::vl::__vwsn::This(hinters.Obj())->GetReadonlyArray(__vwsn_temp_0)); }().Obj())->Get(static_cast<::vl::vint>(0)));
		auto d = ::vl::__vwsn::Unbox<::vl::vint>(::vl::__vwsn::This([&]()->decltype(auto){ auto __vwsn_temp_x0 = ::vl::__vwsn::Box(::vl::Ptr<::vl::reflection::description::IValueReadonlyList>((::vl::__vwsn::CreateList().Add(static_cast<::vl::vint>(1000)).Add(static_cast<::vl::vint>(2000)).Add(static_cast<::vl::vint>(3000))).list)); ::vl::collections::SortedList<::vl::vint> __vwsn_temp_0; ::vl::reflection::description::UnboxParameter(__vwsn_temp_x0, __vwsn_temp_0); return ::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueReadonlyList>(::vl::__vwsn::This(hinters.Obj())->GetReadonlySL(__vwsn_temp_0)); }().Obj())->Get(static_cast<::vl::vint>(0)));
		auto e = [&]()->decltype(auto){ auto __vwsn_temp_x0 = ::vl::__vwsn::Box((::vl::__vwsn::CreateDictionary().Add(static_cast<::vl::vint>(1), static_cast<::vl::vint>(2)).Add(static_cast<::vl::vint>(3), static_cast<::vl::vint>(4))).dictionary); ::vl::collections::Dictionary<::vl::vint, ::vl::vint> __vwsn_temp_0; ::vl::reflection::description::UnboxParameter(__vwsn_temp_x0, __vwsn_temp_0); return ::test::GetDictionaryFromHinter(::vl::__vwsn::This(hinters.Obj()), __vwsn_temp_0); }()[static_cast<::vl::vint>(1)];
		auto f = [&]()->decltype(auto){ auto __vwsn_temp_x0 = ::vl::__vwsn::Box(::vl::Ptr<::vl::reflection::description::IValueReadonlyDictionary>((::vl::__vwsn::CreateDictionary().Add(static_cast<::vl::vint>(10), static_cast<::vl::vint>(20)).Add(static_cast<::vl::vint>(30), static_cast<::vl::vint>(40))).dictionary)); ::vl::collections::Dictionary<::vl::vint, ::vl::vint> __vwsn_temp_0; ::vl::reflection::description::UnboxParameter(__vwsn_temp_x0, __vwsn_temp_0); return ::test::GetReadonlyDictionaryFromHinter(::vl::__vwsn::This(hinters.Obj()), __vwsn_temp_0); }()[static_cast<::vl::vint>(10)];
		[&]()->decltype(auto){ auto __vwsn_temp_x0 = ::vl::__vwsn::Box((::vl::__vwsn::CreateList().Add(static_cast<::vl::vint>(1)).Add(static_cast<::vl::vint>(2)).Add(static_cast<::vl::vint>(3)).Add(static_cast<::vl::vint>(4)).Add(static_cast<::vl::vint>(5))).list); ::vl::collections::List<::vl::vint> __vwsn_temp_0; ::vl::reflection::description::UnboxParameter(__vwsn_temp_x0, __vwsn_temp_0); return ::vl::__vwsn::This(hinters.Obj())->SetStorage(__vwsn_temp_0); }();
		auto g1 = ::vl::__vwsn::Unbox<::vl::vint>(::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(hinters.Obj())->GetStorage()).Obj())->Get(static_cast<::vl::vint>(0)));
		auto xs = (::vl::__vwsn::CreateList().Add(static_cast<::vl::vint>(1)).Add(static_cast<::vl::vint>(2)).Add(static_cast<::vl::vint>(3)).Add(static_cast<::vl::vint>(4)).Add(static_cast<::vl::vint>(5))).list;
		[&]()->decltype(auto){ auto __vwsn_temp_x0 = ::vl::__vwsn::Box(xs); ::vl::collections::List<::vl::vint> __vwsn_temp_0; ::vl::reflection::description::UnboxParameter(__vwsn_temp_x0, __vwsn_temp_0); return ::vl::__vwsn::This(hinters.Obj())->SetStorage(__vwsn_temp_0); }();
		::vl::__vwsn::This(hinters.Obj())->GetStorage().Set(static_cast<::vl::vint>(4), static_cast<::vl::vint>(100));
		auto g2 = ::vl::__vwsn::This(hinters.Obj())->GetStorage()[static_cast<::vl::vint>(4)];
		{
			auto __vwsn_for_begin_x = static_cast<::vl::vint>(1);
			auto __vwsn_for_end_x = static_cast<::vl::vint>(5);
			auto x = __vwsn_for_begin_x;
			while ((x <= __vwsn_for_end_x))
			{
				{
					::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(hinters.Obj())->GetMyList()).Obj())->Add(::vl::__vwsn::Box(x));
					::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueObservableList>(::vl::__vwsn::This(hinters.Obj())->GetObservableList()).Obj())->Add(::vl::__vwsn::Box(x));
				}
				(x = (x + static_cast<::vl::vint>(1)));
			}
		}
		return ((((((((((((((((((((::vl::WString(L"[", false) + ::vl::__vwsn::ToString(a)) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(b)) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(c)) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(d)) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(e)) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(f)) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(g1)) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(g2)) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(::vl::__vwsn::Unbox<::vl::vint>(::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(hinters.Obj())->GetMyList()).Obj())->Get(static_cast<::vl::vint>(2))))) + ::vl::WString(L"][", false)) + ::vl::__vwsn::ToString(::vl::__vwsn::This(hinters.Obj())->GetObservableList()[static_cast<::vl::vint>(3)])) + ::vl::WString(L"]", false));
	}

	WorkflowHints& WorkflowHints::Instance()
	{
		return Getvl_workflow_global_WorkflowHints().instance;
	}
}

/***********************************************************************
Class (::workflow::hints::Base)
***********************************************************************/

namespace workflow
{
	namespace hints
	{
		Base::Base()
		{
		}

		Base::Base(::vl::vint x)
		{
		}

/***********************************************************************
Class (::workflow::hints::Derived)
***********************************************************************/

		Derived::Derived()
		{
		}

		Derived::Derived(::vl::vint x)
		{
		}

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
