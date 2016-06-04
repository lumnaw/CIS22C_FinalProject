#ifndef _USER_H
#define _USER_H
#include <string>
#include "Person.h"

class User {
protected:
	string userID;
	string email;
	string userName;
	string password;
	string userType;
public:
	User();
	User(string, string, string, string, string);
	string getUserID();
	string getEmail();
	string getUserName();
	string getPassword();
	string getUserType();
	void setUserID(string);
	void setEmail(string);
	void setUserName(string);
	void setPassword(string);
	void setUserType(string);
	bool haveBirthday();
	bool checkUserInfo(string, string);
	User getCurrUser();
	void changeProfile();
	bool verifyPassword(string);
	void displayProfile();
};

#endif
