#include <iostream>

int main()
{
	std::cout << "Bonjour" << std::endl;

	char* buffer = new char[8];

	memset(buffer, 10, 8);
	std::cout << "blah" << std::endl;

	delete[] buffer;
}