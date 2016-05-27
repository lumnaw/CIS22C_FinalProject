//User header file

#include <string>
//include review container & business file

#ifndef USERS_H
#define USERS_H

class Users {
private:
    string firstName;
    string lastName;
    string middleName;
    stinng userID;
    string email;
    string userName;
    string password;
    int age;
    string birthday;
    
public:
    string getFirstName();
    string getLastName();
    string getMiddleName();
    string getUserID();
    string getEmail();
    string getUserName();
    string getPassword();
    int getAge();
    string getBirthday();
    void setFirstName (string s);
    void setLastName (string s);
    void setMiddleName (string s);
    void setUserID (string s);
    void setEmail (string s);
    void setBirthday(string s);
    bool haveBirthday ();
    bool checkUserInfo (string u, string p);
    Users getCurrUser();
    void changeProfile ();
    bool verifyPassword (string s);
    void displayProfile();
    
    
};


class Admin : public Users {
private:
    bool isAdmin();
    string AdminCode;
    
public:
    bool editReview(Review r);
    bool editProfile(Member m);
    bool deleteMember (Member m);
    bool deleteBusinessOwner(BusinessOwner b);
    
    
};

class Member : public Users {
private:
    bool isMember;
public:
    Review writeReview (Review r);
    bool postReview (Review r, Business b);
    bool registerMember();
    void rate (int n);
    
};

class BusinessOwner : public Users {
private:
    bool isBusinessOwner;
    Business* BusinessOwned;
public:
    string respondToReview();
    bool ownsBusiness (Business b);
    void editBusiness (Business b);
    
};


#endif
