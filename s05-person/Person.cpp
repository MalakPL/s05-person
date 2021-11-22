#include "Person.h"

auto Person::who_is_it(Person const& P)->wstring
{
	return P.to_string();
}