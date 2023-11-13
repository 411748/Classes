#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "vgames.h"
#include "music.h"
#include "movies.h"

using namespace std;

const int SIZE = 10;

int main() {
  bool quit = false;
  char input[SIZE];
  while(!quit) {
    cout << "Enter what you want to do (ADD/SEARCH/DELETE/QUIT)" << endl;
    cin >> input;
    if(strcmp(input, "QUIT") == 0) {
      quit = true;
    }
    else if(strcmp(input, "ADD") == 0) {
      //Add code
    }
    else if(strcmp(input, "SEARCH") == 0) {
      //Search code
    }
    else if(strcmp(input, "DELETE") == 0) {
      //Delete code
    }
  }
}
