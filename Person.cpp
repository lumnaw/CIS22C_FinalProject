#include "Person.h"

#include <string>

using namespace std;


// Constructors


Person::Person() {

}

Person::Person(string firstName, string lastName, Birthday birthday) {
  setFirstName(firstName);
  setLastName(lastName);
  setBirthday(birthday);
}

// Accessors and Mutators

void Person::setFirstName(string firstName) { this->firstName = firstName; }
void Person::setLastName(string lastName) { this->lastName = lastName; }
void Person::setBirthday(Birthday birthday) { this->birthday = birthday; }

string Person::getFirstName() { return firstName; }
string Person::getLastName() { return lastName; }
Birthday Person::getBirthday() { return birthday; }
int Person::getAge() { return birthday.getAge(); }
