#include "Test.h"

#include <iostream>
#include <string>

/// <summary>
/// Default constructor for Test.
/// </summary>
Test::Test() {
}

/// <summary>
/// Print welcome message
/// </summary>
/// <returns></returns>
int Test::Welcome(void) {
	std::cout << "Welcome to the Australian Science Center." << std::endl;
	std::cout << "We hope you've had a good time." << std::endl; 
    std::cout << "For your safety, save before exiting or committing." << std::endl;
	std::cout << "Don't forget to donate if this helped." << std::endl;
	std::cout << "Copyright (c) ASC" << std::endl;
	return 0;
}