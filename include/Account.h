#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

enum class AccountType { GUEST, RECEPTIONIST, HOUSEKEEPER, SERVER };

class Account {
private:
    std::string username, password;
    AccountType type;

public:
    //Constructor definition
    Account(const std::string& username, const std::string& password, const AccountType type);

    //Destructor definition
    ~Account();

    //Accesor methods
    std::string getUsername();
    std::string getPassword();
    AccountType getType();
};

#endif