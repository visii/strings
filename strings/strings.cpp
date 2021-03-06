// strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

std::string askUserName()
{
	std::cout << "Enter your full name: ";
	std::string userName{};
	std::getline(std::cin, userName);
	return userName;
}
double askUserAge()
{
	std::cout << "Enter your age: ";
	double userAge{ 0.0 };
	std::cin >> userAge;
	return userAge;
}

int main()
{
	std::string userName{ askUserName() };
	double userAge{ askUserAge() };
	double ageName{ userAge / userName.length() };
	std::cout << "You've lived " << ageName << " for each letter in your name.";
	return 0;
}