#include <iostream>
#include <cmath>
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
void findPrimeSum(int num) {
    bool found = false;
    std::cout << num << " = ";
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            std::cout << i << " + " << (num - i) << " ";
            found = true;
        }
    }
    if (!found) {
        std::cout << "No prime sum possible";
    }
    std::cout << std::endl;
}
int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    findPrimeSum(num);
    return 0;
}
