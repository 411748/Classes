#include <iostream>
#include <cstring>
#include "music.h"

//Code for music.cpp
using namespace std;

void music::mTime(int Otime){
  time = Otime;
  return;
}

void music::mWritter(char* Owritter){
  for(int i = 0; i < SIZE; i++){
    writter[i] = Owritter[i];
  }
  return;
}

void music::print(){
  cout << "Title: " << title << endl << "Year: " << year << endl << "Publisher: " << publisher << endl << "Writter: " << writter << endl << "Time: " << time << endl << endl;;
  return;
}
