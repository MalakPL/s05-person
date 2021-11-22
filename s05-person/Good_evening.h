#pragma once
#include "Greeting.h"

class Good_evening : public Greeting
{
public:
	auto greet(Person const&)->wstring override;
};

