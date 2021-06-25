#include "Client.hpp"

#include <cassert>
#include <regex>
using std::regex_match;

namespace tabajaras_bank
{
	Client::Client(std::string const& name):
		m_name(validate_name(name))
	{}

	std::string Client::name() const
	{
		return m_name;
	}

	void Client::name(std::string const& name)
	{
		m_name = validate_name(name);
	}

	std::string Client::validate_name(std::string const& name)
	{
		// Check if not empty or only whitespace.
		assert(!regex_match(name, std::regex(R"(\s*)")));

		return name;
	}
}
