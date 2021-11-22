#include "Good_evening.h"
#include <sstream>

using std::wstringstream;

auto Good_evening::greet(Person const& P) -> wstring
{
	wstringstream StringStream;
	StringStream << "Good evening " << P.to_string();

	return StringStream.str();
}