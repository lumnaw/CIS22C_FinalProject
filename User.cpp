#include "User.h"
#include <iostream>
#include <string>

using namespace std;

/*
  Constructors
*/
User::User() {
   setEmail("MISSING");
   setUserName("MISSING");
   setPassword("MISSING");
   setUserType("member");
}

User::User(string email, string userName, string password, string userType, int keyValue, Person person) {
  setEmail(email);
  setUserName(userName);
  setPassword(password);
  setUserType(userType);
  setKeyValue(keyValue);
  setPerson(person);
}

/*
  Accessors and Mutators
*/

void User::setEmail(string email) { this->email = email; }
void User::setUserName(string userName) { this->userName = userName; }
void User::setPassword(string password) { this->password = password; }
void User::setUserType(string userType) { this->userType = userType; }
void User::setKeyValue(int keyValue) { this->keyValue = keyValue; }
void User::setPerson(Person person) { this->person = person; }
string User::getEmail() { return email; }
string User::getUserName() { return userName; }
string User::getPassword() { return password; }
string User::getUserType() { return userType; }
int User::getKeyValue() { return keyValue; }
Person User::getPerson() { return person; }

bool User::verifyPassword(string password) { return (this->password == password); }

// TODO: Write code for displayProfile && changeProfile

void changeProfile();
void displayProfile();
