#include <iostream>
#include <climits>
#include <cmath>

	/*
	
	Функции
	
	1. Синтаксис
	
	<return type> <name> (<type1> parameter1, <type2> parameter2, ...)
	{
		body...
	}
	
	Пример:
	
	int max(int n, int k)
	{
		return n > k ? n : k;
	}
	
	2. Оператор return
	
	Използва се за да прекрати функцията
	Използва се за да върнем резултата
	Ако функцията е от тип void не връщаме нищо
	
	3. Параметри по копие и по референция
	
	Параметрите в една функция могат да бъдат подадени по копие или по референция. Когато подадем един параметър по копие променяйки го това не се отразява на самата променлива, която сме подали. Когато подадем един параметър по референция, промените които правим по нея се отразяват директно върху променливата, която сме подали.
	
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
	 
	Задачи
	
	Задача 1: Напишете функция, която приема неотрицателно число n и върща дали числото е четно.
	
	Вход: 111 Изход: false Вход: 112 Изход: true

	`*/
	
	bool isEven(unsigned number) {

		return number % 2 == 0;
	} 

	/*

	Задача 2: Напишете функция, която приема неотрицателно число и връща дали числото е палиндром.
	
	Вход: 131 Изход: true Вход: 2552 Изход: true Вход: 2331 Изход: false
	
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

	Задача 3: Напишете функция, която приема 2 неотрицателни числа и връща дали второто е суфикс на първото. (суфикс = завършва)
	
	Вход: 1293 93 Изход: true Вход: 1293 94 Изход: false
	
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
	 
	Задача 3.1: Напишете функция, която приема 2 неотрицателни числа и връща дали второто е префикс на първото. (префикс = започва)
	
	Вход: 1293 12 Изход: true Вход: 1293 14 Изход: false
	
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

	Задача 3.2: Напишете функция, която приема 2 неотрицателни числа и връща дали второто е инфикс на първото. (инфикс = в средата)
	
	Вход: 1293 29 Изход: true Вход: 1293 13 Изход: false
	
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
	
	Задача 4: Напишете функция, която приема 2 неотрицателни числа n и k и връща n^k.
	
	Вход: 2 6 Изход: 64
	
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
	
	Задача 4.1: Напишете функция, която приема 2 неотрицателни числа n и k и връща log_k(n) (закръглено надолу).
	
	Вход: 80 2 Изход: 6

	*/

	int logBaseK(int n, int k) {

		if (n < 1 || k < 2) {

			return -1; // Невалидни входни стойности
		}

		int result = 0;
		while (n >= k) {

			n /= k;
			result++;
		}

		return result;
	}

	/*
	
	Задача 5: Напишете функция, която приема 4 цели числа - координати на 2 точки. Функцията да връща разстоянието между тези точки. Резултатът да е закръглен до 3тата цифра след запетаята.
	
	Вход: 1 1 4 3 Изход: 3,605

	*/

	double distance(int x1, int y1, int x2, int y2) {

		double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		return std::round(distance * 1000.0) / 1000.0;
	}

	/*
	
	Задача 6: Напишете функция, която приема 6 целочислени координати (3 точки) и връща обиколката на триъгълника, който се образува от тези точки.
	
	Вход: 1 1 4 7 0 10, Изход: 20.763

	*/

	double area(int x1, int y1, int x2, int y2, int x3, int y3) {

		double a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		double b = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
		double c = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));

		double area = a + b + c;
		
		return area;
	}

	/*
	
	Задача 7: Напишете функция, която приема естествено число n и отпечатва всички двойки <a,b>, такива че a и b са прости и a + b = n.
	
	Вход: 20 Изход: (3, 17) (7, 13) (13, 7) (17, 3)
	
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

	unsigned number;
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
	std::cout << std::boolalpha << isPrefix(first2, second2) << std::endl;

	unsigned first3, second3;
	std::cin >> first3 >> second3;
	std::cout << std::boolalpha << isInfix(first3, second3) << std::endl;

	int n, k;
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
	findPrimePairsSumN(l);

	return 0;
}
