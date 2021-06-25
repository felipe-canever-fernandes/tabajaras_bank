#include "SpecialClient.hpp"
#include <cassert>

namespace tabajaras_bank
{
	SpecialClient::SpecialClient
	(
		std::string const& name,
		std::string const& id,
		double const balance
	):
		Client(name, id, validate_initial_balance(balance), 0.065)
	{}

	double SpecialClient::validate_initial_balance(double const balance)
	{
		assert(balance >= 10000);
		return balance;
	}
}
