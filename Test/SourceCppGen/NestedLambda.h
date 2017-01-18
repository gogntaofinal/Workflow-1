/***********************************************************************
Generated from ../Resources/Codegen/NestedLambda.txt
***********************************************************************/

#ifndef VCZH_WORKFLOW_CPP_GENERATED_NESTEDLAMBDA
#define VCZH_WORKFLOW_CPP_GENERATED_NESTEDLAMBDA

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
class IA;
class IB;

class IA : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IA>
{
public:

	virtual ::vl::vint32_t GetA() = 0;
	virtual void SetA(::vl::vint32_t value) = 0;
	::vl::Event<void()> AChanged;
	virtual ::vl::WString Calculate() = 0;
};

class IB : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IB>
{
public:

	virtual ::vl::vint32_t GetB() = 0;
	virtual void SetB(::vl::vint32_t value) = 0;
	::vl::Event<void()> BChanged;
	virtual ::vl::WString Calculate() = 0;
};
#pragma warning(pop)

/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class NestedLambda
	{
	public:

		::vl::WString main();

		static NestedLambda& Instance();
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
			DECL_TYPE_INFO(::IA)
			DECL_TYPE_INFO(::IB)
#pragma warning(push)
#pragma warning(disable:4250)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::IA)
				::vl::WString Calculate() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(Calculate);
				}
				::vl::vint32_t GetA() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetA);
				}
				void SetA(::vl::vint32_t value) override
				{
					INVOKE_INTERFACE_PROXY(SetA, value);
				}
			END_INTERFACE_PROXY(::IA)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::IB)
				::vl::WString Calculate() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(Calculate);
				}
				::vl::vint32_t GetB() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetB);
				}
				void SetB(::vl::vint32_t value) override
				{
					INVOKE_INTERFACE_PROXY(SetB, value);
				}
			END_INTERFACE_PROXY(::IB)
#pragma warning(pop)
#endif

			extern bool LoadNestedLambdaTypes();
		}
	}
}

#endif
