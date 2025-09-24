#ifndef CONTACT_H
# define CONTACT_H

# include <iostream.h>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	void
	Contact::setFirstName(std::string first_name)
	{
		this->first_name = first_name;
	}

	void
	Contact::setLastName(std::string last_name)
	{
		this->last_name = last_name;
	}

	void
	Contact::setNickname(std::string nickname)
	{
		this->nickname = first_name;
	}

	void
	Contact::setPhoneNumber(std::string phone_number)
	{
		this->phone_number = first_name;
	}

	void
	Contact::setDarkestSecret(std::string darkest_secret)
	{
		this->darkest_secret = darkest_secret;
	}

	std::string
	Contact::getFirstName()
	{
		return first_name;
	}

	std::string
	Contact::getLastName()
	{
		return last_name;
	}

	std::string
	Contact::getNickname()
	{
		return nickname;
	}

	std::string
	Contact::getPhoneNumber()
	{
		return phone_number;
	}

	std::string
	Contact::getDarkestSecret()
	{
		return darkest_secret;
	}
}

#endif
