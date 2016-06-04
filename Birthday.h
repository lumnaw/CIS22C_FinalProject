#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday {
private:
  int year;
  int month;
  int day;
public:
  Birthday();
  Birthday(int, int, int);
  void setYear(int);
  void setMonth(int);
  void setDay(int);
  void setBirthday(int, int, int);
  int getYear();
  int getMonth();
  int getDay();
  int getAge();
};

#endif
