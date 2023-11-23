#include <iostream>

/*
Задача 1:
Въведете в конзолата число n, отговарящо на брой елементи в едномерен масив (за да не се объркате може да го именувате size). Напишете функция, която прочита n (или size) на брой елементи и ги вкарва в масива. Напишете функция, която изкарва на екрана елементите на масива в обратен ред. Валидирайте числото n (или size) да не надвишава максималния размер на масива (нека максималния размер е 100).

Пример:

Вход:
5
1 2 3 4 5

Изход:
5 4 3 2 1

Вход:
101
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 ... 100 101

Изход:
Invalid size
*/

const int MAX_SIZE = 100;

void readArray(int arr[], int size) {

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {

        std::cin >> arr[i];
    }
}

void printReversedArray(int arr[], int size) {

    std::cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; --i) {

        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

/*
Задача 2:
Да се напише програма, която намира скаларното произведение на два вектора. Векторите може да се представляват чрез едномерни масиви. Двата вектора трябва да са с равен брой елементи (1 <= n <= 100).

Пример:

int vector1[] = {1, 2, 3, 4, 5}
int vector2[] = {5, 4, 3, 2, 1}
Изход: 35 // Обяснение: 1 * 5 + 2 * 4 + 3 * 3 + 4 * 2 + 5 * 1
*/

int scalarArrays(int arr1[], int arr2[], int size1, int size2) {

    int sum = 1;
    if (size1 == size2 && size1 >= 1 && size1 <= 100) {

        for (size_t i = 0; i < size1; i++)
        {
            sum += arr1[i] * arr2[i];
        }
    }
    else {

        std::cout << "The vectors should have equal size!" << std::endl;
    }

    return sum;
}

/*
Задача 3:
Въведете k на брой цифри от конзолата (без да ги вкарвате в масив) и изведете колко пъти се среща всяка цифра (0 до 9). Записвайте бройката в масив, като индекса на масива отговаря на съответната цифра.

Пример:

Вход:
5
1 2 3 4 5

Изход:
0: 0
1: 1
2: 1
3: 1
4: 1
5: 1
6: 0
7: 0
8: 0
9: 0
*/

/*
Задача 4:
Напишете програма, която в даден масив намира и извежда растящите последователни подредици в него.

Пример:

int arr[] = {1, 2, 3, 2, 2, 5, 9}
Изход:
1 2 3
2
2 5 9
*/

void findIncreasingSequences(int arr[], int size) {

    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";

        while (i < size - 1 && arr[i] < arr[i + 1]) {

            std::cout << arr[i + 1] << " ";
            ++i;
        }
        std::cout << std::endl;
    }
}

/*
Задача 5:
Въведете в конзолата число k - елементи в масив и след това k на брой елементи в този масив. Капацитетът на масива е 100 (не забравяйте валидацията за k). Напишете две функции, които да обръщат входния масив наобратно, като:

използвате втори масив;
не използвате втори масив.
Изведете елементите на новия масив на екрана.

Пример:

Вход:
5
1 2 3 4 5

Изход:
5 4 3 2 1
5 4 3 2 1
*/

// Функция, която обръща масива с използване на втори масив
void reverseArrayWithAuxiliary(int arr[], int size) {

    int reversed[MAX_SIZE];

    for (int i = 0; i < size; ++i) {

        reversed[i] = arr[size - i - 1];
    }

    std::cout << "Reversed array using auxiliary array: ";
    for (int i = 0; i < size; ++i) {

        std::cout << reversed[i] << " ";
    }
    std::cout << std::endl;
}

// Функция, която обръща масива без използване на втори масив
void reverseArrayInPlace(int arr[], int size) {

    for (int i = 0; i < size / 2; ++i) {

        // Размяна на елементите от краищата на масива
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    std::cout << "Reversed array in place: ";
    for (int i = 0; i < size; ++i) {

        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

/*
Задача 6:
Да се напише функция, която премахва всички четни елементи от масив. Да се направи по два начина:

чрез отместване на всички следващи елементи;
чрез размяна на съответния елемент за премахване и последния и намаляване на размера.
Пример:

Вход:
5
1 2 3 4 5

Изход:
1 3 5
*/

void removeEvenElements(int arr[], int &size) {

    int index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0) {

            arr[index++] = arr[i];
        }
    }
    size = index;
}

void removeEvenElementsSwap(int arr[], int& size) {

    int readIndex = 0;
    int writeIndex = 0;

    while (readIndex < size) {

        if (arr[readIndex] % 2 != 0) {

            if (readIndex != writeIndex) {

                int temp = arr[writeIndex];
                arr[writeIndex] = arr[readIndex];
                arr[readIndex] = temp;
            }
            ++writeIndex;
        }
        ++readIndex;
    }

    size = writeIndex;
}

/*
Задача 7:
Даден е сортиран масив sorted_arr с n елемента. Въведете число k и после k на брой елемента. Докато четете елементите ги вмъквайте в масива така, че той да остане сортиран. Изведете масива на екрана.

Пример:

int MAX_SIZE = 100;
int sorted_arr[MAX_SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
Вход:
3
18 45 65

Изход:
11 18 22 33 44 45 55 65 66 77 88 99
*/

void insertIntoSortedArray(int sorted_arr[], int& size1, int elements[], int& size2) {

    int i = size1 - 1;
    int j = size2 - 1;

    while (i >= 0 && j >= 0) {

        if (sorted_arr[i] >= elements[j]) {

            sorted_arr[i + j + 1] = sorted_arr[i];
            i--;
        }
        else {

            sorted_arr[i + j + 1] = elements[j];
            j--;
        }
    }

    while (j >= 0) {

        sorted_arr[j] = elements[j];
        j--;
    }

    size1 += size2;
}

/*
Задача 8:
Въведете в конзолата размер на масив n [0,100], число m и след това n на брой елементи в масива. Да се напише функция, която извежда всички двойки числа, които се сумират до m.

Пример:

Вход:
11 10
0 1 2 3 4 5 6 7 8 9 10

Изход:
0 10
1 9
2 8
3 7
4 6
*/

void findPairsWithSum(int arr[], int n, int m) {

    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == m) {

                std::cout << arr[i] << " " << arr[j] << std::endl;
            }
        }
    }
}

int main() {

    // Задача 1
    int size1;

    // Въвеждане на размера на масива
    do {
        std::cout << "Enter the size of the array (not exceeding " << MAX_SIZE << "): ";
        std::cin >> size1;

        if (size1 > MAX_SIZE) {

            std::cout << "Invalid size!" << std::endl;
            return 0;
        }
    } while (size1 <= 0 || size1 > MAX_SIZE);

    int myArray1[MAX_SIZE];

    // Четене на елементите на масива
    readArray(myArray1, size1);

    // Извеждане на елементите на масива в обратен ред
    printReversedArray(myArray1, size1);

    // Задача 2

    int vector1[] = { 1, 2, 3, 4, 5 };
    int vector2[] = { 5, 4, 3, 2, 1 };

    std::cout << scalarArrays(vector1, vector2, 5, 5) << std::endl;

    // Задача 3

    const int MAX_DIGITS = 10;
    int digitCount[MAX_DIGITS] = { 0 };

    int k;
    std::cout << "Enter the number of digits: ";
    std::cin >> k;

    std::cout << "Enter " << k << " digits: ";
    for (int i = 0; i < k; ++i) {

        int digit;
        std::cin >> digit;

        // Валидация на въведената цифра
        if (digit >= 0 && digit < MAX_DIGITS) {

            digitCount[digit]++;
        }
    }

    // Извеждане на резултата
    for (int i = 0; i < MAX_DIGITS; ++i) {

        std::cout << i << ": " << digitCount[i] << std::endl;
    }

    // Задача 4

    int arr1[] = { 1, 2, 3, 2, 2, 5, 9 };
    int size2 = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "Increasing sequences in the array:\n";
    findIncreasingSequences(arr1, size2);

    // Задача 5

    int k;

    // Въвеждане на размера на масива
    do {
        std::cout << "Enter the size of the array (not exceeding " << MAX_SIZE << "): ";
        std::cin >> k;
    } while (k <= 0 || k > MAX_SIZE);

    int myArray[MAX_SIZE];

    // Четене на елементите на масива
    std::cout << "Enter " << k << " elements: ";
    for (int i = 0; i < k; ++i) {
        std::cin >> myArray[i];
    }

    // Извикване на функциите за обръщане на масива
    reverseArrayWithAuxiliary(myArray, k);
    reverseArrayInPlace(myArray, k);

    // Задача 6

    int myArray2[MAX_SIZE];
    int m;

    // Въвеждане на размера на масива
    do {
        std::cout << "Enter the size of the array (not exceeding " << MAX_SIZE << "): ";
        std::cin >> m;
    } while (m <= 0 || m > MAX_SIZE);

    // Четене на елементите на масива
    std::cout << "Enter " << k << " elements: ";
    for (int i = 0; i < m; ++i) {

        std::cin >> myArray2[i];
    }

    // Първи начин: чрез отместване на следващите елементи
    removeEvenElements(myArray2, m);

    std::cout << "Array after removing even elements (shift method): ";
    for (int i = 0; i < m; ++i) {

        std::cout << myArray2[i] << " ";
    }
    std::cout << std::endl;

    // Възстановяване на масива след премахване на четните елементи
    for (int i = 0; i < m; ++i) {

        myArray2[i] = i + 1;
    }

    // Втори начин: чрез размяна с последния елемент
    removeEvenElementsSwap(myArray2, m);

    std::cout << "Array after removing even elements (swap method): ";
    for (int i = 0; i < m; ++i) {

        std::cout << myArray2[i] << " ";
    }
    std::cout << std::endl;

    // Задача 7
     
    int sorted_arr[MAX_SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int n = 9; // Началният размер на сортирания масив

    int l;

    // Въвеждане на броя елементи, които ще вмъкнем
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> l;

    // Въвеждане на елементите, които ще вмъкнем
    int elements[MAX_SIZE];
    std::cout << "Enter " << l << " elements: ";
    for (int i = 0; i < l; ++i) {

        std::cin >> elements[i];
    }

    // Вмъкване на елементите в сортирания масив
    insertIntoSortedArray(sorted_arr, n, elements, k);

    // Извеждане на сортирания масив
    std::cout << "Sorted array after insertion: ";
    for (int i = 0; i < n; ++i) {

        std::cout << sorted_arr[i] << " ";
    }
    std::cout << std::endl;

    // Задача 8

    int arr[MAX_SIZE];
    int n, m;

    // Въвеждане на размера на масива
    do {
        std::cout << "Enter the size of the array (not exceeding " << MAX_SIZE << "): ";
        std::cin >> n;
    } while (n <= 0 || n > MAX_SIZE);

    // Въвеждане на число m
    std::cout << "Enter the sum to find: ";
    std::cin >> m;

    // Въвеждане на елементите на масива
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Извикване на функцията за намиране на двойки с дадена сума
    findPairsWithSum(arr, n, m);

    return 0;
}
