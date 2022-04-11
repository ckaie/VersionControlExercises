#include "Test.h"

#include <iostream>
#include <string>

/// <summary>
/// Simple 'HelloGit' program to demonstrate git branching and conflict
/// resolution
/// </summary>
/// <param name="argc"></param>
/// <param name="argv"></param>
/// <returns></returns>
int main(int argc, char* argv[]) {
	std::string helloGit = "Hello Git!";

	std::cout << helloGit << std::endl;

	Test test;
	int x = test.DoSomething(helloGit);
	std::cout << "Length: " << x << std::endl;
}