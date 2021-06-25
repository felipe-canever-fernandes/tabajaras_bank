#include <iostream>
using std::cout;
#include "Client.hpp"
using tabajaras_bank::Client;

int main()
{
	cout << "Client\n";
	Client felipe("Felipe");
	cout << "Name: " << felipe.name() << "\n";
}
