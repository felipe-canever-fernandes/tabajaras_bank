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

		double balance() const;
		void balance(double balance);

	protected:
		Client(std::string const& name, std::string const& id, double balance);

	private:
		static std::string validate_name(std::string const& name);
		static std::string validate_id(std::string const& id);
		static double validate_balance(double balance);

		std::string m_name;
		std::string m_id;
		double m_balance;
	};
}

#endif
