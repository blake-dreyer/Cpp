// encrypt.cpp
// Written by: Megan Monroe (mmonroe)
// Edited for HW0 by: Blake Dreyer (bdreye02)
// Date: 11 September 2022
// Purpose: This program encrypts a user-provided word
// using a Caesar cipher. The cipher shift amount is also specified by the user.

#include <iostream>
#include <string>

using namespace std;

int main() {

  //Create three variables to hold the shift amount, the letter to base the wrap around calcuation on and the word to encrypt
  //declare and initialize a string containing the alphabet
  int shift_amount;
  char wrap_around;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  string word_to_encrypt;

  //Print a message explaining the purpose of this program
  cout << "This program will encrypt a word provided by the user.";
  cout << endl;

  //Prompt the user for a word to encrypt
  cout << "Word to encrypt (In lowercase letters): ";
  //Retrive the word from the user and store it in our variable
  cin >> word_to_encrypt;

  //Prompt the user for a custom cypher shift amount
  cout << "Enter your desired cypher shift amount(Any integer greater than zero): ";
  //Retrive the number from the user and calculate the letter to base wrapping around on
  //End the program early if the shift amount is a multiple of 26
  cin >> shift_amount;
  if (shift_amount == 0){
    cout << word_to_encrypt << endl;
    return 0;
  }
  if (shift_amount >= 26){
    if (shift_amount % 26 == 0){
      cout << word_to_encrypt << endl;
      return 0;
    } else {
      shift_amount = shift_amount % 26;
    }
  }
  
  wrap_around = alphabet[(26-shift_amount)];
  

  //These variables store the length of the word and the position in that word
  //of the next letter to encrypt.
  int length_of_word = word_to_encrypt.length();
  int next_letter_pos = 0;

  cout << "Encrypted word: ";

  // Loop through each character of the word, generating the 
  // encrypted output as we go
  while ( next_letter_pos < length_of_word ) {
    char new_letter;

    //Perform the shift; use a different equation to shift based on whether we
    //have to wrap-around to the start of the alphabet
    if ( word_to_encrypt[next_letter_pos] < wrap_around ) {
      new_letter = word_to_encrypt[next_letter_pos] + shift_amount;
    } 
    else {
      new_letter = word_to_encrypt[next_letter_pos] - 26 + shift_amount;
    }

    //Print out the encrypted letter
    cout << new_letter;

    // Move to the next character
    next_letter_pos = next_letter_pos + 1;
  }

  //Finish off by printing a newline
  cout << endl;

  return 0;
} 
