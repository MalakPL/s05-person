#include "Mr.h"
#include <sstream>

using std::wstringstream;

auto Mr::to_string() const -> wstring {

	wstringstream StringStream;
	StringStream << "Mr " << FirstName << L" " << LastName;

	return StringStream.str();
}