#include <iostream>
#include <cstring>
#include "media.h"
//Code for vgames.h
using namespace std;

//Adding iteams not in media
class vGame : public media{
 public:
  void mRating(int rating);
  int rating;
  virtual void print();
};
