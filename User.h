#ifndef _USER_H
#define _USER_H
#include <string>
#include "Person.h"

class User {
protected:
	Person person;
	string email;
	string userName;
	string password;
	string userType;
	int keyValue;
public:
	User();
	User(string, string, string, string, int, Person);
	string getEmail();
	string getUserName();
	string getPassword();
	string getUserType();
	int getKeyValue();
	Person getPerson();
	void setEmail(string);
	void setUserName(string);
	void setPassword(string);
	void setUserType(string);
	void setKeyValue(int);
	void setPerson(Person);
	bool haveBirthday();
	bool checkUserInfo(string, string);
	User getCurrUser();
	void changeProfile();
	bool verifyPassword(string);
	void displayProfile();
};

#endif
