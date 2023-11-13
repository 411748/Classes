#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"
#include "vgames.h"
#include "music.h"
#include "movies.h"

// 11/12/2023
// Nick Braun
// Classes - User can either ADD, SEARCH, DELETE, or QUIT with the options for movies, music, or video games.


using namespace std;

//Main function
int main() {
  //Defulted to not quit
  bool quit = false;
  char input[SIZE];
  char input_add[SIZE];
  char input_search[SIZE];
  char input_delete[SIZE];
  char cinput[SIZE];
  int iinput;
  //Introducing vector
  vector<media*> mediaVector;
  //Continues untill user says "QUIT"
  while(!quit) {
    //Gives 4 options
    cout << "Enter what you want to do (ADD/SEARCH/DELETE/QUIT)" << endl;
    cin >> input;
    //User wants to quit
    if(strcmp(input, "QUIT") == 0) {
      quit = true;
    }
    //User wants to add
    else if(strcmp(input, "ADD") == 0) {
      cout << "Input what you would like to add (vgame, music, or movie)" << endl;
      cin >> input_add;
      //User wants to add video game
      if(strcmp(input_add, "vgame") == 0) {
	//Asking for the info that they want to add
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
      //User wants to add movie
      else if(strcmp(input_add, "movie") == 0) {
	//Asking for the info that they want to add
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
      //User wants to add music
      else if(strcmp(input_add, "music") == 0) {
	//Asking for the info that they want to add
	music* media = new music();
	cout << "Enter the name of the song as one word, you can use dashes or underscored if title has more than one word" << endl;
	cin >> cinput;
	media->mTitle(cinput);
	cout << "What year was this song released?" << endl;
	cin >> iinput;
	media->mYear(iinput);
	cout << "Who published this song?" << endl;
	cin >> cinput;
	media->mTitle(cinput);
	cout << "How many seconds is this song?" << endl;
	cin >> iinput;
	media->mTime(iinput);
	cout << "Who wrote this song?" << endl;
	cin >> cinput;
	media->mWritter(cinput);
	mediaVector.push_back(media);
      }
    }
    //User wants to search
    else if(strcmp(input, "SEARCH") == 0) {
      //Finding the thing and printing
      cout << "Input if you want to search by title or by year(title or year)" << endl;
      cin >> input_search;
      if(strcmp(input_search, "title") == 0){
	char input_title[SIZE];
	cout << "Enter the title as one word, use dashes or underscores if the title has more than one word" << endl;
	cin >> input_title;
	for(int i = 0; i < mediaVector.size(); i++) {
	  if(mediaVector[i]->compare_Title(input_title) == true) {
	    mediaVector[i]->print();
	  }
	}
      }
      else if(strcmp(input_search, "year") == 0) {
	int int_year;
	cout << "Enter the year you want to search for:" << endl;
	cin >> int_year;
	for(int i = 0; i < mediaVector.size(); i++) {
	  if(mediaVector[i]->compare_Year(int_year) == true) {
	    mediaVector[i]->print();
	  }
        } 
      }
    }
  
    //User wants to delete
    else if(strcmp(input, "DELETE") == 0) {
      //Finding the thing and deleting 
      cout << "Enter if you want to delete by year or title(title or year)" << endl;
      cin >> input_delete;
      if(strcmp(input_delete, "title") == 0) {
	char input_title[SIZE];
	cout << "Enter the title you want to delete:" << endl;
	cin >> input_title;
	for(int i = 0; i < mediaVector.size(); i++) {
	  if(mediaVector[i]->compare_Title(input_title) == true) {
	    delete mediaVector.at(i);
	    mediaVector.erase(mediaVector.begin() + i);
	  }
	}
      }
      else if(strcmp(input_delete, "year") == 0) {
	int int_year;
	cout << "Enter the year you want to delete from: " << endl;
	cin >> int_year;
	for(int i =0; i < mediaVector.size(); i++) {
	  if(mediaVector[i]->compare_Year(int_year) == true) {
	    delete mediaVector.at(i);
	    mediaVector.erase(mediaVector.begin() + i);
	  }
	}
      }
    }
  }
}
