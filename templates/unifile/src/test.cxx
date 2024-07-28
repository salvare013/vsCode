#include <math.h>
#include <iostream>
bool IsPrime(int num) {
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}
int main(void) {
  int num;
  std::cout << ">>>";
  std::cin >> num;
  std::cout << ">>>" << IsPrime(num) << std::endl;

  return 0;
}