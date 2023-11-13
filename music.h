#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class music : public media{
 public:
  void mTime(int Otime);
  int time;
  void mWritter(char* Owritter);
  char writter[SIZE];
  virtual void print();
};
