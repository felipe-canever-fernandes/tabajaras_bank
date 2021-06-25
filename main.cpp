#include <iostream>
using std::cout;
#include "Client.hpp"
using tabajaras_bank::Client;

int main()
{
	cout << "Client\n";

	Client felipe("Felipe", "12345678901");

	cout << "Name:\t" << felipe.name() << "\n";
	cout << "ID:\t" << felipe.id() << "\n";
}
