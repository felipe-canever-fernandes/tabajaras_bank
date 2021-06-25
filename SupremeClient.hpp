#ifndef SUPREME_CLIENT_HPP
#define SUPREME_CLIENT_HPP

#include "Client.hpp"

namespace tabajaras_bank
{
	class SupremeClient : public Client
	{
	public:
		SupremeClient
		(
			std::string const& name,
			std::string const& id,
			double balance
		);

	private:
		static double validate_initial_balance(double balance);
	};
}

#endif
