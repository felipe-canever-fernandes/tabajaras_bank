#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>

namespace tabajaras_bank
{
	class Client
	{
	public:
		Client(std::string const& name);

		std::string name() const;
		void name(std::string const& name);

	private:
		static std::string validate_name(std::string const& name);
		std::string m_name;
	};
}

#endif
