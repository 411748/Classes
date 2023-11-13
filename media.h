#ifndef __media_h
#define __media_h

#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 30;

class media{
 public:
  void mTitle(char* Otitle);
  void mYear(int year);
  void mPublisher(char* Opublisher);
  bool compare_Title(char* input_compare);
  char title[SIZE];
  char publisher[SIZE];
  int year;
  virtual void print();
};

#endif // __media_h
