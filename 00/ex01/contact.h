#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:
	void
	setFirstName(std::string first_name);

	void
	setLastName(std::string last_name);

	void
	setNickname(std::string nickname);

	void
	setPhoneNumber(std::string phone_number);

	void
	setDarkestSecret(std::string darkest_secret);

	std::string getFirstName() const;

	std::string getLastName() const;

	std::string getNickname() const;

	std::string getPhoneNumber() const;

	std::string	getDarkestSecret() const;
};

#endif
