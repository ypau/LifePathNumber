#include <LifePathNumber.hpp>
#include <string>

int lpn::calculateLifePathNumber(const std::string& dateOfBirth) {
  int lifePathNumber = 0;
  
  // Calculate the sum of all digits in the date of birth
  for (char c : dateOfBirth) {
    if (isdigit(c)) {
      lifePathNumber += c - '0';
    }
  }
  
  // Reduce the sum to a single digit by repeating the process
  while (lifePathNumber > 9 && lifePathNumber != 11 && lifePathNumber != 22 && lifePathNumber != 33) {
    int sum = 0;
    while (lifePathNumber > 0) {
      sum += lifePathNumber % 10;
      lifePathNumber /= 10;
    }
    lifePathNumber = sum;
  }
  
  return lifePathNumber;
}
