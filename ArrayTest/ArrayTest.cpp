//#include "Exception.h"
//#include "Array.h"
//#include "ArrayTest.h"
//
//#define _CRTDBG_MAP_ALLOC
//
//
//int main() {
//
//	//test Array legnths are valid
//
//	try
//	{
//		/*testArrayNegSize();*/
//		//test for initiation:
//	/*	testArrayInitiation();*/
//		//test for neg lenght and set length
//		//testArraySize();
//		////test for changing array size
//		/*testArrayChangeSize();*/
//		//test for bounds
//		testArrayBoundsHigh();
//		testArrayBoundsLow();
//
//		
//
//		
//	}
//	catch (const Exception e)
//	{
//		std::cout << e.getMessage();
//
//	}
//	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
//	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
//	_CrtDumpMemoryLeaks();
//}
//
//void testArrayNegSize() {
//	Array<int>ArrayNeg(-2);
//	std::cout << "Array made with negative size\n";
//}
//void testArrayInitiation()
//{
//	Array<int>ArrayOne;
//	std::cout << "Array Initiated correctly\n";
//}
//void testArraySize() {
//	Array<int> ArrayTwo(3);
//	std::cout << "Array Initiated w/ size 3 correctly\n";
//
//}
//void testArrayBoundsHigh()
//{
//	Array<int> ArrayOne(3);
//	std::cout << ArrayOne[4] << std::endl;
//}
//void testArrayBoundsLow()
//{
//	Array<int> ArrayOne(20);
//	std::cout << ArrayOne[-1] << std::endl;
//}
//void testArrayChangeSize() {
//	Array<int> ArrayThree(10);
//	for (int start = 0; start < 10; start++) {
//		ArrayThree[start] = start;
//		std::cout << "Current Array Value: " << ArrayThree[start] << std::endl;
//	}
//	std::cout << "Changing to five vals\n";
//
//	ArrayThree.setLength(5);
//	for (int start = 0; start < ArrayThree.getLength(); start++) {
//		std::cout << "Curr Array Val: " << ArrayThree[start] << std::endl;
//	}
//	
//}