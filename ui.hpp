#ifndef UI_HPP
#define UI_HPP

#include "bank.hpp"

namespace tabajaras_bank
{
	void display_main_menu(Bank& bank);
	Client* display_insert_client_screen(Bank const& bank);
}

#endif
