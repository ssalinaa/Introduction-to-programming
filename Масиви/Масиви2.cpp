#include <iostream>

/*
������ 1:
�������� � ��������� ����� n, ���������� �� ���� �������� � ��������� ����� (�� �� �� �� �������� ���� �� �� ��������� size). �������� �������, ����� ������� n (��� size) �� ���� �������� � �� ������ � ������. �������� �������, ����� ������� �� ������ ���������� �� ������ � ������� ���. ����������� ������� n (��� size) �� �� ��������� ����������� ������ �� ������ (���� ����������� ������ � 100).

������:

����:
5
1 2 3 4 5

�����:
5 4 3 2 1

����:
101
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 ... 100 101

�����:
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
������ 2:
�� �� ������ ��������, ����� ������ ���������� ������������ �� ��� �������. ��������� ���� �� �� ������������� ���� ��������� ������. ����� ������� ������ �� �� � ����� ���� �������� (1 <= n <= 100).

������:

int vector1[] = {1, 2, 3, 4, 5}
int vector2[] = {5, 4, 3, 2, 1}
�����: 35 // ���������: 1 * 5 + 2 * 4 + 3 * 3 + 4 * 2 + 5 * 1
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
������ 3:
�������� k �� ���� ����� �� ��������� (��� �� �� �������� � �����) � �������� ����� ���� �� ����� ����� ����� (0 �� 9). ���������� �������� � �����, ���� ������� �� ������ �������� �� ����������� �����.

������:

����:
5
1 2 3 4 5

�����:
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
������ 4:
�������� ��������, ����� � ����� ����� ������ � ������� ��������� �������������� ��������� � ����.

������:

int arr[] = {1, 2, 3, 2, 2, 5, 9}
�����:
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
������ 5:
�������� � ��������� ����� k - �������� � ����� � ���� ���� k �� ���� �������� � ���� �����. ����������� �� ������ � 100 (�� ���������� ����������� �� k). �������� ��� �������, ����� �� ������� ������� ����� ���������, ����:

���������� ����� �����;
�� ���������� ����� �����.
�������� ���������� �� ����� ����� �� ������.

������:

����:
5
1 2 3 4 5

�����:
5 4 3 2 1
5 4 3 2 1
*/

// �������, ����� ������ ������ � ���������� �� ����� �����
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

// �������, ����� ������ ������ ��� ���������� �� ����� �����
void reverseArrayInPlace(int arr[], int size) {

    for (int i = 0; i < size / 2; ++i) {

        // ������� �� ���������� �� �������� �� ������
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
������ 6:
�� �� ������ �������, ����� �������� ������ ����� �������� �� �����. �� �� ������� �� ��� ������:

���� ���������� �� ������ �������� ��������;
���� ������� �� ���������� ������� �� ���������� � ��������� � ���������� �� �������.
������:

����:
5
1 2 3 4 5

�����:
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
������ 7:
����� � �������� ����� sorted_arr � n ��������. �������� ����� k � ����� k �� ���� ��������. ������ ������ ���������� �� ��������� � ������ ����, �� ��� �� ������ ��������. �������� ������ �� ������.

������:

int MAX_SIZE = 100;
int sorted_arr[MAX_SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
����:
3
18 45 65

�����:
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
������ 8:
�������� � ��������� ������ �� ����� n [0,100], ����� m � ���� ���� n �� ���� �������� � ������. �� �� ������ �������, ����� ������� ������ ������ �����, ����� �� ������� �� m.

������:

����:
11 10
0 1 2 3 4 5 6 7 8 9 10

�����:
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

    // ������ 1
    int size1;

    // ��������� �� ������� �� ������
    do {
        std::cout << "Enter the size of the array (not exceeding " << MAX_SIZE << "): ";
        std::cin >> size1;

        if (size1 > MAX_SIZE) {

            std::cout << "Invalid size!" << std::endl;
            return 0;
        }
    } while (size1 <= 0 || size1 > MAX_SIZE);

    int myArray1[MAX_SIZE];

    // ������ �� ���������� �� ������
    readArray(myArray1, size1);

    // ��������� �� ���������� �� ������ � ������� ���
    printReversedArray(myArray1, size1);

    // ������ 2

    int vector1[] = { 1, 2, 3, 4, 5 };
    int vector2[] = { 5, 4, 3, 2, 1 };

    std::cout << scalarArrays(vector1, vector2, 5, 5) << std::endl;

    // ������ 3

    const int MAX_DIGITS = 10;
    int digitCount[MAX_DIGITS] = { 0 };

    int k;
    std::cout << "Enter the number of digits: ";
    std::cin >> k;

    std::cout << "Enter " << k << " digits: ";
    for (int i = 0; i < k; ++i) {

        int digit;
        std::cin >> digit;

        // ��������� �� ���������� �����
        if (digit >= 0 && digit < MAX_DIGITS) {

            digitCount[digit]++;
        }
    }

    // ��������� �� ���������
    for (int i = 0; i < MAX_DIGITS; ++i) {

        std::cout << i << ": " << digitCount[i] << std::endl;
    }

    // ������ 4

    int arr1[] = { 1, 2, 3, 2, 2, 5, 9 };
    int size2 = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "Increasing sequences in the array:\n";
    findIncreasingSequences(arr1, size2);

    // ������ 5

    int k;

    // ��������� �� ������� �� ������
    do {
        std::cout << "Enter the size of the array (not exceeding " << MAX_SIZE << "): ";
        std::cin >> k;
    } while (k <= 0 || k > MAX_SIZE);

    int myArray[MAX_SIZE];

    // ������ �� ���������� �� ������
    std::cout << "Enter " << k << " elements: ";
    for (int i = 0; i < k; ++i) {
        std::cin >> myArray[i];
    }

    // ��������� �� ��������� �� �������� �� ������
    reverseArrayWithAuxiliary(myArray, k);
    reverseArrayInPlace(myArray, k);

    // ������ 6

    int myArray2[MAX_SIZE];
    int m;

    // ��������� �� ������� �� ������
    do {
        std::cout << "Enter the size of the array (not exceeding " << MAX_SIZE << "): ";
        std::cin >> m;
    } while (m <= 0 || m > MAX_SIZE);

    // ������ �� ���������� �� ������
    std::cout << "Enter " << k << " elements: ";
    for (int i = 0; i < m; ++i) {

        std::cin >> myArray2[i];
    }

    // ����� �����: ���� ���������� �� ���������� ��������
    removeEvenElements(myArray2, m);

    std::cout << "Array after removing even elements (shift method): ";
    for (int i = 0; i < m; ++i) {

        std::cout << myArray2[i] << " ";
    }
    std::cout << std::endl;

    // �������������� �� ������ ���� ���������� �� ������� ��������
    for (int i = 0; i < m; ++i) {

        myArray2[i] = i + 1;
    }

    // ����� �����: ���� ������� � ��������� �������
    removeEvenElementsSwap(myArray2, m);

    std::cout << "Array after removing even elements (swap method): ";
    for (int i = 0; i < m; ++i) {

        std::cout << myArray2[i] << " ";
    }
    std::cout << std::endl;

    // ������ 7
     
    int sorted_arr[MAX_SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int n = 9; // ��������� ������ �� ���������� �����

    int l;

    // ��������� �� ���� ��������, ����� �� �������
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> l;

    // ��������� �� ����������, ����� �� �������
    int elements[MAX_SIZE];
    std::cout << "Enter " << l << " elements: ";
    for (int i = 0; i < l; ++i) {

        std::cin >> elements[i];
    }

    // �������� �� ���������� � ���������� �����
    insertIntoSortedArray(sorted_arr, n, elements, k);

    // ��������� �� ���������� �����
    std::cout << "Sorted array after insertion: ";
    for (int i = 0; i < n; ++i) {

        std::cout << sorted_arr[i] << " ";
    }
    std::cout << std::endl;

    // ������ 8

    int arr[MAX_SIZE];
    int n, m;

    // ��������� �� ������� �� ������
    do {
        std::cout << "Enter the size of the array (not exceeding " << MAX_SIZE << "): ";
        std::cin >> n;
    } while (n <= 0 || n > MAX_SIZE);

    // ��������� �� ����� m
    std::cout << "Enter the sum to find: ";
    std::cin >> m;

    // ��������� �� ���������� �� ������
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // ��������� �� ��������� �� �������� �� ������ � ������ ����
    findPairsWithSum(arr, n, m);

    return 0;
}
