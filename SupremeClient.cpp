#include "SupremeClient.hpp"
#include <cassert>

namespace tabajaras_bank
{
	SupremeClient::SupremeClient
	(
		std::string const& name,
		std::string const& id,
		double const balance
	):
		Client(name, id, validate_initial_balance(balance), 0.08)
	{}

	double SupremeClient::validate_initial_balance(double const balance)
	{
		assert(balance >= 100000);
		return balance;
	}
}
