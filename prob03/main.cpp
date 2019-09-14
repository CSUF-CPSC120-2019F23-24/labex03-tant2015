// This program calculates a person's height in feet (') and inches (").
#include<iostream>

int main()
{
  int person_inches, person_feet, person_convert;                               // defind variable

  std::cout << "Please enter the person's height in inches:";                   // get that person hight in inches

  std::cin >> person_inches;

  person_feet = person_inches / 12;                                              // calcuation

  person_convert = person_inches % 12;                                 // get the remainder for inches

  std::cout<<"That person is " << person_feet << "'" << person_convert << "\"" << std::endl;

  return 0;

}
