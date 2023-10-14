#include <iostream>
#include <cmath>

/*
1.11. For keyboard-entered natural numbers n and k, to check and
print on the screen whether n is an exact power of the number k.
*/

int main() {

    int n, k;
    std::cin >> n >> k;

    int temp = n;
    int power = 0;

    for (power = 0; temp % k == 0; power++) {
        temp /= k;
    }

    if (temp == 1) {
        std::cout << n << " is an exact power of " << k << ". " << k << "^" << power << " = " << n << std::endl;
    }
    else {
        std::cout << n << " is not an exact power of " << k << "." << std::endl;
    }

    return 0;
}