// Alton Bonilla
// CPSC 121L-15
// 02/03/23
// Alton77@csu.fullerton.edu
// @Alton7759
//
// Lab 2-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

int main() {
  int size{-9090};
  std::cout
      << "You must be at least 55 inches to safely ride the TuffyTwister\n"
      << "Please enter your height in inches: ";
  std::cin >> size;
  if (size >= 55) {
    std::cout << "Congratulations! You are tall enough to ride!";
  } else {
    std::cout << "Safety is our first priority. Unfortunately, we can't let "
                 "you ride yet.";
  }
  std::cout << "\n";
  return 0;
}
