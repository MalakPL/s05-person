#pragma once
#include "Person.h"

class Mrs : public Person
{
public:
	using Person::Person;
	auto to_string() const->wstring override;
};

