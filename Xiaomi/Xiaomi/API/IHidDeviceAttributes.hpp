#ifndef _IHID_DEVICE_ATTRIBUTES_HPP_
#define _IHID_DEVICE_ATTRIBUTES_HPP_

#include <string>

struct IHidDeviceAttributes
{
	virtual int getVendorId() const = 0;
	virtual void setVendorId( int _id ) = 0;

	virtual int getProductId() const = 0;
	virtual void setProductId( int _id ) = 0;

	virtual int getVersion() const = 0;
	virtual void setVersion( int _id ) = 0;

	//virtual const std::string& getVendorHexId() const = 0;
	//virtual void setVendorHexId( std::string& _id ) = 0;
};

#endif // !_IHID_DEVICE_ATTRIBUTES_HPP_
