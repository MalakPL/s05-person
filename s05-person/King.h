#pragma once
#include "Person.h"

class King : public Person
{
public:
	using Person::Person;
	auto to_string() const->wstring override;
};

