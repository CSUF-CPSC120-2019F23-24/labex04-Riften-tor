// This program reads in 3 integers, and calculates the average of the numbers

#include <iostream>

int main()
{
  const double NUM_INTS = 3; // Number of values to be averaged

  int num1, num2, num3;
  double average; // Average of the numbers

  // Get the numbers
  std::cout << "Enter three integers, each separated by one or more spaces: ";
  std::cin >> num1 >> num2 >> num3;

  // Calculate the average of the numbers
  average = (num1 + num2 + num3) / NUM_INTS;

  // Display the average, including the decimal portion
  std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3
    << " is: " << average << std::endl;

  return 0;
}
