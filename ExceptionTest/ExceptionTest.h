#pragma once
#include <iostream>
#include "Exception.h"

void testExceptioninitalize() {
	std::cout << "EXCEPTION TESTS:\n";
	char* intitalMsg = new char[8];
	strcpy_s(intitalMsg, 8, "Default");
	Exception exception = Exception();
	if (strcmp(exception.getMessage(), intitalMsg) == 0) {
		std::cout << "Initalized Correctly\n";
	}
	else {
		std::cout << "FAIL\n";
	}

	delete[] intitalMsg;

}

void testExceptioninitalizeWithMessage() {
	int initialMsgSize = sizeof("WithMessage");

	char* intitalMsg = new char[initialMsgSize];
	strcpy_s(intitalMsg, initialMsgSize, "WithMessage");
	Exception exception = Exception(intitalMsg);
	if (strcmp(exception.getMessage(), intitalMsg) == 0) {
		std::cout << "Initalized w/ msg Correctly\n";
	}
	else {
		std::cout << "FAIL\n";
	}

	delete[] intitalMsg;

}