#ifndef REVIEW_CONTAINER_H
#define REVIEW_CONTAINER_H

#include <vector>
#include <string>
#include "Reviews.h"

using namespace std;

template <class Type>
class ReviewContainer {
private:
  vector<Reviews> reviewsContainer;
  int count;
public:
  ReviewContainer() {
    vector<Reviews> reviewsContainer;
    count = 0;
  }
  /*
    Pushes Review object into vector
    @params Review object
  */
  void add(Review review) {
    reviewsContainer.push(review);
    count++;
  }

  /*
    If the count is greater than 0, will remove object at designated index
    @params integer signifying the index of the object to be removed
  */

  void deleteReview(int index) {
    if (count > 0) {
      reviewsContainer.erase(index);
      count--;
    }
  }

  // TODO: Finish displayReviews
  
  void displayReviews() {
    for (int i = 0; i < reviewsContainer.size(); i++) {
      // logic to displayReviews
    }
  }
};

#endif
