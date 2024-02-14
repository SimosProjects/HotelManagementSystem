#include "Account.h"

//Constructor
Account::Account(const std::string& username, const std::string& password, const AccountType type) {}

//Destructor
Account::~Account() {}

//Returns username
std::string Account::getUsername() {
    return username;
}

//Returns password
std::string Account::getPassword() {
    return password;
}

//Returns account type
AccountType Account::getType() {
    return type;
}