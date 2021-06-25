#include <iostream>
using std::cout;
#include "SupremeClient.hpp"
using tabajaras_bank::SupremeClient;

int main()
{
	cout << "Client\n";

	SupremeClient felipe("Felipe", "12345678901", 250000);

	cout << "Name:\t\t" << felipe.name() << "\n";
	cout << "ID:\t\t" << felipe.id() << "\n";
	cout << "Balance:\t$ " << felipe.balance() << "\n";
	cout << "Rate of return:\t" << felipe.rate() * 100 << "%\n";
}
