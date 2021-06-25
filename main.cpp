#include <iostream>
using std::cout;
#include "StandardClient.hpp"
using tabajaras_bank::StandardClient;

int main()
{
	cout << "Client\n";

	StandardClient felipe("Felipe", "12345678901");

	cout << "Name:\t" << felipe.name() << "\n";
	cout << "ID:\t" << felipe.id() << "\n";
}
