#pragma once
#include "Person.h"

class Mr : public Person
{
public:
	using Person::Person;
	auto to_string() const->wstring override;
};

