#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <string>

class Notification {
private:
    std::string message, recipient;

public:
    //Constructor definition
    Notification(const std::string& message, const std::string& recipient);

    //Destructor definition
    ~Notification();

    //Accesor methods
    std::string getMessage();
    std::string getRecipient();
};

#endif