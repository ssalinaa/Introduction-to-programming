#include <iostream>
#include <cmath>

/*
 Масив наричаме наредена поредица от елементи от един тип. Елементите се достъпват директно, чрез индекси.

1. Инициализация на мисиви
int arr[10]; // Създава масив от 10 цели числа.
int arr2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Създава масив с числата от 0 до 9.
int arr3[10] = {0, 1, 2, 3}; // Останалите елементи се запълват с default-на стойност

int arr[]; // Грешка!!!
int arr[4] = {0, 1, 2, 3, 4}; // Грешка!!!
!Важно! Задължително е големината на масива да е константа, чиято стойност е ясна преди компилация.

int n;
std::cin >> n;
int arr[n]; // Грешка!
Забележка! Това имитира поведение на динамичен масив, именно заради което не го използваме. Напрактика компилатора отново заделя памет от стека за тези масиви.

const int SIZE = 4;
int arr[SIZE]; // Екстра!
2. Достъп до елементите
В масивите имаме константен достъп до всеки един елемент. Достъпът става посредством индекси, започващи от 0. Защо от 0!?
int arr[] = {1, 2, 40, 4, 5};
arr[2] = 3; // Присвояваме на елементът на индекс 2 стойността 3.
            // [1, 2, 3, 4, 5]
std::cout << arr[3]; // Отпечатва на стандартния изход елементът на индекс 3(4).
3. Масиви като аргументи на функции
Пример:
// Функция, която показва съдържанието на масива
void print(const int arr[], int len){

    for(int i = 0; i < len; ++i)
    {
        std::cout << arr[i] << ' ';
    }

}

// Функция, която удвоява стойността на всеки елемент в масива
void doubleValue(int[] arr, unsigned size){

    for(unsigned i = 0; i < size; ++i)
    {
        arr[i]++;
    }

}

// Функция, която сумира елементите на масива
int sum(int *arr, size_t size)
{
    int sum = 0;

    for(size_t i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    return sum;
}
Задачи

*/

/*
Задача 1: Да се напише фунцкия, която приема масив и връща минималния 
елемент в него.

Вход: [12 5 23 9] Изход: 5
*/

int minElement(const int arr[], size_t size) {

    int min = arr[0];

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min) {

            min = arr[i];
        }
    }

    return min;
}

/*
Задача 2: Да се напише функция, която приема масив и връща сумата
на елементите в него.

Вход: [13 0 2 3 16] Изход: 34
*/

int sumElements(const int arr[], size_t size) {

    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

/*
Задача 3: Да се напише функция, която приема масив и връща 
най-големият общ делител на числата в масива.

Вход: 9 18 27 15 Изход: 3
*/

int min(const int a, const int b) {

    return (a < b) ? a : b;
}

int gcd(const int a, const int b) {

    int result = min(a, b);

    while (result > 0) {

        if (a % result == 0 && b % result == 0) {

            break;
        }
        result--;
    }

    return result;
}

/*
Задача 4: Да се напише функция, която приема 2 масива и връща броят
на еднаквите им елементи. Не разглеждаме повторения, търсим само дали 
има еднакви елементи!

Вход: [1 2 3 4 5 6 7 8 9] [14 67 23 4 92 6 10 2 48 5 19 4] Изход: 4
*/

int commonElements(const int arr1[], const int arr2[], size_t size1, size_t size2) {

    int counter = 0;
    for (size_t i = 0; i < size1; i++)
    {
        for (size_t j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j]) {

                counter++;
                break;
            }
        }
    }

    return counter;
}

/*
Задача 5: Да се напише функция, която приема сортиран масив и изтрива 
всички повтарящи се елементи в него.

Вход: [1 2 2 2 3 4 5 5 6 7] Изход: [1 3 4 6 7]
*/

void removeDuplicates(int arr[], unsigned int& size) {

    for (unsigned int i = 0; i < size - 1; i++) {

        if (arr[i] == arr[i + 1]) {

            // Брояч за броя повтарящи се числа
            unsigned int count = 0;

            // Броим колко еднакви елемнта има без първия тъй като почваме от него
            for (; count < size - i - 1; count++)
            {
                if (arr[i + count] != arr[i + count + 1]) {

                    break;
                }
            }
            // Добавяме още едно заради първия елемент
            count++;

            // Преместваме елементите напред на мястото на повтарящите се
            for (unsigned k = 0; k < size - i - 1; k++)
            {
                arr[i + k] = arr[i + k + count];
            }
            // Премахваме от size-а колкото елемента сме изтрили
            size -= count;

        }
    }
}

void printArrayWithoutDuplicates(int arr[], const unsigned int& size) {

    bool hasDuplicate = false;

    for (unsigned int i = 0; i < size - 1; i++) {

        if (arr[i] == arr[i + 1]) {

            hasDuplicate = true;
            continue;
        }

        if (!hasDuplicate) std::cout << arr[i] << ' ';
        hasDuplicate = false;

    }

    if (!hasDuplicate) std::cout << arr[size - 1];

    std::cout << std::endl;

}

/*
Задача 6: Да се напише функция, която приема масив и намира коя е най-малката разлика между два елемента.

Вход: [10 2 5 83 20 17 24 7] Изход: 2
*/

int minDiff(const int arr[], const int size) {

    int min = INT_MAX;
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (abs(arr[i] - arr[j]) < min) {

                min = abs(arr[i] - arr[j]);
            }
        }
    }

    return min;
}

int main()
{
    int arr1[4] = { 12, 5, 11, 9  };
    std::cout << minElement(arr1, 4) << std::endl;

    std::cout << sumElements(arr1, 4) << std::endl;

    int arr2[4] = { 9, 18, 27, 15 };
    int greatestCommonDenominator = gcd(arr2[0], arr2[1]);

    for (size_t i = 2; i < 4; i++)
    {
        greatestCommonDenominator = gcd(greatestCommonDenominator, arr2[i]);
    }

    std::cout << greatestCommonDenominator << std::endl;

    const unsigned int SIZE_3 = 9, SIZE_4 = 12;
    int arr3[SIZE_3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, arr4[SIZE_4] = { 14, 67, 23, 4, 92, 6, 10, 2, 48, 5, 19, 4 };

    std::cout << commonElements(arr3, arr4, SIZE_3, SIZE_4) << std::endl;

    unsigned int SIZE5 = 10;
    int arr5[10] = { 1, 2, 2, 2, 3, 4, 5, 5, 6, 7 };
    printArrayWithoutDuplicates(arr5, 10);

    removeDuplicates(arr5, SIZE5);

    std::cout << 10 << std::endl;

    for (unsigned int i = 0; i < SIZE5; i++)
    {
        std::cout << arr5[i] << ' ';
    }
    std::cout << std::endl;

    const int SIZE6 = 8;

    const int arr6[SIZE6] = { 10, 2, 5, 83, 20, 17, 24, 7 };
    std::cout << minDiff(arr6, SIZE6) << std::endl;

    return 0;
}
