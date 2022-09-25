// my_ing.cpp
// Purpose: This program decides whether a user-provided
//          word ends in the suffix "ing"
// Written by: Blake Dreyer (bdreye02)

#include <iostream>
#include <string>

using namespace std;

int main()
{
  //Declare variables
  string user_word;

  //Prompt the user for a word to test
  cout << "Greetings! I am the \"ing\" decider!" << endl;
  cout << "Please enter a word: ";
  //Retrive the word from the user and store it in our variable
  cin >> user_word;
  
  //Evaluate whether word ends in "ing" and print result
  if (user_word.substr(user_word.length()-3) == "ing"){
    cout << "Your word ends in \"ing\"! Fantastic!" << endl;
  } else {
    cout << "Oh no! I think you meant " << user_word << "-ing!" << endl;
  }

  return 0;
}
