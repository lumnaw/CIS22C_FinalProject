#ifndef PERSON_H
#define PERSON_H

#include "Birthday.h"
#include <string>

using namespace std;

class Person {
private:
  string firstName;
	string lastName;
  Birthday birthday;
public:
  Person();
  Person(string, string, Birthday);
  string getFirstName();
  string getMiddleName();
  string getLastName();
  int getAge();
  Birthday getBirthday();
  void setFirstName(string);
  void setLastName(string);
  void setBirthday(Birthday);
};

#endif
