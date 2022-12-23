#include <iostream>

int main() {
  int a;
  bool is_prime = true;
  std::cout << "Enter a number: ";
  std::cin >> a;
  for (int i = 2; i <= a / 2; i++) {
    if (a % i == 0) {
      is_prime = false;
      break;
    }
  }
  if (is_prime) {
    std::cout << "the given number is prime" << std::endl;
  } else {
    std::cout << "the given number is not prime" << std::endl;
  }
  return 0;
}
