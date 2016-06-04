#include "Birthday.h"
#include <string>

using namespace std;

/*
  Constructors
*/

Birthday::Birthday() { setBirthday(-1, -1, -1); }

Birthday::Birthday(int year, int month, int day) { setBirthday(year, month, day); }

/*
  Accessors and Mutators
*/

void Birthday::setYear(int year) { this->year = year; }
void Birthday::setMonth(int month) { this->month = month; }
void Birthday::setDay(int day) { this->day = day; }
void Birthday::setBirthday(int year, int month, int day) {
  setYear(year);
  setMonth(month);
  setDay(day);
}
int Birthday::getYear() { return year; }
int Birthday::getMonth() { return month; }
int Birthday::getDay() { return day; }

// TODO: Figure out how to calculate age.

int Birthday::getAge() { return 1; }
