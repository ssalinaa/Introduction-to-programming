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
	
	Задача 1: Да се въведе цяло положително число n и цяло число x, след което да се въведат n на брой цели числа и накрая да се отпечата, колкото от тези числа са по-малки от x.

	Вход:

	3 5
	6 1 -5
	
	Изход: 2
	
	Вход:
	7 -5
	2 -1 -10 2 -9657 -5 2
	
	Изход: 2
	
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
	
	Задача 2: Да се направи функция, на която се подава цяло положително число n и отпечатва ромб, който да е с големина 2n - 1.

	Вход: 4
	Изход:
	
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
	
	Задача 3: Да се напише функция, която при подадени цяло положително число n и реално число x, 
	да въвежда n на брой реални числа и да пресмята стойността на полинома: 
	a1 * x^(n) + a2 * x^(n-1) + … + an * x + an+1

	Вход:
	3 0.5
	1 3 1 2
	
	Изход: 3.375
	
	*/

	int n;
	double x;
	std::cin >> n >> x;
	std::cout << evaluatePolynom(n, x);

	/*
	
	Задача 4: Да се въведе цяло положително число n. Да се направи функция, която взима цифрите на дадено число и намира сбора им. Трябва да прилагаме тази функция върху n, докато n не стане цифра.

	Вход: 3921478
	Изход: 7

	*/

	int n;
	std::cin >> n;
	while (n >= 10) {

		n = sum(n);
	}
	std::cout << n << std::endl;

	/*
	
	Задача 5: Пешо пуска топка от някаква височина x, топката има коефицент на отскок y. 
	При пускане на топката след отскока тя достига височина x * y. 
	Да се напише функция, която при подадени x и y, 
	намира колко отскока ще направи топката, така че максималната и височина да е > 1.

	Вход: 10 0.66
	Изход: 5
	
	Пояснение:
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
	
	Задача 6: Да се напише функция, която принтира всички Armstrong числа в интервалът [1, 1000].
	Armstrong число е такова число е такова, число на което сумата от цифрите му вдигната на 
	степен броя цифри на числото, да дава самото число.

	Изход:
	1 2 3 4 5 6 7 8 9 81 512

	*/

	for (int i = 1; i <= 1000; i++) {

		if (Armstrong(i)) {

			std::cout << i << std::endl;
		 }
	}

	/*
	
	Задача 7: Да се направи функция, която при подадени 3 цели положителни числа a, b. c, да се отпечатат всички числа в интервал [a, b], които имат c прости делителя.

	Вход:5 25 2
	Изход: 6 10 12 14 15 18 20 21 22 24

	*/

	int a, b, c;
	std::cin >> a >> b >> c;
	findNumbersWithPrimeDivisors(a, b, c);

}
