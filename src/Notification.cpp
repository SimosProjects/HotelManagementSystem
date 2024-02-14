#include "Notification.h"

//Constructor
Notification::Notification(const std::string& message, const std::string& recipient) {}

//Destructor
Notification::~Notification() {}

//Returns message
std::string Notification::getMessage() {
    return message;
}

//Returns message recipient
std::string Notification::getRecipient() {
    return recipient;
}