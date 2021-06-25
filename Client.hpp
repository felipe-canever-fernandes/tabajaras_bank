#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>

namespace tabajaras_bank
{
	class Client
	{
	public:
		std::string name() const;
		void name(std::string const& name);

		std::string id() const;
		void id(std::string const& id);

	protected:
		Client(std::string const& name, std::string const& id);

	private:
		static std::string validate_name(std::string const& name);
		static std::string validate_id(std::string const& id);

		std::string m_name;
		std::string m_id;
	};
}

#endif
