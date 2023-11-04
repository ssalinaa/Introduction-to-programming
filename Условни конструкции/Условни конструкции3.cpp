#include <iostream>
#include <climits>
#include <cmath>

int main() {

	/*
	
	������ 01 - ����� �� �����
	�������� ��������, ����� ������ 4-������� ����� � �����, ����� ��������� ���� � ������ �� ������� �� ����� ���������� �����.
	
	*/

	int number;
	std::cin >> number;

	if (number < 1000 || number > 9999) {

		std::cout << "Enter a valid 4-digit number." << std::endl;
		return 1;
	}

	int digit;
	std::cin >> digit;

	if (digit < 0 || digit > 9) {

		std::cout << "Enter a valid digit (from 0 to 9)." << std::endl;
		return 1;
	}

	int temp = number;
	bool found = false;

	while (temp != 0) {

		if (temp % 10 == digit) {

			found = true;
			break;
		}
		temp /= 10;
	}

	if (found) {

		std::cout << "The digit " << digit << " is found in the number " << number << "'s representation." << std::endl;
	}
	else {

		std::cout << "The digit " << digit << " is not found in the number " << number << "'s representation." << std::endl;
	}

	/*
	
	������ 02 - ��������� �����
	�������� ��������, ����� ������ 4-������� �����, � ��������� ���� �� � "���������", �.�. ���� ������ �� ������� �� 2 ����� � ������ ���� ������ �� ���������� �� 2.
	
	*/

	int n;
	std::cin >> n;
	int sum1 = 0;
	int sum2 = 0;
	sum1 = n / 1000 + (n / 100) % 10;
	sum2 = ((n / 10) % 10) + (n % 10);
	if (sum1 == sum2) {

		std::cout << "Yes" << std::endl;
	}
	else {

		std::cout << "No" << std::endl;
	}

	/*
	
	������ 03 - ��� �� ����
	�������� ��������, ����� ������ ���� ����, � ��������� ���� ��� � �����, ����� ��� ��������� ����.
	
	������:
	����	�����
	a	letter
	9	digit
	[	special character

	*/

	char letter;
	std::cin >> letter;

	if (letter >= '0' && letter <= '9') {

		std::cout << "digit" << std::endl;
	}
	else if (letter >= 'a' && letter <= 'z') {

		std::cout << "letter" << std::endl;
	}
	else {

		std::cout << "special character" << std::endl;
	}

	/*
	
	������ 04 - ����� � ���������
	�������� ��������, ����� ������ ������������ �� ����� � ��������������, ������������ �� ������ �� ���������, ����� � ������ ������. ���������� �� ��������� ���� ������� � ����� � �����������, ����� ����������� ��� �� ������ ���������.
	
	������:
	����	    �����
	1 1 0 0 2	Inside
	1 3 0 2 1	Outside
	1 0 0 0 1	On

	*/

	int x, y, O1, O2, r;
	std::cin >> x >> y >> O1 >> O2 >> r;

	double distance = sqrt(pow(x - O1, 2) + pow(y - O2, 2));
	if (distance == r) {

		std::cout << "On";
	}
	else if (distance > r) {

		std::cout << "Outside";
	}
	else if (distance < r) {

		std::cout << "Inside";
	}

	/*
	
	������ 05 - �����������
	�������� ��������, ����� ������ �����, �������������� �������. ��� ������� � ��-����� �� 18, ���������� �� ������� "You are underaged", � � �������� ������ - "You are good to go". �� �� �������� ���������� ��������.
	
	*/
	
	int age;
	std::cin >> age;
	std::string isValid = (age < 18) ? "You are underaged" : "You are good to go";
	std::cout << isValid << std::endl;

	/*
	
	������ 06 - �������
	�������� ��������, ����� ������ 3 ����� � �� ������� �������� �� ��������.
	
	�����:
	����������� ���������� ��������� ��������.

	*/

	int a, b, c;
	std::cin >> a >> b >> c;

	int max = a > b && a > c ? a : b > a && b > c ? b : c;
	int min = a < b && a < c ? a : b < a && b < c ? b : c;
	int mid = (a + b + c) - max - min;

	std::cout << min << " " << mid << " " << max << std::endl;

	/*
	
	������ 07 - ����������
	�������� ��������, ����� ������ 2 ����� � �������� - ���� ������� ������� {+, -, *, /}. ���������� �� ������ ��������� �� ����������� �� ���������� ��� ����� �����.
	
	������:
	����	�����
	2 5 +	7
	13 2 /	6.5

	*/

	double m, n;
	std::cin >> m >> n;
	char operation;
	std::cin >> operation;
	switch (operation) {
		 
	case '+': std::cout << m + n << std::endl; break;
	case '-': std::cout << m - n << std::endl; break;
	case '*': std::cout << m * n << std::endl; break;
	case '/': std::cout << m / n << std::endl; break;

	default:
		std::cout << "Invalid operation" << std::endl; break;
	}


	/*
	 
	������ 08 - �������� ������
	�������� ��������, ����� ������ ����, ������������� �������� ������ ('r' - ���, 'b' - ������, 'q' - �������, 'h' - ���) � 2 ������ ����������, �������������� ��������� �� 2 ������ �� ��������� ���. ���������� �� ��������� ���� ������ ������ ���� �� ����� �������.
	
	������:
	����	�����
	r 1 2 1 5	Yes
	b 2 3 1 4	Yes

	*/

	char figure;
	std::cin >> figure;
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;

	switch (figure) {

	case 'r':
		std::cout << std::boolalpha << (x1 == x2 || y1 == y2) << std::endl;
		break;
	case 'b':
		std::cout << std::boolalpha << (abs(x1 - x2) == abs(y1 - y2)) << std::endl;
		break;
	case 'q':
		std::cout << std::boolalpha << (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) << std::endl;
		break;
	case 'h':
		std::cout << std::boolalpha << (abs(x1 - x2) == 2 && abs(y1 - y2) == 1 || abs(x1 - x2) == 1 && abs(y1 - y2) == 2) << std::endl;
		break;
	default: 
		std::cout << "Invalid place" << std::endl;
		break;
	}

	return 0;
}