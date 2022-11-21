#include <iostream>
#include <conio.h>
#include <locale>

void main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Hello world\n" << "Привет мир\n";

	_getch();
};