#include "pch.h"
#include "CppUnitTest.h"
#include "..\VideoR.cpp"  // Replace with the actual file name if there's no header file


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TESTCASE
{
	TEST_CLASS(TESTCASE)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            // Test setup
            HRESULT hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
            Assert::IsTrue(SUCCEEDED(hr), L"Failed to initialize COM.");

            // Call the function you want to test
            RunCaptureLogic();  // Assuming RunCaptureLogic is the function you want to test
            CoUninitialize();
        }
    };
		}
	};
}
