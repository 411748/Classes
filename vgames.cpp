#include <iostream>
#include <cstring>
#include "vgames.h"

using namespace std;

void vGame::mRating(int Orating) {
  rating = Orating;
  return;
}

void vGame::print(){
  cout << "Title: " << title << endl << "Year: " << year << endl << "Publisher: " << publisher << endl << "Rating: " << rating << endl << endl;
  return;
}
