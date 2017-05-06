#ifndef _HID_DEVICE_CAPABILITIES_HPP_
#define _HID_DEVICE_CAPABILITIES_HPP_

#include "API\NativeMethods.hpp"

class HidDeviceCapabilities
{
public:
	HidDeviceCapabilities(HidLibrary::NativeMethods::HIDP_CAPS _capabilities);

};

#endif // !_HID_DEVICE_CAPABILITIES_HPP_
