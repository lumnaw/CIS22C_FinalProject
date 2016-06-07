#ifndef REVIEWS_H
#define REVIEWS_H

#include <string>
#include "Users.h"

class Reviews {
private:
    string review;
    int rating;
    User author;
    string timePosted;
    
public:
    Reviews();
    Reviews(string r, int i, User a);
    ~Reviews();
    string getReview() {return review;}
    int getRating() {return rating;}
    User getAuthor() {return author;}
    string getTimePosted() {return timePosted;}
    
    void setReviews(string review) {this -> review =review; }
    void setRating(int rating) {this ->rating = rating; }
    void setAuthor(User author) {this -> author = author;}
    void setTimePosted(string timePosted) {this ->timePosted =timePosted; }
  
};
#endif
