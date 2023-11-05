#include <iostream>

void printDiamond(int n) {

	// Upper part of the diamond
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n - i; j++) {

			std::cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {

			std::cout << "*";
		}
		std::cout << std::endl;
	}

	// Lower part of the diamond
	for (int i = n - 1; i > 0; i--) {

		for (int j = 1; j <= n - i; j++) {

			std::cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {

			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

double evaluatePolynom(int n, double x) {

	double result = 0.0;
	double powerOfx = 1.0;
	int copy = n;
	for (size_t i = 0; i <= n; i++)
	{
		double a;
		std::cin >> a;
		result += a * pow(x, copy);
		copy--;
	}

	return result;
}

int sum(int n) {

	int sum = 0;
	while (n != 0) {

		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int bounce(int x, double y) {

	int bounces = 0;

	while (x > 1) {

		x *= y;
		bounces++;
	}

	return bounces;
}

bool Armstrong(int number) {

	int sum = 0;
	int countDigits = 0;
	int copy = number;
	while (copy != 0) {

		sum += copy % 10;
		countDigits++;
		copy /= 10;
	}

	return number == pow(sum, countDigits);
}

bool isPrime(int n) {

	for (size_t i = 2; i < n; i++)
	{
		if (n % i == 0) {

			return false;
		}
	}
	return true;
}

int countPrimeDivisors(int number) {

	int count = 0;
	for (int i = 2; i <= number; i++) {

		if (isPrime(i) && number % i == 0) {

			count++;
		}
	}
	return count;
}

void findNumbersWithPrimeDivisors(int a, int b, int c) {

	for (int num = a; num <= b; num++) {

		if (countPrimeDivisors(num) == c) {
			
			std::cout << num << " ";
		}
	}
}

int main() {

	/*
	
	������ 1: �� �� ������ ���� ����������� ����� n � ���� ����� x, ���� ����� �� �� ������� n �� ���� ���� ����� � ������ �� �� ��������, ������� �� ���� ����� �� ��-����� �� x.

	����:

	3 5
	6 1 -5
	
	�����: 2
	
	����:
	7 -5
	2 -1 -10 2 -9657 -5 2
	
	�����: 2
	
	*/

	int n, x;
	std::cin >> n >> x;
	int count = 0;
	for (size_t i = 0; i < n; i++)
	{
		int numbers;
		std::cin >> numbers;
		if (numbers < x) {

			count++;
		}
	}

	std::cout << count << std::endl;

	/*
	
	������ 2: �� �� ������� �������, �� ����� �� ������ ���� ����������� ����� n � ��������� ����, ����� �� � � �������� 2n - 1.

	����: 4
	�����:
	
	    *
	   ***
	  *****
	 *******
	  *****
	   ***
	    *

	*/

	printDiamond(4);

	/*
	
	������ 3: �� �� ������ �������, ����� ��� �������� ���� ����������� ����� n � ������ ����� x, 
	�� ������� n �� ���� ������ ����� � �� �������� ���������� �� ��������: 
	a1 * x^(n) + a2 * x^(n-1) + � + an * x + an+1

	����:
	3 0.5
	1 3 1 2
	
	�����: 3.375
	
	*/

	int n;
	double x;
	std::cin >> n >> x;
	std::cout << evaluatePolynom(n, x);

	/*
	
	������ 4: �� �� ������ ���� ����������� ����� n. �� �� ������� �������, ����� ����� ������� �� ������ ����� � ������ ����� ��. ������ �� ��������� ���� ������� ����� n, ������ n �� ����� �����.

	����: 3921478
	�����: 7

	*/

	int n;
	std::cin >> n;
	while (n >= 10) {

		n = sum(n);
	}
	std::cout << n << std::endl;

	/*
	
	������ 5: ���� ����� ����� �� ������� �������� x, ������� ��� ��������� �� ������ y. 
	��� ������� �� ������� ���� ������� �� ������� �������� x * y. 
	�� �� ������ �������, ����� ��� �������� x � y, 
	������ ����� ������� �� ������� �������, ���� �� ������������ � �������� �� � > 1.

	����: 10 0.66
	�����: 5
	
	���������:
	10
	6.6
	4.356
	2.87496
	1.89747
	1.25233
	0.82654

	*/

	int x;
	double y;
	std::cin >> x >> y;
	std::cout << bounce(x, y) << std::endl;
	
	/*
	
	������ 6: �� �� ������ �������, ����� �������� ������ Armstrong ����� � ���������� [1, 1000].
	Armstrong ����� � ������ ����� � ������, ����� �� ����� ������ �� ������� �� �������� �� 
	������ ���� ����� �� �������, �� ���� ������ �����.

	�����:
	1 2 3 4 5 6 7 8 9 81 512

	*/

	for (int i = 1; i <= 1000; i++) {

		if (Armstrong(i)) {

			std::cout << i << std::endl;
		 }
	}

	/*
	
	������ 7: �� �� ������� �������, ����� ��� �������� 3 ���� ����������� ����� a, b. c, �� �� ��������� ������ ����� � �������� [a, b], ����� ���� c ������ ��������.

	����:5 25 2
	�����: 6 10 12 14 15 18 20 21 22 24

	*/

	int a, b, c;
	std::cin >> a >> b >> c;
	findNumbersWithPrimeDivisors(a, b, c);

}