#ifndef EX01_USER_CLASS_HPP
#define EX01_USER_CLASS_HPP

#include <iostream>
#include <string>

//typedef const std::string &(*PRIVATE_FuncsFromUsers)();


class User {
public:
	User();
	~User();

	bool isEmpty() const;
	const std::string &getLogin() const;
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
	const std::string &getPostalAddress() const;
	const std::string &getEmailAddress() const;
	const std::string &getPhoneNumber() const;
	const std::string &getBirthdayDate() const;
	const std::string &getFavoriteMeal() const;
	const std::string &getUnderwearColor() const;
	const std::string &getDarkestSecret() const;


	void setEmpty(bool empty);
	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setNickname(const std::string &nickname);
	void setLogin(const std::string &login);
	void setPostalAddress(const std::string &postalAddress);
	void setEmailAddress(const std::string &emailAddress);
	void setPhoneNumber(const std::string &phoneNumber);
	void setBirthdayDate(const std::string &birthdayDate);
	void setFavoriteMeal(const std::string &favoriteMeal);
	void setUnderwearColor(const std::string &underwearColor);
	void setDarkestSecret(const std::string &darkestSecret);

//	typedef void (User::*Func_array)();
//	Func_array funcs[1] = {&User::Foo};
//	typedef const std::string &(User::*func_array)() const;
//	func_array funcs[3];

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;
	bool _empty;
};


#endif //EX01_USER_CLASS_HPP