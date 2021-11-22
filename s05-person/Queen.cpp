#include "Queen.h"
#include <sstream>

using std::wstringstream;

auto Queen::to_string() const -> wstring {

	wstringstream StringStream;
	StringStream << "Queen " << FirstName << L" " << LastName;

	return StringStream.str();
}