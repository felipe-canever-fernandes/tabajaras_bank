#include "bank.hpp"

#include <cassert>
#include <regex>
using std::regex_match;

using std::begin;

namespace tabajaras_bank
{
	Bank::~Bank()
	{
		for (Client* const p_client : m_clients)
			delete p_client;
	}

	Clients const& Bank::clients() const
	{
		return m_clients;
	}

	void Bank::insert_client(Client* const p_client)
	{
		assert(p_client != nullptr);
		assert(!client_exists(p_client->id()));

		m_clients.push_back(p_client);
	}

	void Bank::remove_client(Client* const p_client)
	{
		assert(p_client != nullptr);
		assert(client_exists(p_client->id()));

		size_t i = 0;

		for (; i < m_clients.size(); ++i)
			if (m_clients[i] == p_client)
				break;
		
		delete p_client;
		m_clients.erase(begin(m_clients) + i);
	}

	bool Bank::client_exists(std::string const& id) const
	{
		// Check if 11 digits.
		assert(regex_match(id, std::regex(R"(\d{11})")));

		for (Client* const p_client : m_clients)
			if (p_client->id() == id)
				return true;
		
		return false;
	}
}
