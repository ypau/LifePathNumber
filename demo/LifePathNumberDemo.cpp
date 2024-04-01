#include <LifePathNumber.hpp>
#include <iostream>

int main() {
  std::string dateOfBirth;
  std::cout << "Enter your date of birth (in the format DDMMYYYY): ";
  std::cin >> dateOfBirth;
  
  int lifePathNumber = lpn::calculateLifePathNumber(dateOfBirth);
  std::cout << "Your Life Path Number is: " << lifePathNumber << std::endl;
  
  return 0;
}