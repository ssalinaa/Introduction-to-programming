#include <iostream>

/*
1.6. Problem 1.14.[1] Write a Boolean expression that should have a value of true
if the specified condition is met and false otherwise:
*/

int main() {

    // a) the integer p is divisible by 4 or 7;

    int p;
    std::cin >> p;
    bool condition_a = (p % 4 == 0) || (p % 7 == 0);
    std::cout << std::boolalpha << condition_a << std::endl;

    // b) the equation ax^2 + bx + c = 0 (a ≠ 0) has no real roots;

    int a, b, c;
    std::cin >> a >> b >> c;
    bool condition_b = (b * b - 4 * a * c) < 0;
    std::cout << std::boolalpha << condition_b << std::endl;

    // c.1) the point with coordinates (a, b) is inside a circle with a radius of 5 and center (0, 1);

    int a, b;
    std::cin >> a >> b;
    bool condition_c1 = (a * a + (b - 1) * (b - 1)) < 5 * 5;
    std::cout << std::boolalpha << condition_c1 << std::endl;

    // c.2) the point with coordinates (a, b) is outside the circle with center (c, d) and radius f;

    int a, b;
    std.cin >> a >> b;
    int c, d, f;
    std::cin >> c >> d >> f;
    bool condition_c2 = ((a - c) * (a - c) + (b - d) * (b - d)) > f * f;
    std::cout << std::boolalpha << condition_c2 << std::endl;

    // d) the point belongs to the part of the circle with center (0, 0) and radius 5 in the third quadrant;

    int a, b;
    std::cin >> a >> b;
    bool condition_d = (a >= 0) && (b <= 0) && (a * a + b * b <= 5 * 5);
    std::cout << std::boolalpha << condition_d << std::endl;

    // e) x belongs to the interval [0, 1]:

    int x;
    std::cin >> x;
    bool condition_g = (x >= 0) && (x <= 1);
    std::cout << std::boolalpha << condition_g << std::endl;

    // h) x is equal to max {a, b, c};

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

    // i) at least one of the Boolean variables x and y has a value of true;

    bool x, y;
    std::cin >> x >> y;
    bool condition_i = (x == true || y == true);
    std::cout << std::boolalpha << condition_i << std::endl;

    // k) both Boolean variables x and y have a value of true;

    bool x, y;
    std::cin >> x >> y;
    bool condition_k = (x == true && y == true);
    std::cout << std::boolalpha << condition_k << std::endl;

    // l) none of the numbers a, b, and c is positive;

    int a, b, c;
    std::cin >> a >> b >> c;
    bool negative = (a <= 0 && b <= 0 && c <= 0);
    std::cout << std::boolalpha << negative << std::endl;

    // m) the digit 7 is part of the positive three-digit number p;

    int p;
    std::cin >> p;
    bool condition_m = (p >= 100 && p <= 999 && (p % 10 == 7 || (p / 10) % 10 == 7 || (p / 100) == 7));
    std::cout << std::boolalpha << condition_m << std::endl;

    // n) the digits of the three-digit number m are different;

    int m;
    std::cin >> m;
    bool condition_n = (m >= 100 && m <= 999 && (m / 100 != (m / 10) % 10) && (m / 100 != m % 10) && ((m / 10) % 10 != m % 10));
    std::cout << std.boolalpha << condition_n << std::endl;

    // o) at least two of the digits of the three-digit number m are equal;

    int m;
    std::cin >> m;
    bool condition_o = (m >= 100 && m <= 999) &&
        ((m / 100 == (m / 10) % 10) || (m / 100 == m % 10) || ((m / 10) % 10 == m % 10));
    std::cout << std::boolalpha << condition_o << std::endl;

    // p) the digits of the natural number x, known to be less than 23, form a strictly increasing or strictly decreasing sequence;

    int x;
    std::cin >> x;
    bool isIncreasing = (x / 100 % 10 < x / 10 % 10 && x / 10 % 10 < x % 10);
    bool isDecreasing = (x / 100 % 10 > x / 10 % 10 && x / 10 % 10 > x % 10);
    bool condition_p = isIncreasing || isDecreasing;
    std::cout << std::boolalpha << condition_p << std::endl;

    // q) the decimal representations of the three-digit natural numbers x and y are symmetric;

    int x, y;
    std::cin >> x >> y;
    bool isSymmetric = (x / 100 == y % 10) && ((x / 10) % 10 == (y / 10) % 10) && (x % 10 == y / 100);
    bool condition_q = (x >= 100 && x <= 999) && (y >= 100 && y <= 999) && isSymmetric;
    std::cout << std::boolalpha << condition_q << std::endl;

    // r) the natural number x, known to be less than 23, is prime.

    int x;
    std::cin >> x;
    bool condition_r = (x < 2) || (x == 2) || (x == 3) || ((x % 2 != 0) && (x % 3 != 0) && (x % 5 != 0) && (x % 7 != 0) && (x % 11 != 0) && (x % 13 != 0) && (x % 17 != 0) && (x % 19 != 0) && (x % 23 != 0));
    std::cout << std::boolalpha << condition_r << std::endl;

    return 0;
}
