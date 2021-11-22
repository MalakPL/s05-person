#pragma once
#include "Greeting.h"

class Hello : public Greeting
{
public:
	auto greet(Person const&) ->wstring override;
};

