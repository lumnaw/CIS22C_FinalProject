#ifndef _USER_H
#define _USER_H
#include <string>

class User {
private:
	string firstName;
	string middleName;
	string lastName;
	string userID;
	string email;
	string userName;
	string password;
	int age;
	string birthday;
	string userType;
public:
	User(string, string, string, string, string, string, string, int, string, string);
	string getFirstName();
	string getMiddleName();
	string getLastName();
	string getUserID();
	string getEmail();
	string getUserName();
	string getPassword();
	int getAge();
	string getBirthday();
	string getUserType();
	void setFirstName(string);
	void setMiddleName(string);
	void setLastName(string);
	void setUserID(string);
	void setEmail(string);
	void setUserName(string);
	void setPassword(string);
	void setAge(int);
	void setBirthday(string);
	void setUserType(string);
	bool haveBirthday();
	bool checkUserInfo(string, string);
	User getCurrUser();
	void changeProfile();
	bool verifyPassword(string);
	void displayProfile();
};
#endif
