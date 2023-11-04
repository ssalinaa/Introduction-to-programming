#include <iostream>
#include <climits>
#include <cmath>

	/*
	
	Задача 1:
	Напишете функции min, max, pow и swap, които да работят с две цели числа. Функцията min да връща по-малкото от двете числа, функцията max да връща по-голямото от двете числа, функцията pow да връща първото число на степен второто число, а функцията swap да разменя стойностите на двете числа. Напишете програма, която да използва написаните функции.
	
	Пример:
	
	Input: 5 6
	Output: min = 5, max = 6, pow = 15625, swap = 6 5

	*/

	int min(int n, int m) {

		if (n < m) {

			return n;
		}
		else {

			return m;
		}
	}

	int max(int n, int m) {

		if (n > m) {

			return n;
		}
		else {

			return m;
		}
	}

	int pow(int n, int m) {

		return std::pow(n, m);
	}

	void swap(int n, int m) { 

		n = n + m; 
		m = n - m;
		n = n - m;

		std::cout << n << " " << m;
	}

	/*
	 
	Задача 2:
	Напишете функция-предикат isPrime, която приема цяло положително число n и връща дали то е просто;
	Използвайки предиката isPrime да се отпечата първите n прости числа;
	Да се отпечата числото n като произведение на неговите прости множители.
	Пример:
	
	Input: 36
	Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 <- Първите 36 прости числа
	2 2 3 3 <- 36 = 2 * 2 * 3 * 3

	*/

	bool isPrime(int n) {

		for (size_t i = 2; i < n; i++)
		{
			if (n % i == 0) {

				return false;
			}
		}
		return true;
	}

	void firstPrimeNumbers(int n) {

		int count = 0;
		int num = 2;
		while (count < n) {

			if (isPrime(num)) {

				std::cout << num << " ";
				count++;
			}
			num++;
		}
		std::cout << std::endl;
	}

	void multiplication(int n) {

		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {

				std::cout << i;
				n /= i;

				if (n > 1) {

					std::cout << " * ";
				}
			}
		}
		std::cout << std::endl;
	}

	/*
	 
	Задача 3:
	Да се напише предикат ascending, който връща истина, ако цифрите на дадено естествено число n са в нарастващ ред, и лъжа в противен случай.
	
	Пример:
	
	Input: 123
	Output: true
	
	Input: 321
	Output: false

	*/

	bool ascending(int n) {

		int lastDigit = n % 10;
		n /= 10;

		while (n > 0) {

			int currentDigit = n % 10;
			if (currentDigit > lastDigit) {

				return false;
			}
			lastDigit = currentDigit;
			n /= 10;
		}
		return true;
	}

	/*
	 
	Задача 4:
	Да се напише функция gcd (greatest common denominator), която приема две числа и намира (съответно връща) техния най-голям общ делител (итеративно).
	
	Пример:
	
	Input: 12 18
	Output: 6
	
	Input: 5 7
	Output: 1

	*/

	int gcd(int a, int b) {

		while (b != 0) {

			int remainder = a % b;
			a = b;
			b = remainder;
		}
		return a;
	}

	/*
	 
	Задача 5:
	Да се напише функция lcm (least common multiple), която приема две числа и намира (съответно връща) тяхното най-малко общо кратно (итеративно или с използване на НОД).
	
	Пример:
	
	Input: 12 18
	Output: 36
	
	Input: 5 7
	Output: 35

	*/

	int lcm(int a, int b) {

		int gcd_result = gcd(a, b);
		int lcm_result = (a * b) / gcd_result;

		return lcm_result;
	}

	/*
	 
	Задача 6:
	Напишете функция append, която приема две положителни цели числа и и връща положително цяло число, представляващо едното число, прикрепено към другото.(граници -> INT_MAX)
	
	Пример:
	
	Input: 123 456
	Output: 123456

	*/

	int append(int a, int b) {

		if (a <= 0 && b <= 0) {

			std::cout << "Both numbers must be positive integers." << std::endl;
			return -1;
		}

		int a_digits = 0;
		int temp = a;
		while (temp > 0) {

			a_digits++;
			temp /= 10;
		}

		if (a_digits > INT_MAX / 10) {

			std::cout << "Appending would result in integer overflow." << std::endl;
			return -1;
		}

		int result = a * (pow(10, a_digits)) + b;

		return result;
	}
	
int main() {

	int n, m;
	std::cin >> n >> m;
	std::cout << "Min = " << min(n, m) << ", max = " << max(n, m) << ", pow = " << pow(n, m) << ", swap = ";
	swap(n, m);

	int isPrimeNumber;
	std::cin >> isPrimeNumber;
	std::cout << std::boolalpha << isPrime(isPrimeNumber) << std::endl;
	firstPrimeNumbers(isPrimeNumber);
	multiplication(isPrimeNumber);

	int number;
	std::cin >> number;
	std::cout << std::boolalpha << ascending(number) << std::endl;

	int a, b;
	std::cin >> a >> b;
	std::cout << gcd(a, b) << std::endl;
	std::cout << lcm(a, b) << std::endl;
	std::cout << append(a, b) << std::endl;
}
