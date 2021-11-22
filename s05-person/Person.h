#pragma once
#include <string>
using std::wstring;

class Person
{
protected:
	wstring FirstName;
	wstring LastName;

public:
	Person(wstring FirstName, wstring LastName)
	{
		this->FirstName = FirstName;
		this->LastName = LastName;
	}

	auto virtual to_string() const->wstring = 0;
	auto static who_is_it(Person const&)->wstring;
};

