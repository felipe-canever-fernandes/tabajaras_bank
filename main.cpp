#include <iostream>
using std::cout;
#include "StandardClient.hpp"
using tabajaras_bank::StandardClient;

int main()
{
	cout << "Client\n";

	StandardClient felipe("Felipe", "12345678901", 1000);

	cout << "Name:\t\t" << felipe.name() << "\n";
	cout << "ID:\t\t" << felipe.id() << "\n";
	cout << "Balance:\t$ " << felipe.balance() << "\n";
	cout << "Rate of return:\t" << felipe.rate() * 100 << "%\n";
}
