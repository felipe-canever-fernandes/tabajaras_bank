#include "StandardClient.hpp"

namespace tabajaras_bank
{
	StandardClient::StandardClient
	(
		std::string const& name,
		std::string const& id
	):
		Client(name, id)
	{}
}
