#include <iostream>
#include <cstring>
#include "media.h"
//Code for movies.h
using namespace std;

//Adding the iteams that arent in media
class movie : public media{
 public:
  void mTime(int Otime);
  int time;
  void mDirector(char* Odirector);
  char director[SIZE];
  virtual void print();
};
