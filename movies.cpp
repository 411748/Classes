#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

void movie::mDirector(char* Odirector){
  for(int i = 0; i < SIZE; i++){
    director[i] = Odirector[i];
  }
  return;
}

void movie::mTime(int Otime){
  time = Otime;
  return;
}


void movie::print(){
  cout << "Title: " << title << endl << "Year: " << year << endl << "Publisher: " << publisher << endl << "Director: " << director << endl << "Time: " << time << endl << endl;
  return;
}
