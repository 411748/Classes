#include <iostream>
#include <cstring>
#include "media.h"

//Code for media.cpp
using namespace std;

void media::mTitle(char* Otitle) {
  for(int i = 0; i < SIZE; i++) {
    title[i] = Otitle[i];
  }
  return;
}

void media::mYear(int Oyear) {
  year = Oyear;
}

void media::mPublisher(char* Opublisher) {
  for(int i = 0; i < SIZE; i++) {
    publisher[i] = Opublisher[i];
  }
  return;
}

bool media::compare_Title(char* input_compare) {
  if(strcmp(input_compare, title) == 0) {
    return true;
  }
  else {
    return false;
  }
}

void media::print() {
  cout << "You should never see this message" << endl;  
}
