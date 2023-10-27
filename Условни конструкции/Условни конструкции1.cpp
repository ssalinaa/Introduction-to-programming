#include <iostream>
#include <climits>
#include <cmath>

	/*

    1. if - else

    if(<condition>)
    {
        code.. // ��������� ��, ��� ��������� � ������.
    }
    else // �� � ������������ ���� �� �������������.
    {
        code.. // ��������� ��, ��� ��������� � ����.
    }

    ������:

    bool flag = true;
    if(flag)
    {
        std::cout << "��������� � ������";
    }
    else
    {
        std::cout << "��������� � ����";
    }

    2. if - else if - else

    if(<condition1>)
    {
        code.. // ��������� ��, ��� ������� ������� � ������.
    }
    else if(<condition2>)
    {
        code.. // ��������� ��, ��� ������� ������� � ����, � ������� ������� � ������.
    }
    .
    .
    .
    else if(<conditionK>)
    {
        code.. // ��������� ��, ��� <condition1> - <conditionK-1> �� ����, � <conditionK> � ������.
    }
    else
    {
        code.. // ��������� ��, ��� ������ ����� ������� �� ����.
    }

    ������:

    int a = 15;
    if(a == 1)
    {
        std::cout << "a is equal to 1";
    }
    else if(a == 2)
    {
        std::cout << "a is equal to 2";
    }
    .
    .
    .
    else if(a == 10)
    {
        std::cout << "a is equal to 10";
    }
    else
    {
        std::cout << "a is not in the range 1-10";
    }

    3. switch

    switch(<integer>)
    {
        case value1: code.. break;
        case value2: code.. break;
        case value3: code.. break;
    
        //�������������� - ��������� ��, ��� ������������ ���� ����� �� ���������� ���������.
        default: code... break;
    }

    ������:

    unsigned int a = 15;
    switch(a)
    {
        case 5:
            std::cout << "a is 5";
            break;
        case 10:
            std::cout << "a is 10";
            break;
        case 15:
            std::cout << "a is 15";
            break;
    
        default:
            std::cout << "a is not 5, 10 or 15";
            break;
    }

    4. �������� ��������

    <�������> ? <�����1> : <�����2>

    ��� ��������� � ������, �� ����� �����1
    � �������� ������, �� ����� �����2

    ������:

    int a = 10 > 12 ? 1 : 2;

	*/

int main() {

    /*
     
    ������

    ������ 1 �� �� ������ ���� �����.��� ������� � �� ������� 0 - 9 �� �� �������� ����������� ���������.� �������� ������ �� �� ��������� "���� �� � �����".

    ����: 1 ����� : ���� e 1 ���� : 13 ����� : ���� �� � �����

    */

    int number;
    std::cin >> number;
    if (number >= 0 && number <= 9) {

        std::cout << "This is " << number << std::endl;
    }
    else {

        std::cout << "This is not a number" << std::endl;
    }

    /*

    ������ 2 �� �� ������ ��������, ����� ������� ��� ���� ����� n � m � ������� �� - �������� �� ���.

    ���� : 1 5 ����� : 5 ���� : 3 2 ����� : 3

    */

    int n, m;
    std::cin >> n >> m;

    // ����� � if - else
    if (n > m) {

        std::cout << n << std::endl;
    }
    else {

        std::cout << m << std::endl;
    }

    // ����� � �������� ��������
    std::cout << (n > m ? n : m) << std::endl;

    /*
     
    �a���� 3 �� �� ������ ��������, ����� ������� ���� �����(����� �����) � ���������[0, 100] � �������� �� ����� ������ ��������.

    85 < ����� <= 100, O����� = 6.
    70 < ����� <= 85, O����� = 5.
    50 < ����� <= 70, O����� = 4.
    30 < ����� <= 50, O����� = 3.
    0 <= ����� <= 30, O����� = 2.

    ����: 79 ����� : 5 ���� : 38 ����� : 3

    */

    int points;
    std::cin >> points;
    if (points > 85 && points <= 100) {

        std::cout << 6 << std::endl;
    }
    if (points > 70 && points <= 85) {

        std::cout << 5 << std::endl;
    }
    if (points > 50 && points <= 70) {

        std::cout << 4 << std::endl;
    }
    if (points > 30 && points <= 50) {

        std::cout << 3 << std::endl;
    }
    if (points >= 0 && points <= 30) {

        std::cout << 2 << std::endl;
    }
    else {

        std::cout << "Incorrect number of points!" << std::endl;
    }

    /*

    ������ 4 �� �� ������ ��������, ����� ������� ���� ����� n � �� �������� �������� �������� ���� n � ������� ��� �� :

    n � ������� - �������
    n � ����� � � � ���������� �������� �� 2 �� 5 - �� � �������
    n � ����� � � � ���������� �������� �� 6 �� 20 - �������
    n � ����� � � �� - ������ �� 20 - �� � �������

    ���� : 3 ����� : ������� ���� : 4 ����� : �� � ������� ���� : 22 ����� : �� � �������

    */

    int num;
    std::cin >> num;
    if (num % 2 != 0) {

        std::cout << "Strange" << std::endl;
    }
    else if (num >= 2 && num <= 5) {

        std::cout << "Not strange" << std::endl;
    }
    else if (num >= 6 && num <= 20) {

        std::cout << "Strange" << std::endl;
    }
    else if (num % 2 == 0 && num > 20) {

        std::cout << "Not strange" << std::endl;
    }

    /*
     
    ������ 5 �� �� ������ ��������, ����� ��� �������� �� 3 ���� ����� r, x � y.�� �������� ���� ������� A(x, y) �� ������ ����� / �� ������� / ����� ����� � ������ r � ������(0, 0).

    ���� : 3 0 2 ����� : ����� ���� : 1 1 0 ����� : �� ������� ���� : 4 13 16 ����� : �����

    */

    int r, x, y;
    std::cin >> r >> x >> y;
    double distance = sqrt(x * x + y * y);
    if (distance < r) {

        std::cout << "Inside" << std::endl;
    }
    else if (distance == r) {

        std::cout << "On the contour" << std::endl;
    }
    else {

        std::cout << "Outside" << std::endl;
    }

    /*

    ������ 6 �� �� ������ ��������, ����� ������� 2 ���� ����� hh � mm.��� ���� ��� �� �� ������� 15������.�� �� �������� �������� ��������, �� �� ���� �������� �� ���� �� � ��������.

    ���� 0 1 ����� : 00 : 16 ���� 4 46 ����� : 05 : 01 ���� 23 50 ����� : 00 : 05

    */

    int hh, mm;
    std::cin >> hh >> mm;

    mm += 15;
    if (mm >= 60) {

        hh++;
        mm -= 60;
    }
    if (hh == 24) {

        hh -= 24;
    }
    std::cout << (hh < 10 ? '0' : '0') << hh << ':' << (mm < 10 ? '0' : '0') << mm << std::endl;

    /*

    ������ 7 �� �� ������ ��������, ����� ������� 4 ���� ����� n, m, l � k.���� ��������� �� ����� �� ����, �������, ���� � ����� ����� � �������� �� ����.����� ��� - ����� ����� ������ �� ������ ���� �� ��������, �� �� � �������, �� �� ��� ���� �� ���� ����� �� ����� ����.

    ���� : 14 9 4 7 ����� : 31

    */

    int s, p, l, k;
    std::cin >> s >> p >> l >> k;

    int min = s;

    if (min > p) min = p;
    if (min > l) min = l;
    if (min > k) min = k;

    std::cout << s + p + l + k - min + 1 << std::endl;
}
