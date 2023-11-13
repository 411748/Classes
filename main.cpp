#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "vgames.h"
#include "music.h"
#include "movies.h"

using namespace std;

int main() {
  bool quit = false;
  char input[SIZE];
  char input_add[SIZE];
  char input_search[SIZE];
  char input_delete[SIZE];
  char cinput[SIZE];
  int iinput; 
  vector<media*> mediaVector; 
  while(!quit) {
    cout << "Enter what you want to do (ADD/SEARCH/DELETE/QUIT)" << endl;
    cin >> input;
    if(strcmp(input, "QUIT") == 0) {
      quit = true;
    }
    else if(strcmp(input, "ADD") == 0) {
      cout << "Input what you would like to add (vgame, music, or movie)" << endl;
      cin >> input_add;
      if(strcmp(input_add, "vgame") == 0) {
	vGame* media = new vGame();
	cout << "Enter the title as one word, you can use dashes or underscores if title has more than one word" << endl;
	cin >> cinput;
        media->mTitle(cinput);
	cout << "What year was this vgame made" << endl;
	cin >> iinput;
	media->mYear(iinput);
	cout << "Who was the publisher of the vgame?" << endl;
	cin >> cinput;
	media->mPublisher(cinput);
	cout << "What is the rating of this vgame?" << endl;
	cin >> iinput;
	media->mRating(iinput);
	mediaVector.push_back(media);
      }
      else if(strcmp(input_add, "movie") == 0) {
	movie* media = new movie();
	cout << "Enter the title as one word, you can use dashes or underscores if title has more than one word" << endl;
	cin >> cinput;
	media->mTitle(cinput);
	cout << "What year was this movie made in?" << endl;
	cin >> iinput;
	media->mYear(iinput);
	cout << "Who published this movie?" << endl;
	cin >> cinput;
	media->mPublisher(cinput);
	cout << "Who directed this movie?" << endl;
	cin >> cinput;
	media->mDirector(cinput);
	cout << "How long is this movie in minutes?" << endl;
	cin >> iinput;
	media->mTime(iinput);
	mediaVector.push_back(media);
      }
    }
    else if(strcmp(input, "SEARCH") == 0) {
      cout << "Input the title of what you want to search for: " << endl;
      cin >> input_search;
      for(int i = 0; i < mediaVector.size(); i++) {
	if(mediaVector[i]->compare_Title(input_search) == true) {
	  mediaVector[i]->print();
	}
      }
    }
    //else if(strcmp(input, "DELETE") == 0) {
      //cout << "Input the title of what you want to delete: " << endl;
      //cin >> input_delete;
    //}
  }
}
