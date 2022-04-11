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