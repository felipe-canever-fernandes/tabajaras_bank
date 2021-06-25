#include "Client.hpp"

#include <cassert>
#include <regex>
using std::regex_match;

namespace tabajaras_bank
{
	Client::Client(std::string const& name, std::string const& id):
		m_name(validate_name(name)), m_id(validate_id(id))
	{}

	std::string Client::name() const
	{
		return m_name;
	}

	void Client::name(std::string const& name)
	{
		m_name = validate_name(name);
	}

	std::string Client::id() const
	{
		return m_id;
	}

	void Client::id(std::string const& id)
	{
		m_id = validate_id(id);
	}

	std::string Client::validate_name(std::string const& name)
	{
		// Check if not empty or only whitespace.
		assert(!regex_match(name, std::regex(R"(\s*)")));

		return name;
	}

	std::string Client::validate_id(std::string const& id)
	{
		// Check if 11 digits.
		assert(regex_match(id, std::regex(R"(\d{11})")));

		return id;
	}
}
