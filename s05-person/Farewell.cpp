#include "Farewell.h"
#include <sstream>

using std::wstringstream;

auto Farewell::greet(Person const& P) -> wstring
{
	wstringstream StringStream;
	StringStream << "Farewell " << P.to_string();

	return StringStream.str();
}