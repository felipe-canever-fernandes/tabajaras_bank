#ifndef BANK_HPP
#define BANK_HPP

#include <vector>
#include "Client.hpp"

namespace tabajaras_bank
{
	using Clients = std::vector<Client*>;

	class Bank
	{
	public:
		~Bank();

		Clients const clients() const;
		void insert_client(Client* const p_client);
		bool client_exists(std::string const& id) const;

	private:
		Clients m_clients;
	};
}

#endif
