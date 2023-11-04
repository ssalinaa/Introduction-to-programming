#include <iostream>
#include <climits>
#include <cmath>

	/*
	
	������ 1:
	�������� ������� min, max, pow � swap, ����� �� ������� � ��� ���� �����. ��������� min �� ����� ��-������� �� ����� �����, ��������� max �� ����� ��-�������� �� ����� �����, ��������� pow �� ����� ������� ����� �� ������ ������� �����, � ��������� swap �� ������� ����������� �� ����� �����. �������� ��������, ����� �� �������� ���������� �������.
	
	������:
	
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
	 
	������ 2:
	�������� �������-�������� isPrime, ����� ������ ���� ����������� ����� n � ����� ���� �� � ������;
	����������� ��������� isPrime �� �� �������� ������� n ������ �����;
	�� �� �������� ������� n ���� ������������ �� �������� ������ ���������.
	������:
	
	Input: 36
	Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 <- ������� 36 ������ �����
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
	 
	������ 3:
	�� �� ������ �������� ascending, ����� ����� ������, ��� ������� �� ������ ���������� ����� n �� � ��������� ���, � ���� � �������� ������.
	
	������:
	
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
	 
	������ 4:
	�� �� ������ ������� gcd (greatest common denominator), ����� ������ ��� ����� � ������ (��������� �����) ������ ���-����� ��� ������� (����������).
	
	������:
	
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
	 
	������ 5:
	�� �� ������ ������� lcm (least common multiple), ����� ������ ��� ����� � ������ (��������� �����) ������� ���-����� ���� ������ (���������� ��� � ���������� �� ���).
	
	������:
	
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
	 
	������ 6:
	�������� ������� append, ����� ������ ��� ����������� ���� ����� � � ����� ����������� ���� �����, �������������� ������ �����, ���������� ��� �������.(������� -> INT_MAX)
	
	������:
	
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