#pragma once
#include "Person.h"
#include <string>
using std::wstring;

class Greeting
{
public:
	auto virtual greet(Person const&)->wstring = 0;
};

