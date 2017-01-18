/***********************************************************************
Generated from ../Resources/Codegen/NewCustomInterface3.txt
***********************************************************************/

#ifndef VCZH_WORKFLOW_CPP_GENERATED_NEWCUSTOMINTERFACE3
#define VCZH_WORKFLOW_CPP_GENERATED_NEWCUSTOMINTERFACE3

#include "../Source/CppTypes.h"

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#pragma warning(push)
#pragma warning(disable:4250)
class IMyInterface3;
class MyClass;

class IMyInterface3 : public virtual ::vl::reflection::description::IValueEnumerable, public ::vl::reflection::Description<IMyInterface3>
{
public:

	virtual ::vl::vint32_t Get100() = 0;
};

class MyClass : public ::vl::Object, public ::vl::reflection::Description<MyClass>
{
public:

	::vl::vint32_t begin = (- 1);
	::vl::vint32_t end = (- 1);
	MyClass(::vl::vint32_t _begin, ::vl::vint32_t _end);
	static ::vl::vint32_t Get50();
	::vl::Ptr<::IMyInterface3> CreateMyInterface();
};
#pragma warning(pop)

/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class NewCustomInterface3
	{
	public:

		::vl::WString main();

		static NewCustomInterface3& Instance();
	};
}

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

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
			DECL_TYPE_INFO(::IMyInterface3)
			DECL_TYPE_INFO(::MyClass)
#pragma warning(push)
#pragma warning(disable:4250)

			BEGIN_INTERFACE_PROXY_SHAREDPTR(::IMyInterface3, ::vl::reflection::description::IValueEnumerable)
				::vl::vint32_t Get100() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(Get100);
				}
			END_INTERFACE_PROXY(::IMyInterface3)
#pragma warning(pop)
#endif

			extern bool LoadNewCustomInterface3Types();
		}
	}
}

#endif
