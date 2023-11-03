#include <iostream>
#include <climits>
#include <cmath>

	/*
	
	�������
	
	1. ���������
	
	<return type> <name> (<type1> parameter1, <type2> parameter2, ...)
	{
		body...
	}
	
	������:
	
	int max(int n, int k)
	{
		return n > k ? n : k;
	}
	
	2. �������� return
	
	�������� �� �� �� �������� ���������
	�������� �� �� �� ������ ���������
	��� ��������� � �� ��� void �� ������� ����
	
	3. ��������� �� ����� � �� ����������
	
	����������� � ���� ������� ����� �� ����� �������� �� ����� ��� �� ����������. ������ ������� ���� ��������� �� ����� ���������� �� ���� �� �� �������� �� ������ ����������, ����� ��� ������. ������ ������� ���� ��������� �� ����������, ��������� ����� ������ �� ��� �� ��������� �������� ����� ������������, ����� ��� ������.
	
	void f(int n)
	{
		n++;
	}
	void g(int &n)
	{
		n++;
	}
	int main()
	{
		int n = 4;
		f(n);
		std::cout << n << std::endl; //4
		g(n);
		std::cout << n << std::endl; //5
	}
	
	*/

	/*
	 
	������
	
	������ 1: �������� �������, ����� ������ ������������� ����� n � ����� ���� ������� � �����.
	
	����: 111 �����: false ����: 112 �����: true

	`*/
	
	bool isEven(unsigned number) {

		return number % 2 == 0;
	} 

	/*

	������ 2: �������� �������, ����� ������ ������������� ����� � ����� ���� ������� � ���������.
	
	����: 131 �����: true ����: 2552 �����: true ����: 2331 �����: false
	
	*/

	bool isPalindrome(unsigned number) {

		int copy = number;
		int reversed = 0;
		while (copy != 0) {

			reversed *= 10;
			reversed += copy % 10;
			copy /= 10;
		}

		return number == reversed;
	}

	/*

	������ 3: �������� �������, ����� ������ 2 ������������� ����� � ����� ���� ������� � ������ �� �������. (������ = ��������)
	
	����: 1293 93 �����: true ����: 1293 94 �����: false
	
	*/
	
	bool isSuffix(unsigned first, unsigned second) {

		int copy1 = first;
		int copy2 = second;

		while (copy2 > 0) {

			if (copy1 % 10 != copy2 % 10) {

				return false;
			}
			copy1 /= 10;
			copy2 /= 10;
		}

		return true;
	}

	/*
	 
	������ 3.1: �������� �������, ����� ������ 2 ������������� ����� � ����� ���� ������� � ������� �� �������. (������� = �������)
	
	����: 1293 12 �����: true ����: 1293 14 �����: false
	
	*/

	bool isPrefix(int first, int second) {

		int temp1 = first;
		int temp2 = second;

		while (temp2 > 0) {

			if (temp1 == 0 || temp1 % 10 != temp2 % 10) {

				return false;
			}

			temp1 /= 10;
			temp2 /= 10;
		}

		return true;
	}

	/*

	������ 3.2: �������� �������, ����� ������ 2 ������������� ����� � ����� ���� ������� � ������ �� �������. (������ = � �������)
	
	����: 1293 29 �����: true ����: 1293 13 �����: false
	
	*/

	int countDigits(int num) {
		int count = 0;
		while (num > 0) {
			num /= 10;
			count++;
		}
		return count;
	}

	bool isInfix(int num1, int num2) {

		int temp1 = num1;
		int temp2 = num2;
		int num1Length = countDigits(num1);
		int num2Length = countDigits(num2);

		if (num2 == 0) {

			return true; 
		}

		for (int i = 0; i <= num1Length - num2Length; i++) {

			int divisor = 1;
			for (int j = 0; j < num2Length; j++) {

				divisor *= 10;
			}
			int extracted = temp1 % divisor;

			if (extracted == temp2) {

				return true;
			}

			temp1 /= 10;
		}

		return false;
	}

	/*
	
	������ 4: �������� �������, ����� ������ 2 ������������� ����� n � k � ����� n^k.
	
	����: 2 6 �����: 64
	
	*/

	int power(unsigned n, unsigned k) {

		int result = 1;
		for (size_t i = 0; i < k; i++)
		{
			result *= n;
		}

		return result;
	}

	/*
	
	������ 4.1: �������� �������, ����� ������ 2 ������������� ����� n � k � ����� log_k(n) (���������� ������).
	
	����: 80 2 �����: 6

	*/

	int logBaseK(int n, int k) {

		if (n < 1 || k < 2) {

			return -1; // ��������� ������ ���������
		}

		int result = 0;
		while (n >= k) {

			n /= k;
			result++;
		}

		return result;
	}

	/*
	
	������ 5: �������� �������, ����� ������ 4 ���� ����� - ���������� �� 2 �����. ��������� �� ����� ������������ ����� ���� �����. ���������� �� � ��������� �� 3���� ����� ���� ���������.
	
	����: 1 1 4 3 �����: 3,605

	*/

	double distance(int x1, int y1, int x2, int y2) {

		double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		return std::round(distance * 1000.0) / 1000.0;
	}

	/*
	
	������ 6: �������� �������, ����� ������ 6 ����������� ���������� (3 �����) � ����� ���������� �� �����������, ����� �� �������� �� ���� �����.
	
	����: 1 1 4 7 0 10, �����: 20.763

	*/

	double area(int x1, int y1, int x2, int y2, int x3, int y3) {

		double a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		double b = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
		double c = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));

		double area = a + b + c;
		
		return area;
	}

	/*
	
	������ 7: �������� �������, ����� ������ ���������� ����� n � ��������� ������ ������ <a,b>, ������ �� a � b �� ������ � a + b = n.
	
	����: 20 �����: (3, 17) (7, 13) (13, 7) (17, 3)
	
	*/

	bool isPrime(int num) {

		if (num <= 1) {

			return false;
		}
		for (int i = 2; i * i <= num; ++i) {

			if (num % i == 0) {

				return false;
			}
		}
		return true;
	}

	void findPrimePairsSumN(int n) {

		for (size_t a = 2; a < n; a++)
		{
			int b = n - a;
			if (isPrime(a) && isPrime(b)) {

				std::cout << "<" << a << ", " << b << ">" << std::endl;
			}
		}

	}

int main() {

	/*unsigned number;
	std::cin >> number;
	std::cout << std::boolalpha << isEven(number) << std::endl;

	unsigned num;
	std::cin >> num;
	std::cout << std::boolalpha << isPalindrome(num) << std::endl;

	unsigned first1, second1;
	std::cin >> first1 >> second1;
	std::cout << std::boolalpha << isSuffix(first1, second1) << std::endl;

	unsigned first2, second2;
	std::cin >> first2 >> second2;
	std::cout << std::boolalpha << isPrefix(first2, second2) << std::endl;*/

	unsigned first3, second3;
	std::cin >> first3 >> second3;
	std::cout << std::boolalpha << isInfix(first3, second3) << std::endl;

	/*int n, k;
	std::cin >> n >> k;
	std::cout << power(n, k) << std::endl;

	int m, p;
	std::cin >> m >> p;
	std::cout << logBaseK(m, p) << std::endl;

	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cout << distance(x1, y1, x2, y2) << std::endl;

	int x11, y11, x22, y22, x33, y33;
	std::cin >> x11 >> y11 >> x22 >> y22 >> x33 >> y33;
	std::cout << area(x11, y11, x22, y22, x33, y33) << std::endl;

	int l;
	std::cin >> l;
	findPrimePairsSumN(l);*/

}