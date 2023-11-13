#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class movie : public media{
 public:
  void mTime(int Otime);
  int time;
  void mDirector(char* Odirector);
  char director[SIZE];
  virtual void print();
};
