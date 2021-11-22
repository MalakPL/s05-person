#include <iostream>
#include "Mr.h"
#include "Mrs.h"
#include "King.h"
#include "Queen.h"

#include <io.h>
#include <fcntl.h>

using std::wcout;
using std::cerr;
using std::endl;
using std::exception;

int main()
{
	/* Obsługa wyjątków */
	try
	{
		if (_setmode(_fileno(stdout), _O_U8TEXT) == -1)
		{
			throw exception{ "Nie mozna ustawic kodowania UTF-8" };
		}

		Mr Osoba1{ L"Kot",L"Kiciuś" };
		Mrs Osoba2{ L"Kot",L"Rysia" };
		King Osoba3{ L"Karol",L"Szmajda" };
		Queen Osoba4{ L"Alicja",L"Haja" };

		std::wcout << Person::who_is_it(Osoba1) << std::endl;
		std::wcout << Person::who_is_it(Osoba2) << std::endl;
		std::wcout << Person::who_is_it(Osoba3) << std::endl;
		std::wcout << Person::who_is_it(Osoba4) << std::endl;
	}
	catch (exception ex)
	{
		cerr << "Wyjatek: " << ex.what() << endl;

		return 1; /* Zwracamy błąd */
	}

	return 0;
}