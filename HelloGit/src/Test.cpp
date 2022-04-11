#include "Test.h"

#include <iostream>
#include <string>

/// <summary>
/// Default constructor for Test.
/// </summary>
Test::Test() {
	std::cout << "Constructed a Test" << std::endl;
}

/// <summary>
/// Just a function to do something. Concatenates two of the input string, 
/// prints it to screen and then return the lenght of the concatenation.
/// </summary>
/// <param name="aString">Just a string.</param>
/// <returns></returns>
int Test::DoSomething(std::string aString) {
	std::string aStringTwice = aString + aString;
	std::cout << "aStringTwice = " << aStringTwice << std::endl;
	return aStringTwice.length();
}

/// <summary>
/// Print welcome message
/// </summary>
/// <returns></returns>
int Test::Welcome(void) {
	std::cout << "Welcome to the Australian Science program-aided enrichment center." << std::endl;
	std::cout << "We hope your time in the classroom has been a pleasant one." << std::endl;
	std::cout << "For your own safety and the safety of others, please ______." << std::endl;

	return 0;
}