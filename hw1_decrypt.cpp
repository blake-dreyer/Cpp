// hw1_decrypt.cpp
// Written by: Blake Dreyer (bdreye02)
// Date: 16 September 2022
// Purpose: This program decrypts a user provided word with a user provided shift amount
// This program is a part of the comp11 hw01 assignment

#include <iostream>
#include <string>

using namespace std;

int main() {

  //Create two variables to hold the shift amount and the word to decrypt
  int shift_amount;
  string word_to_decrypt;
  char wrap_around;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";

  //Print a message explaining the purpose of this program
  cout << "Enter the word that you would like to decrypt (in lowercase characters)";
  cout << endl;

  //Prompt the user for a word to decrypt
  cout << "Word to decrypt: ";
  //Retrive the word from the user and store it in our variable
  cin >> word_to_decrypt;

  //Prompt the user for the shift amount
  cout << "Enter the shift amount: ";
  //Retrive the word from the user and store it in our variable
  cin >> shift_amount;

//End the program early if the shift amount is 0 or a multiple of 26
  if (shift_amount == 0){
    cout << word_to_decrypt << endl;
    return 0;
  }
  if (shift_amount >= 26){
    if (shift_amount % 26 == 0){
      cout << word_to_decrypt << endl;
      return 0;
    } else {
      shift_amount = shift_amount % 26;
    }
  }
  
  wrap_around = alphabet[shift_amount];

  //These variables store the length of the word and the position in that word
  //of the next letter to decrypt.
  int length_of_word = word_to_decrypt.length();
  int next_letter_pos = 0;

  cout << "Decrypted word: ";

  // Loop through each character of the word, generating the 
  // decrypted output as we go
  while ( next_letter_pos < length_of_word ) {
    char new_letter;

    //Perform the shift; use a different equation to shift based on whether we
    //have to wrap-around to the start of the alphabet
    if ( word_to_decrypt[next_letter_pos] >= wrap_around ) {
      new_letter = word_to_decrypt[next_letter_pos] - shift_amount;
    } 
    else {
      new_letter = word_to_decrypt[next_letter_pos] + 26 - shift_amount;
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
