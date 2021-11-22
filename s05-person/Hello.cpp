#include "Hello.h"
#include <sstream>

using std::wstringstream;

auto Hello::greet(Person const& P) -> wstring
{
	wstringstream StringStream;
	StringStream << "Hello " << P.to_string();

	return StringStream.str();
}