#include<iostream>

int main() {
    int totalNumbers;

    std::cout << "How many numbers will you enter?\n";
    std::cin >> totalNumbers;

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    std::cout << "Enter " << totalNumbers << " integers:\n";

    for (int i = 0; i < totalNumbers; i++) {
        int number;
        std::cin >> number;

        if (number > 0) {
            ++positiveCount;
        }
        else if (number < 0) {
            ++negativeCount;
        }
        else {
            ++zeroCount;
        }
    }

    std::cout << "Positive numbers: " << positiveCount << "\n";
    std::cout << "Positive numbers: " << negativeCount << "\n";
    std::cout << "Positive numbers: " << zeroCount << "\n";

    return 0;
}
