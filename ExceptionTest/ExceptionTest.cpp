#define _CRTDBG_MAP_ALLOC
#include "Exception.h"
#include <assert.h>
#include "ExceptionTest.h"

int main() {
	//test w/ default
	testExceptioninitalize();
	//test w/ msg
	testExceptioninitalizeWithMessage(); 
	//test with copy

	//test set msg

	//test get msg

	//test operator ==

	//test operator <<

	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();

	return 0;

}

