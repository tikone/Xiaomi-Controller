#include "Impl\HidDeviceAttributes.hpp"

HidDeviceAttributes::HidDeviceAttributes(HidLibrary::NativeMethods::HIDD_ATTRIBUTES _attributes)
	:	m_vendorID( _attributes.VendorID )
	,	m_productID( _attributes.ProductID )
	,	m_versionNumber( _attributes.VersionNumber )
{
	//m_vendorHexID = "0x" + _attributes.VendorID.ToString("X4");
	//m_productHexID = "0x" + _attributes.ProductID.ToString("X4");
}

int
HidDeviceAttributes::getVendorId() const
{

}

void
HidDeviceAttributes::setVendorId(int _id)
{}

int
HidDeviceAttributes::getProductId() const
{}

void
HidDeviceAttributes::setProductId(int _id)
{}

int
HidDeviceAttributes::getVersion() const
{}

void
HidDeviceAttributes::setVersion(int _id)
{}