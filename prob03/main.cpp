// Sales prediction

#include <iostream>

int main()
{
  double percent_of_sales_increased = 18;
  int total_sales_2018 = 2103419277; // Total sales for last year
  long long int amount_of_sales_increased;
  long long int prediction; // Prediction of next year's sales


  // Calculates prediction of sales for next year
  amount_of_sales_increased = total_sales_2018 * (percent_of_sales_increased / 100);
  prediction = amount_of_sales_increased + total_sales_2018;
  std::cout << prediction << std::endl;

  // Prints total of sales for 2018 and prediction of sales for next year
  std::cout << "Last year's sales were $" << total_sales_2018 << std::endl;
  std::cout << "This year's sales prediction: $" << prediction << std::endl;

  return 0;
}
