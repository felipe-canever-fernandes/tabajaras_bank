#include <iostream>
using std::cout;
#include "SpecialClient.hpp"
using tabajaras_bank::SpecialClient;

int main()
{
	cout << "Client\n";

	SpecialClient felipe("Felipe", "12345678901", 10000);

	cout << "Name:\t\t" << felipe.name() << "\n";
	cout << "ID:\t\t" << felipe.id() << "\n";
	cout << "Balance:\t$ " << felipe.balance() << "\n";
	cout << "Rate of return:\t" << felipe.rate() * 100 << "%\n";
}
