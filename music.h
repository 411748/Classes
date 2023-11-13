#include <iostream>
#include <cstring>
#include "media.h"

//Code for music.h
using namespace std;

//Adding items not in media
class music : public media{
 public:
  void mTime(int Otime);
  int time;
  void mWritter(char* Owritter);
  char writter[SIZE];
  virtual void print();
};
