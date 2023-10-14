#include <iostream>

/*
������ 1.14.[1] �� �� ������ ����� �����, ����� �� ��� �������� ������,
��� ���������� ������� � ����� � �������� - ����, � �������� ������:
*/

int main() {

	// �) ������ ����� p �� ���� �� 4 ��� �� 7;

	int p;
	std::cin >> p;
	bool condition_a = (p % 4 == 0) || (p % 7 == 0);
	std::cout << std::boolalpha << condition_a << std::endl;

	// �) ����������� ax2 + bx + c = 0(a 6= 0) ���� ������ ������;

	int a, b, c;
	std::cin >> a >> b >> c;
	bool condition_b = (b * b - 4 * a * c) < 0;
	std::cout << std::boolalpha << condition_b << std::endl;

	
	// �.1) ����� � ���������� (a, b) ���� ��� ������������ �� ���� � ������ 5 � ������ (0, 1);

	int a, b;
	std::cin >> a >> b;
	bool condition_c1 = (a * a + (b - 1) * (b - 1)) < 5 * 5;
	std::cout << std::boolalpha << condition_c1 << std::endl;

	// �.2) ����� � ���������� (a, b) ���� ����� ����� � ������ (c, d) � ������ f;

	int a, b;
	std::cin >> a >> b;
	int c, d, f;
	std::cin >> c >> d >> f;
	bool condition_c2 = ((a - c) * (a - c) + (b - d) * (b - d)) > f * f;
	std::cout << std::boolalpha << condition_c2 << std::endl;

	// �) ����� ���������� �� ������ �� ����� � ������ (0, 0) � ������ 5 � ����� ��������;

	int a, b;
	std::cin >> a >> b;
	bool condition_d = (a >= 0) && (b <= 0) && (a * a + b * b <= 5 * 5);
	std::cout << std::boolalpha << condition_d << std::endl;

	// �) ����� ���������� �� ������ � ������ (0, 0) � ������� 5 � 10;

	int a, b;
	std::cin >> a >> b;
	bool condition_f = (a * a + b * b >= 5 * 5) && (a * a + b * b <= 10 * 10);
	std::cout << std::boolalpha << condition_f << std::endl;

	// e) x ���������� �� ��������� [0, 1]:

	int x;
	std::cin >> x;
	bool condition_g = (x >= 0) && (x <= 1);
	std::cout << std::boolalpha << condition_g << std::endl;

	// �) x � ����� �� max {a, b, c};

	int x, a, b, c;
	std::cin >> x >> a >> b >> c;
	bool condition_h = (x == a);
	if (b > condition_h) {
		condition_h = (x == b);
	}
	if (c > condition_h) {
		condition_h = (x == c);
	}
	std::cout << std::boolalpha << condition_h << std::endl;

	//bool condition = (x == std::max({a, b, c}));

	// �) ���� ���� �� �������� ���������� x � y ��� �������� true;

	bool x, y;
	std::cin >> x >> y;

	bool condition = (x == true || y == true);
	std::cout << std::boolalpha << condition << std::endl;

	// �) � ����� ������ ���������� x � y ���� �������� true;

	bool x, y;
	std::cin >> x >> y;

	bool condition = (x == true && y == true);
	std::cout << std::boolalpha << condition << std::endl;
	
	// �) ���� ���� �� ������� a, b � c �� � �����������;

	int a, b, c;
	std::cin >> a >> b >> c;

	bool negative = (a <= 0 && b <= 0 && c <= 0);
	std::cout << std::boolalpha << negative << std::endl;

	// �) ������� 7 ����� � ������ �� ������������� ���������� ����� p;

	int p;
	std::cin >> p;

	bool condition = (p >= 100 && p <= 999 && (p % 10 == 7 || (p / 10) % 10 == 7 || (p / 100) == 7));
	std::cout << std::boolalpha << condition << std::endl;

	// �) ������� �� ������������ ����� m �� ��������;

	int m;
	std::cin >> m;
	bool condition = (m >= 100 && m <= 999 && (m / 100 != (m / 10) % 10) && (m / 100 != m % 10) && ((m / 10) % 10 != m % 10));
	std::cout << std::boolalpha << condition << std::endl;
	
	// �) ���� ��� �� ������� �� ������������ ����� m �� ����� ������� ��;

	int m;
	std::cin >> m;
	bool condition = (m >= 100 && m <= 999) &&
		((m / 100 == (m / 10) % 10) || (m / 100 == m % 10) || ((m / 10) % 10 == m % 10));
	std::cout << std::boolalpha << condition << std::endl;

	// �) ������� �� ������������ ���������� ����� x ��������� ������ ������� ��� ������ ���������� ������;

	int x;
	std::cin >> x;

	bool isIncreasing = (x / 100 % 10 < x / 10 % 10 && x / 10 % 10 < x % 10);
	bool isDecreasing = (x / 100 % 10 > x / 10 % 10 && x / 10 % 10 > x % 10);

	bool condition = isIncreasing || isDecreasing;
	std::cout << std::boolalpha << condition << std::endl;

	// �) ����������� ������ �� ������������ ���������� ����� x � y �� ����������;

	int x, y;
	std::cin >> x >> y;

	bool isSymmetric = (x / 100 == y % 10) && ((x / 10) % 10 == (y / 10) % 10) && (x % 10 == y / 100);
	bool condition = (x >= 100 && x <= 999) && (y >= 100 && y <= 999) && isSymmetric;
	std::cout << std::boolalpha << condition << std::endl;

	// �) ������������ ����� x, �� ����� �� ����, �� � ��-����� �� 23, � ������.

	int x;
	std::cin >> x;
	bool condition = (x < 2) || (x == 2) || (x == 3) || ((x % 2 != 0) && (x % 3 != 0) && (x % 5 != 0) && (x % 7 != 0) && (x % 11 != 0) && (x % 13 != 0) && (x % 17 != 0) && (x % 19 != 0) && (x % 23 != 0));
	std::cout << std::boolalpha << condition << std::endl;

}
