#include "User.h"
#include <iostream>
#include <string>

using namespace std;

/*
  Constructors
*/
User::User() {
   setUserID("MISSING");
   setEmail("MISSING");
   setUserName("MISSING");
   setPassword("MISSING");
   setUserType("member");
}

User::User(string userID, string email, string userName, string password, string userType) {
  setUserID(userID);
  setEmail(email);
  setUserName(userName);
  setPassword(password);
  setUserType(userType);
}

/*
  Accessors and Mutators
*/

void User::setUserID(string userID) {  this->userID = userID; }
void User::setEmail(string email) { this->email = email; }
void User::setUserName(string userName) { this->userName = userName; }
void User::setPassword(string password) { this->password = password; }
void User::setUserType(string userType) { this->userType = userType; }
string User::getUserID() { return userID; }
string User::getEmail() { return email; }
string User::getUserName() { return userName; }
string User::getPassword() { return password; }
string User::getUserType() { return userType; }

bool User::verifyPassword(string password) { return (this->password == password); }

// TODO: Write code for displayProfile && changeProfile

void changeProfile();
void displayProfile();
