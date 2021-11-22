#include "Mrs.h"
#include <sstream>

using std::wstringstream;

auto Mrs::to_string() const -> wstring {

	wstringstream StringStream;
	StringStream << "Mrs " << FirstName << L" " << LastName;

	return StringStream.str();
}