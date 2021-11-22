#include "King.h"
#include <sstream>

using std::wstringstream;

auto King::to_string() const -> wstring {

	wstringstream StringStream;
	StringStream << "King " << FirstName << L" " << LastName;

	return StringStream.str();
}