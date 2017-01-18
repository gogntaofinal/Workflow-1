/***********************************************************************
Generated from ../Resources/Codegen/NewCustomInterface.txt
***********************************************************************/

#ifndef VCZH_WORKFLOW_CPP_GENERATED_NEWCUSTOMINTERFACE
#define VCZH_WORKFLOW_CPP_GENERATED_NEWCUSTOMINTERFACE

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
class IMyInterface;

class IMyInterface : public virtual ::vl::reflection::description::IValueEnumerable, public ::vl::reflection::Description<IMyInterface>
{
public:

	static ::vl::vint32_t Get50();
	virtual ::vl::vint32_t Get100() = 0;
};
#pragma warning(pop)

/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class NewCustomInterface
	{
	public:

		::vl::WString main();

		static NewCustomInterface& Instance();
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
			DECL_TYPE_INFO(::IMyInterface)
#pragma warning(push)
#pragma warning(disable:4250)

			BEGIN_INTERFACE_PROXY_SHAREDPTR(::IMyInterface, ::vl::reflection::description::IValueEnumerable)
				::vl::vint32_t Get100() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(Get100);
				}
				::vl::vint32_t Get50() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(Get50);
				}
			END_INTERFACE_PROXY(::IMyInterface)
#pragma warning(pop)
#endif

			extern bool LoadNewCustomInterfaceTypes();
		}
	}
}

#endif
