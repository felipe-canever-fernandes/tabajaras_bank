#ifndef STANDARD_CLIENT_HPP
#define STANDARD_CLIENT_HPP

#include "Client.hpp"

namespace tabajaras_bank
{
	class StandardClient : public Client
	{
	public:
		StandardClient
		(
			std::string const& name,
			std::string const& id,
			double balance
		);
	};
}

#endif
