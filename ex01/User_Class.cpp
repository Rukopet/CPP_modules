#include "User_Class.hpp"

User::User() : _empty(true), funcs{&User::getNickname, &User::getFirstName, &User::getLastName}{
}
User::~User() {
}

//const std::string& PRIVATE_LinksFuncs = {&User::getFirstName,
//										&User::getFirstName,
//										&User::getFirstName};

// GETTERS

bool User::isEmpty() const {
	return _empty;
}

const std::string &User::getLogin() const {
	return _login;
}

const std::string &User::getFirstName() const {
	return _first_name;
}

const std::string &User::getLastName() const {
	return _last_name;
}

const std::string &User::getNickname() const {
	return _nickname;
}

const std::string &User::getPostalAddress() const {
	return _postal_address;
}

const std::string &User::getEmailAddress() const {
	return _email_address;
}

const std::string &User::getPhoneNumber() const {
	return _phone_number;
}

const std::string &User::getBirthdayDate() const {
	return _birthday_date;
}

const std::string &User::getFavoriteMeal() const {
	return _favorite_meal;
}

const std::string &User::getUnderwearColor() const {
	return _underwear_color;
}

const std::string &User::getDarkestSecret() const {
	return _darkest_secret;
}


// SETTERS

void User::setEmpty(bool flag) {
	User::_empty = flag;
}

void User::setNickname(const std::string &nickname) {
	_nickname = nickname;
}

void User::setLogin(const std::string &login) {
	_login = login;
}

void User::setPostalAddress(const std::string &postalAddress) {
	_postal_address = postalAddress;
}

void User::setEmailAddress(const std::string &emailAddress) {
	_email_address = emailAddress;
}

void User::setPhoneNumber(const std::string &phoneNumber) {
	_phone_number = phoneNumber;
}

void User::setBirthdayDate(const std::string &birthdayDate) {
	_birthday_date = birthdayDate;
}

void User::setFavoriteMeal(const std::string &favoriteMeal) {
	_favorite_meal = favoriteMeal;
}

void User::setUnderwearColor(const std::string &underwearColor) {
	_underwear_color = underwearColor;
}

void User::setDarkestSecret(const std::string &darkestSecret) {
	_darkest_secret = darkestSecret;
}

void User::setFirstName(const std::string &firstName) {
	_first_name = firstName;
}

void User::setLastName(const std::string &lastName) {
	_last_name = lastName;
}

void User::Foo() {
	funcs[0];
}




