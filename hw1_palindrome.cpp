// hw1_palindrome.cpp
// Purpose: This program decides whether a user-provided
// word is a palindrome or "close" to a palindrome. It will
// continue to ask for words as long as you enter one of the two
// Written by: Blake Dreyer (bdreye02) for hw01
// Date: 16 Sep 2022

#include <iostream>
#include <string>

using namespace std;

int main()
{
  //Declare variables
  string user_word;
  string user_word_flipped;
  
  cout << "Greetings! I am the palindrome decider!" << endl;
  
  while (true){
    //Reset flipped word for loops other than the first
    user_word_flipped = "";

    //Prompt the user for a word to test and store it in a variable
    cout << "Please enter a word: ";
    cin >> user_word;

    //Flip the users word so we can evaluate pallindromeyness
    for (int i=user_word.length()-1; i>=0; i--){
        user_word_flipped.push_back(user_word[i]);
    }
  
    //Evaluate whether the word is a palindrome
    if(user_word == user_word_flipped){
        cout << "Your word is a palindrome! Fantastic!" << endl;
    } else if(user_word.substr(0,3) == user_word_flipped.substr(0,3)){
        cout << "Not quite a palindrome, but close enough." << endl;
    } else {
        cout << "Your word is NOT a palindrome. Thanks anyway!" << endl;
        break;
    }
  }
  return 0;
}
