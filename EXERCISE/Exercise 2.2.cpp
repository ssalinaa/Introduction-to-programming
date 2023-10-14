#include <iostream>
#include <string>
#include <sstream>

/*
2.2. Task 4.25.[1] To define a procedure that receives an integer
parameter n and number system base k ≤ 16. The procedure should print
on the screen the representation of the number n in the base k system.
*/

void PrintBaseK(int n, int k) {

    // Define the characters used for digits beyond 9 (hexadecimal)
    char hexChars[] = "0123456789ABCDEF";

    // Handle the case when n is zero
    if (n == 0) {
        std::cout << "0" << std::endl;
        return;
    }

    // Create a string to store the base-k representation
    std::string result;

    // Handle negative numbers
    if (n < 0) {
        result = "-";
        n = -n;
    }

    // Calculate the base-k representation
    while (n > 0) {
        int digit = n % k;
        result = hexChars[digit] + result;  // Append the digit to the result
        n /= k;
    }

    std::cout << result << std::endl;
}

int main() {

    int n, k;
    std::cout << "Enter an integer (n): ";
    std::cin >> n;
    std::cout << "Enter the base (k, 2 <= k <= 16): ";
    std::cin >> k;

    if (k < 2 || k > 16) {

        std::cout << "Invalid base. Please enter a base between 2 and 16." << std::endl;
    }
    else {

        PrintBaseK(n, k);
    }

    return 0;
}