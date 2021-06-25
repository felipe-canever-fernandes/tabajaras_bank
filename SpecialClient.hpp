#ifndef SPECIAL_CLIENT_HPP
#define SPECIAL_CLIENT_HPP

#include "Client.hpp"

namespace tabajaras_bank
{
	class SpecialClient : public Client
	{
	public:
		SpecialClient
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
