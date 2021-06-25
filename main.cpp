#include <vector>

#include "bank.hpp"
using tabajaras_bank::Bank;
#include "ui.hpp"
using tabajaras_bank::display_main_menu;

int main()
{
	Bank bank;
	display_main_menu(bank);
}
