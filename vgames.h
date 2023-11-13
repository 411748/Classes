#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class vGame : public media{
 public:
  void mRating(int rating);
  int rating;
  virtual void print();
};
