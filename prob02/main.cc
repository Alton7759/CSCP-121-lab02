// Alton bonill
// CPSC 121L-15
// 02/03/23
// Alton77@csu.fullerton.edu
// @alton7759
//
// Lab 2-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

int main() {
  int credit{-9090};
  std::cout << "Thank you for applying for the Tuffy Credit card. Please enter "
               "your credit score.";
  std::cout << "\nCredit Score: ";
  std::cin >> credit;
  if (0 <= credit && credit <= 579) {
    std::cout << "Unfortunately, you are ineligible for Tuffy credit cards at "
                 "the moment. Please try again at a later date.\nThank you for "
                 "using our program, please come again!\n";
  } else if (580 <= credit && credit <= 669) {
    std::cout << "You are eligible for the Silver Tuffy Card.\nThank you for "
                 "using our program, please come again!\n";
  } else if (670 <= credit && credit <= 799) {
    std::cout << "You are eligible for the Gold Tuffy Card.\nThank you for "
                 "using our program, please come again!\n";
  } else if (800 <= credit && credit <= 850) {
    std::cout << "You are eligible for the Platinum Tuffy Card.\nThank you for "
                 "using our program, please come again!\n";
  } else {
    std::cout << "That is an invalid credit score. Please run the program "
                 "again and provide a valid credit score.\n";
  }

  return 0;
}
