#ifndef _NATIVE_METHODS_HPP_
#define _NATIVE_METHODS_HPP_

#include <vector>

namespace HidLibrary{

	typedef int IntPtr;

	struct NativeMethods
	{
		static const int FILE_FLAG_OVERLAPPED = 0x40000000;
		static const short FILE_SHARE_READ = 0x1;
		static const short FILE_SHARE_WRITE = 0x2;
		static const unsigned int GENERIC_READ = 0x80000000;
		static const unsigned int GENERIC_WRITE = 0x40000000;
		static const int ACCESS_NONE = 0;
		static const int INVALID_HANDLE_VALUE = -1;
		static const short OPEN_EXISTING = 3;
		static const int WAIT_TIMEOUT = 0x102;
		static const unsigned int WAIT_OBJECT_0 = 0;
		static const unsigned int WAIT_FAILED = 0xffffffff;

		static const int WAIT_INFINITE = 0xffff;

		///////////////////////////////////////////////////////////////

		static const int DBT_DEVICEARRIVAL = 0x8000;
		static const int DBT_DEVICEREMOVECOMPLETE = 0x8004;
		static const int DBT_DEVTYP_DEVICEINTERFACE = 5;
		static const int DBT_DEVTYP_HANDLE = 6;
		static const int DEVICE_NOTIFY_ALL_INTERFACE_CLASSES = 4;
		static const int DEVICE_NOTIFY_SERVICE_HANDLE = 1;
		static const int DEVICE_NOTIFY_WINDOW_HANDLE = 0;
		static const int WM_DEVICECHANGE = 0x219;
		static const short DIGCF_PRESENT = 0x2;
		static const short DIGCF_DEVICEINTERFACE = 0x10;
		static const int DIGCF_ALLCLASSES = 0x4;

		static const int MAX_DEV_LEN = 1000;
		static const int SPDRP_ADDRESS = 0x1c;
		static const int SPDRP_BUSNUMBER = 0x15;
		static const int SPDRP_BUSTYPEGUID = 0x13;
		static const int SPDRP_CAPABILITIES = 0xf;
		static const int SPDRP_CHARACTERISTICS = 0x1b;
		static const int SPDRP_CLASS = 7;
		static const int SPDRP_CLASSGUID = 8;
		static const int SPDRP_COMPATIBLEIDS = 2;
		static const int SPDRP_CONFIGFLAGS = 0xa;
		static const int SPDRP_DEVICE_POWER_DATA = 0x1e;
		static const int SPDRP_DEVICEDESC = 0;
		static const int SPDRP_DEVTYPE = 0x19;
		static const int SPDRP_DRIVER = 9;
		static const int SPDRP_ENUMERATOR_NAME = 0x16;
		static const int SPDRP_EXCLUSIVE = 0x1a;
		static const int SPDRP_FRIENDLYNAME = 0xc;
		static const int SPDRP_HARDWAREID = 1;
		static const int SPDRP_LEGACYBUSTYPE = 0x14;
		static const int SPDRP_LOCATION_INFORMATION = 0xd;
		static const int SPDRP_LOWERFILTERS = 0x12;
		static const int SPDRP_MFG = 0xb;
		static const int SPDRP_PHYSICAL_DEVICE_OBJECT_NAME = 0xe;
		static const int SPDRP_REMOVAL_POLICY = 0x1f;
		static const int SPDRP_REMOVAL_POLICY_HW_DEFAULT = 0x20;
		static const int SPDRP_REMOVAL_POLICY_OVERRIDE = 0x21;
		static const int SPDRP_SECURITY = 0x17;
		static const int SPDRP_SECURITY_SDS = 0x18;
		static const int SPDRP_SERVICE = 4;
		static const int SPDRP_UI_NUMBER = 0x10;
		static const int SPDRP_UI_NUMBER_DESC_FORMAT = 0x1d;

		static const int DIF_PROPERTYCHANGE = 0x12;
		static const int DICS_ENABLE = 1;
		static const int DICS_DISABLE = 2;
		static const int DICS_FLAG_GLOBAL = 1;

		static const int SPDRP_UPPERFILTERS = 0x11;


		static const short HIDP_INPUT = 0;
		static const short HIDP_OUTPUT = 1;

		static const short HIDP_FEATURE = 2;
		//[StructLayout(LayoutKind.Sequential)]
		struct HIDD_ATTRIBUTES
		{
			int Size;
			unsigned short VendorID;
			unsigned short ProductID;
			short VersionNumber;
		};

		struct HIDP_CAPS
		{
			short Usage;
			short UsagePage;
			short InputReportByteLength;
			short OutputReportByteLength;
			short FeatureReportByteLength;
			//[MarshalAs(UnmanagedType.ByValArray, SizeConst = 17)]
			std::vector< short > Reserved;
			short NumberLinkCollectionNodes;
			short NumberInputButtonCaps;
			short NumberInputValueCaps;
			short NumberInputDataIndices;
			short NumberOutputButtonCaps;
			short NumberOutputValueCaps;
			short NumberOutputDataIndices;
			short NumberFeatureButtonCaps;
			short NumberFeatureValueCaps;
			short NumberFeatureDataIndices;
		};

	};

}

#endif // !_NATIVE_METHODS_HPP_