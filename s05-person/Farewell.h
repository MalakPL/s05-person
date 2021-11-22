#pragma once
#include "Greeting.h"

class Farewell : public Greeting
{
public:
	auto greet(Person const&)->wstring override;
};

