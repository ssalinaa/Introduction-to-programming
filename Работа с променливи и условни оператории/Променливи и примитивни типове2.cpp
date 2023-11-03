#include <iostream>
#include <climits>
#include <cmath>

int main() {

	/*
	������

	������ 1:
	�������� � ��������� ����� �������� �����, ���������� �� ������ �� ������ ������� ������������� ������ �����.

	*/
	
	char letter;
	std::cin >> letter;
	char upper = letter - ('a' - 'A');
	std::cout << upper << std::endl;

	/*
	 
	������ 2:
	�������� � ��������� ��� ���� ����� a, b, c. �� �� ������� ������ ������, ����� ���� �������� true,
	��� ��������� �������� ��-���� �� ��������� � �������� false, ��� ��������� �� �� � ����. 
	����������� �� �� ������� �� ������, ����� �� ��� ���.
	
	� �� ���� �� 3;
	b ���������� �� ��������� [-9, 13];
	c �� ���������� �� ��������� [0, 8];
	���� ���� �� ������� a, b ��� c � �����������;
	������� a, b � c �� ����� ������� ��.

	*/

	int a, b, c;
	std::cin >> a >> b >> c;
	bool isDivisible = (a % 3 == 0); // !(a % 3) � ������������ �������
	std::cout << std::boolalpha << isDivisible << std::endl;
	bool isInside = (b >= -9) && (b <= 13);
	std::cout << std::boolalpha << isInside << std::endl;
	bool isNotInside = (c < 0) && (c > 8);
	std::cout << std::boolalpha << isNotInside << std::endl;
	bool isNegative = (a < 0) || (b < 0) || (c < 0);
	std::cout << std::boolalpha << isNegative << std::endl;
	bool areEqual = (a == b && b == c);
	std::cout << std::boolalpha << areEqual << std::endl;

	/*
	
	������ 3:
	�������� � ��������� ���������� ���������� ���� �����. �� �� ������ �� ������ ���� ������ ����� �� ���� ����� �� ������� - ��������� �� �� ������ true ��� false.
	
	*/

	int num;
	std::cin >> num;
	int firstDigit = num / 100,
		secondDigit = (num / 10) % 10,
		thirdDigit = num % 10;

	std::cout << std::boolalpha << (firstDigit % 2 && secondDigit % 2 && thirdDigit % 2) << std::endl;

	/*
	
	������ 4:
	�������� ������ �� ����������� ������:
	
	���������� ��� ������ a, b � c.
	
	��������� � ������ r. ����������� ���� ��������� ��������� PI �� ���������� �����. �� �������� ���� �� ���������� 3.14159.
	
	*/
	
	double A, B, C, r;
	std::cin >> A >> B >> C, r;

	double p = (A + B + C) / 2;
	double triangleArea = sqrt(p * (p - A) * (p - B) * (p - C));
	std::cout << "Triangle area: " << triangleArea << std::endl;

	double PI = 3.14159;
	double circleArea = PI * r * r;
	std::cout << "Circle area: " << circleArea << std::endl;

	/*
	
	������ 5:
	�������� ������� �� ����������� ������:
	
	���� �� ����� � ������ r.
	
	���� �� ����� � ������ r � �������� h.

	*/

	double R, h;
	std::cin >> R >> h;

	double sphereVolume = (4 / 3) * PI * (R * R * R);
	std::cout << "Sphere volume: " << sphereVolume << std::endl;

	double coneVolume = (1 / 3) * PI * (R * R) * h;
	std::cout << "Cone volume: " << coneVolume << std::endl;

	/*
	
	������ 6:
	�� �� ������ ��������, ����� ������� ��� ������ �����. ������� �� ���� �����, ������� �� �� ��� double � ������� �� �� ��� float. 
	��������� ��� �� ���������� ��������, ���������, ���������, ����������� ������� � ������� � ������� ����� �� �� �������� ��� ����������� ������
	� �������� ����������� �� ������. ����� ����� �� �� ������, ������ �� ������� �� ��������� ���������� ��� �������� ������
	(�������� float � double, int � double, float � int).
	
	*/
	int int1, int2;
	double double1, double2;
	float float1, float2;

	std::cout << "Enter two integers: ";
	std::cin >> int1 >> int2;
	std::cout << "Enter two double numbers: ";
	std::cin >> double1 >> double2;
	std::cout << "Enter two float numbers: ";
	std::cin >> float1 >> float2;

	std::cout << "\n-------Operations between integers-------" << std::endl;
	std::cout << int1 << " + " << int2 << " = " << int1 + int2 << std::endl;
	std::cout << int1 << " - " << int2 << " = " << int1 - int2 << std::endl;
	std::cout << int1 << " * " << int2 << " = " << int1 * int2 << std::endl;
	std::cout << int1 << " % " << int2 << " = " << int1 % int2 << std::endl;
	std::cout << int1 << " / " << int2 << " = " << int1 / int2 << std::endl;

	std::cout << "\n-------Operations between doubles-------" << std::endl;
	std::cout << double1 << " + " << double2 << " = " << double1 + double2 << std::endl;
	std::cout << double1 << " - " << double2 << " = " << double1 - double2 << std::endl;
	std::cout << double1 << " * " << double2 << " = " << double1 * double2 << std::endl;
	// std::cout << double1 << " % " << double2 << " = " << double1 % double2 << std::endl; // --> error
	std::cout << double1 << " / " << double2 << " = " << double1 / double2 << std::endl;

	std::cout << "\n-------Operations between floats-------" << std::endl;
	std::cout << float1 << " + " << float2 << " = " << float1 + float2 << std::endl;
	std::cout << float1 << " - " << float2 << " = " << float1 - float2 << std::endl;
	std::cout << float1 << " * " << float2 << " = " << float1 * float2 << std::endl;
	// std::cout << float1 << " % " << float2 << " = " << float1 % float2 << std::endl; // --> error
	std::cout << float1 << " / " << float2 << " = " << float1 / float2 << std::endl;

	std::cout << "\n-----------Mixed operations------------" << std::endl;
	std::cout << int1 << " + " << double1 << " = " << int1 + double1 << std::endl;
	std::cout << int1 << " + " << float1 << " = " << int1 + float1 << std::endl;
	std::cout << double1 << " + " << float1 << " = " << double1 + float1 << std::endl;

	std::cout << int1 << " - " << double1 << " = " << int1 - double1 << std::endl;
	std::cout << int1 << " - " << float1 << " = " << int1 - float1 << std::endl;
	std::cout << double1 << " - " << float1 << " = " << double1 - float1 << std::endl;

	std::cout << int1 << " * " << double1 << " = " << int1 * double1 << std::endl;
	std::cout << int1 << " * " << float1 << " = " << int1 * float1 << std::endl;
	std::cout << double1 << " * " << float1 << " = " << double1 * float1 << std::endl;

	std::cout << int1 << " / " << double1 << " = " << int1 / double1 << std::endl;
	std::cout << double1 << " / " << int1 << " = " << double1 / int1 << std::endl;
	std::cout << int1 << " / " << float1 << " = " << int1 / float1 << std::endl;
	std::cout << float1 << " / " << int1 << " = " << float1 / int1 << std::endl;
	std::cout << double1 << " / " << float1 << " = " << double1 / float1 << std::endl;

	// std::cout << int1 << " % " << float1 << " = " << int1 % float1 << std::endl; // --> error
	// std::cout << float1 << " % " << int1 << " = " << float1 % int1 << std::endl; // --> error

	/*
	
	������ 7:
	�������� � ��������� ��� �������� ���� ����� a, b, c:
	
	����������� �� ������ (� true ��� false) ���� ������� ��������� �� �������� �������: min(a,c) < b < max(a,c).
	�����:
	����������� �� ������ (� true ��� false) ���� ������� ��������� �� �������� �������: min(a,c) < b < max(a,c) , ���������� ����� 1 ���������.
	*/

	int a, b, c;
	std::cin >> a >> b >> c;

	std::cout << std::boolalpha << (std::min(a, c) < b && b < std::max(a, c)) << std::endl;

	std::cout << std::boolalpha << ((a - c < 0 && a < b && b < c) || (a - c > 0 && c < b&& b < a)) << std::endl;

	// Bonus task 
	std::cout << std::boolalpha << ((a - b) * (c - b) < 0) << std::endl;
}