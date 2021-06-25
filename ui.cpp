#include "ui.hpp"

#include <iostream>
using std::cin;
using std::cout;

namespace tabajaras_bank
{
	void display_main_menu()
	{
		while (true)
		{
			cout << "\t\tTABAJARA'S BANK\n";

			cout << "\n";

			cout << "\t0. Exit\n";

			cout << "\n";

			cout << "Enter an option: ";
			int option = -1;
			cin >> option;

			switch (option)
			{
			case 0:
				return;
			
			default:
				cout << "Invalid option!\n";
			}

			cout << "\n";
		}
	}
}
