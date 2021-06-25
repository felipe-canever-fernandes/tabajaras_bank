#include "StandardClient.hpp"

namespace tabajaras_bank
{
	StandardClient::StandardClient
	(
		std::string const& name,
		std::string const& id,
		double const balance
	):
		Client(name, id, balance)
	{}
}
