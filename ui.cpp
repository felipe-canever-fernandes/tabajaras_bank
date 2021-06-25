#include "ui.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::getline;
#include <regex>
using std::regex_match;
#include <string>

#include "SpecialClient.hpp"
#include "StandardClient.hpp"
#include "SupremeClient.hpp"

namespace tabajaras_bank
{
	void display_main_menu(Bank& bank)
	{
		while (true)
		{
			cout << "\t\tTABAJARA'S BANK\n";

			cout << "\n";

			cout << "\t1. Insert Client\n";
			cout << "\t0. Exit\n";

			cout << "\n";

			cout << "Enter an option: ";
			int option = -1;
			cin >> option;

			cout << "\n";

			switch (option)
			{
			case 1:
			{
				Client* p_client = display_insert_client_screen(bank);

				if (p_client != nullptr)
					bank.insert_client(p_client);
			}
				break;

			case 0:
				return;
			
			default:
				cout << "Invalid option!\n";
			}

			cout << "\n";
		}
	}

	Client* display_insert_client_screen(Bank const& bank)
	{
		cout << "\t\tINSERT CLIENT\n";

		cout << "\n";

		std::string name;

		while (true)
		{
			cout << "Name: ";
			cin.ignore();
			getline(cin, name);

			// Check if not empty or only whitespace.
			if (!regex_match(name, std::regex(R"(\s*)")))
				break;
			
			cout << "The name must not be empty!\n";
		}

		cout << "\n";

		std::string id;

		while (true)
		{
			cout << "    ____________\n";
			cout << "ID: ";
			cin.ignore();
			getline(cin, id);

			// Check if 11 digits.
			if (regex_match(id, std::regex(R"(\d{11})")))
			{
				if (!bank.client_exists(id))
					break;
				else
					cout << "There is already another client with this ID!\n";
			}
			else
				cout << "The ID must be 11 digits!\n";
		}

		cout << "\n";

		int client_type = -1;

		while (true)
		{
			cout << "\t\tClient Type\n";
		
			cout << "\n";

			cout << "\t1. Standard\n";
			cout << "\t2. Special\n";
			cout << "\t3. Supreme\n";

			cout << "\n";

			cout << "Enter an option: ";
			cin >> client_type;

			if (client_type >= 1 && client_type <= 3)
				break;
			
			cout << "Invalid option!\n";
			cout << "\n";
		}

		cout << "\n";

		double minimum_initial_balance = 0;

		switch (client_type)
		{
		case 1:
			minimum_initial_balance = 0;
			break;
		
		case 2:
			minimum_initial_balance = 10000;
			break;

		case 3:
			minimum_initial_balance = 100000;
			break;
		}

		double initial_balance = 0;

		while (true)
		{
			cout << "Initial balance ($): ";
			cin >> initial_balance;

			if (initial_balance >= minimum_initial_balance)
				break;
			
			cout
				<< "This type of client must have an initial balance of at least $ "
				<< minimum_initial_balance << "!\n";
		}

		cout << "\n";

		Client* p_client = nullptr;

		switch (client_type)
		{
		case 1:
			p_client = new StandardClient(name, id, initial_balance);
			break;
		
		case 2:
			p_client = new SpecialClient(name, id, initial_balance);
			break;

		case 3:
			p_client = new SupremeClient(name, id, initial_balance);
			break;
		}

		print_client(*p_client);

		cout << "\n";

		cout << "Do you want to insert this client? (y/n): ";
		char answer = '\0';
		cin >> answer;

		if (answer == 'n')
		{
			delete p_client;
			p_client = nullptr;
		}

		return p_client;
	}

	void print_client(Client const& client)
	{
		cout << "Name:\t\t\t" << client.name() << "\n";
		cout << "ID:\t\t\t" << client.id() << "\n";

		cout << "Type:\t\t\t";

		if (dynamic_cast<StandardClient const*>(&client))
			cout << "Standard";
		else if (dynamic_cast<SpecialClient const*>(&client))
			cout << "Special";
		else if (dynamic_cast<SupremeClient const*>(&client))
			cout << "Supreme";
		else
			cout << "Unknown";

		cout << "\n";

		cout << "Balance:\t\t$ " << client.balance() << "\n";
		cout << "Rate of return:\t\t" << client.rate() * 100 << "%\n";

		cout
			<< "Balance next month:\t$ "
			<< client.balance() * (1 + client.rate())
			<< "\n";
	}
}
