#include<iostream>

int main() {
    int evenCount = 0;
    int oddCount = 0;

    std::cout << "Enter 10 integers\n";

    for (int i = 0; i < 10; i++) {
        int number;
        std::cin >> number;

        if (number % 2 == 0) {
            ++evenCount;
        }
        else {
            ++oddCount;
        }
    }

    std::cout << "Even numbers: " << evenCount << "\n";
    std::cout << "Odd numbers: " << oddCount << "\n";

    return 0;

}
