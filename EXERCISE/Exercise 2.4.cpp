#include <iostream>
#include <string>
#include <sstream>

/*
2.4. Task 2.81.[1] A positive integer is perfect if it is even
of the sum of its divisors (without the number itself). For example, 6 is perfect because 6 = 1+2+3; the number 1 is not perfect. To write a procedure that finds and prints to the screen all perfect numbers,
not exceeding a given positive integer in parameter n.
*/

bool isPerfect(int n) {

	int i = 1;
	int sum = 0;
	while (i < n) {

		if (n % i == 0) {
			
			sum += i;
		}
		i++;
	}

	return sum == n;
}

void findPerfectNumbers(int n) {

    std::cout << "Perfect numbers not exceeding " << n << ": ";
    for (int i = 2; i <= n; i++) {

        if (isPerfect(i)) {

            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {

    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "There are no perfect numbers for n < 2." << std::endl;
    }
    else {
        findPerfectNumbers(n);
    }

    return 0;
}
