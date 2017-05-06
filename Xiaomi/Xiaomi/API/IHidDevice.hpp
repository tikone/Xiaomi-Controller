#ifndef _IHID_DEVICE_HPP_
#define _IHID_DEVICE_HPP_

#include <functional>
#include <memory>
#include <string>
#include <vector>

struct HidDeviceCapabilities;
struct HidDeviceAttributes;

struct DeviceMode;
struct ShareMode;

struct HidDeviceData;
struct HidReport;

typedef std::function< void( HidDeviceData& _data ) > ReadCallback;
typedef std::function< void( HidReport& _data ) > ReadReportCallback;
typedef std::function< void( bool _success ) > WriteCallback;

struct IHidDevice
{
	typedef int IntPtr;

	virtual IntPtr getHandle() const = 0;

	virtual bool isOpen() const = 0;
	virtual bool isConnected() const = 0;

	virtual const std::string& getDescription() const = 0;

	virtual const HidDeviceCapabilities& getCapabilities() const = 0;
	virtual const HidDeviceCapabilities& getAttributes() const = 0;

	virtual const std::string& getDevicePath() const = 0;

	virtual void setMonitorDeviceEvents( bool _value ) = 0;
	virtual bool getMonitorDeviceEvents() const = 0;

	virtual void openDevice() = 0;
	virtual void openDevice( DeviceMode _readMode, DeviceMode _writeMode, ShareMode _shareMode ) = 0;

	virtual void closeDevice() = 0;

	virtual std::auto_ptr< HidDeviceData > read() = 0;

	virtual void read(ReadCallback _callback) = 0;

	virtual void read(ReadCallback _callback, int timeout) = 0;

	//Task<HidDeviceData> ReadAsync(int timeout = 0);

	virtual void readReport( ReadReportCallback _callback ) = 0;
	virtual void readReport( ReadReportCallback _callback, int _timeout) = 0;

	//Task<HidReport> readReportAsync(int timeout = 0);

	virtual HidReport readReport( int _timeout ) = 0;
	virtual HidReport readReport() = 0;

	virtual bool readFeatureData( std::vector< char > _data, char reportId = 0) = 0;

	virtual bool readProduct (std::vector< char > _data) = 0;

	virtual bool readManufacturer( std::vector< char > _data) = 0;

	virtual bool readSerialNumber( std::vector< char > _data) = 0;

	virtual void write( std::vector< char > _data, WriteCallback _callback ) = 0;

	virtual bool write( std::vector< char > _data ) = 0;

	virtual bool write( std::vector< char > _data, int _timeout ) = 0;

	virtual void write( std::vector< char > _data, WriteCallback callback, int _timeout ) = 0;

	//Task<bool> writeAsync( std::vector< char > _data, int _timeout = 0);

	virtual void writeReport( const HidReport& report, WriteCallback callback ) = 0;

	virtual bool writeReport( const HidReport& report ) = 0;

	virtual bool writeReport( const HidReport& report, int _timeout ) = 0;

	virtual void writeReport( const HidReport& report, WriteCallback callback, int _timeout ) = 0;

	//Task<bool> writeReportAsync(HidReport report, int _timeout = 0);

	virtual HidReport createReport() = 0;

	virtual bool writeFeatureData( std::vector< char > _data ) = 0;
};

#endif // !_IHID_DEVICE_HPP_