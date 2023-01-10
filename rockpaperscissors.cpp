/*    Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.

    Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.

    Compares the user’s choice and the computer’s choice and determine the winner.
    Informs the user who the winner is. */


#include <iostream>
#include <stdlib.h>
#include <time.h>
 
int main() {
 
   // Live long and prosper
  srand (time(NULL));
 
  int computer = rand() % 3 + 1;
 
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
 
  std::cout << "shoot! ";

  //user input
  std::cin >> user;

  if (user == 1 and computer == 1 or user == 2 and  computer == 2 or user == 3 and computer == 3) {

    std::cout << "tie\n";

}
  else if (user == 1 and computer == 3 or user == 2 and computer == 1 or user == 3 and computer == 2) {
    std::cout << "Computer: " << computer << "\n";
    std::cout << "you win\n";
}

  else {
    std::cout << "Computer: " << computer << "\n";
    std::cout << "you loose\n";
  }

}

/* 
1rock beat 3scissors
2paper beat 1rock
3scissors beats 2paper

2paper looses 3scissors
1rock looses 2paper

3scissors looses to 1rock


*/