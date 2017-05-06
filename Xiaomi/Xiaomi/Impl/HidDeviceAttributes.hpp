#ifndef _HID_DEVICE_ATTRIBUTES_HPP_
#define _HID_DEVICE_ATTRIBUTES_HPP_

#include "API\IHidDeviceAttributes.hpp"
#include "API\NativeMethods.hpp"

class HidDeviceAttributes
	:	public	IHidDeviceAttributes
{
public:
	HidDeviceAttributes( HidLibrary::NativeMethods::HIDD_ATTRIBUTES _attributes );

	int getVendorId() const override;
	void setVendorId(int _id) override;

	int getProductId() const override;
	void setProductId(int _id) override;

	int getVersion() const override;
	void setVersion(int _id) override;

	//const std::string& getVendorHexId() const override;
	//void setVendorHexId(std::string& _id) override;

private:

	unsigned short m_vendorID;
	unsigned short m_productID;
	unsigned short m_versionNumber;

};

#endif // !_HID_DEVICE_ATTRIBUTES_HPP_
