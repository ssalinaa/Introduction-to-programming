#include <iostream>

int main() {

	// Задача 1

	int numbers[5] = { 1, 2, 3, 4, 5};
	for (size_t j = 0; j < 5; j++)
	{
		std::cout << numbers[j] << " ";
	}

	// Задача 2

	int nums[10];
	int sum = 0;
	for (size_t i = 0; i < 10; i++)
	{
		std::cin >> nums[i];
		sum += nums[i];
	}
	std::cout << sum << std::endl;

	// Задача 3

	int n;
	std::cin >> n;
	int arr1[1024];
	double average = 0;
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr1[i];
		average += arr1[i];
	}

	std::cout << average / n << std::endl;

	// Задача 4

	int arr2[1024];
	int m;
	std::cin >> m;

	for (size_t i = 0; i < m; i++)
	{
		std::cin >> arr2[i];
	}

	int max = arr2[0];
	int min = arr2[0];

	for (size_t i = 1; i < m; i++)
	{
		if (arr2[i] > max) {

			max = arr2[i];
		}

		if (arr2[i] < min) {

			min = arr2[i];
		}
	}

	std::cout << "Min value: " << min << std::endl;
	std::cout << "Max value: " << max << std::endl;*/

	// Задача 5

	int arr3[1024];
	int size1;
	std::cin >> size1;
	for (size_t i = 0; i < size1; i++)
	{
		std::cin >> arr3[i];
	}
	for (size_t i = 0; i < size1 / 2; i++)
	{
		int temp = arr3[i];
		arr3[i] = arr3[size1 - i - 1];
		arr3[size1 - i - 1] = temp;
	}
	for (size_t i = 0; i < size1; i++)
	{
		std::cout << arr3[i] << " ";
	}

	// Задача 6

	int arr4[1024];
	int size2;
	std::cin >> size2;
	int count = 0;

	for (size_t i = 0; i < size2; i++)
	{
		std::cin >> arr4[i];
	}
	for (size_t i = 0; i < size2; i++)
	{
		if (arr4[i] % 2 == 0) {

			count++;
		}
	}
	std::cout << "Count: " << count << std::endl;

	// Задача 7

	int arr5[1024];
	int arr6[1024];
	int size3;
	std::cin >> size3;
	bool equal = true;

	std::cout << "Input the elements of the first array: " << std::endl;
	for (size_t i = 0; i < size3; i++)
	{
		std::cin >> arr5[i];
	}

	std::cout << "Input the elements of the second array: " << std::endl;
	for (size_t i = 0; i < size3; i++)
	{
		std::cin >> arr6[i];
	}

	for (size_t i = 0; i < size3; i++)
	{
		if (arr5[i] != arr6[i]) {

			equal = false;
		}
	}

	if (equal) {
		 
		std::cout << "The arrays are equal." << std::endl;
	}
	else {

		std::cout << "The arrays are not equal." << std::endl;
	}

	// Задача 8

	int arr7[1024];
	int size4;
	std::cin >> size4;

	for (size_t i = 0; i < size4; i++)
	{
		std::cin >> arr7[i];
	}
	for (size_t i = 0; i < size4; i++)
	{
		for (int j = i + 1; j < size4; j++) {

			if (arr7[i] == arr7[j]) {

				std::cout << arr7[i] << " ";
				break;
			}
		}
	}

	// Задача 9

	int arr8[1024];
	int size5;
	std::cin >> size5;
	int result = 1;
	for (size_t i = 0; i < size5; i++)
	{
		std::cin >> arr8[i];
	}
	for (size_t i = 0; i < size5; i++)
	{
		if (arr8[i] % 2 != 0) {

			result *= arr8[i];
		}
	}

	std::cout << result << std::endl;

	// Задача 10

	int arr9[1024];
	int size6;
	std::cin >> size6;
	for (size_t i = 0; i < size6; i++)
	{
		std::cin >> arr9[i];
	}
	for (size_t i = 0; i < size6; i++)
	{
		if (arr9[i] < 0) {
	
			arr9[i] = 0;
		}
	}
	for (size_t i = 0; i < size6; i++)
	{
		std::cout << arr9[i] << " ";
	}

	// Задача 11

	int arr10[1024];
	int size7;
	std::cin >> size7;
	for (size_t i = 0; i < size7; i++)
	{
		std::cin >> arr10[i];
	}

	int lastElement = arr10[size7 - 1];
	for (size_t i = size7 - 1; i > 0; i--)
	{
		arr10[i] = arr10[i - 1];
	}
	arr10[0] = lastElement;

	for (size_t i = 0; i < size7; i++)
	{
		std::cout << arr10[i] << " ";
	}

	// Задача 12
	
	int arr11[1024];
	int size8;
	std::cin >> size8;
	int count = 0;
	for (size_t i = 0; i < size8; i++)
	{
		std::cin >> arr11[i];
	}

	std::cout << "Enter the number you're looking for: ";
	int num;
	std::cin >> num;

	for (size_t i = 0; i < size8; i++)
	{
		if (arr11[i] == num) {

			count++;
		}
	}

	std::cout << count;

	// Задача 13

	int arr12[1024];
	int size9;
	std::cin >> size9;
	for (size_t i = 0; i < size9; i++)
	{
		std::cin >> arr12[i];
	}

	std::cout << "Enter the element you want to insert: ";
	int element;
	std::cin >> element;

	std::cout << "Enter the position you want to insert the element: ";
	int index;
	std::cin >> index;

	for (size_t i = size9; i > index; i--)
	{
		arr12[i] = arr12[i - 1];
	}
	arr12[index] = element;

	for (size_t i = 0; i <= size9; i++)
	{
		std::cout << arr12[i] << " ";
	}

	// Задача 14

	int arr13[1024];
	int size10;
	std::cin >> size10;
	for (size_t i = 0; i < size10; i++)
	{
		std::cin >> arr13[i];
	}

	std::cout << "Enter the position of the element you want to remove: ";
	int index;
	std::cin >> index;

	for (size_t i = index; i < size10 - 1; i++)
	{
		arr13[i] = arr13[i + 1];
	}

	for (size_t i = 0; i < size10 - 1; i++)
	{
		std::cout << arr13[i] << " ";
	}

	// Задача 15

	int arr14[1024];
	int arr15[1024];
	int arr16[1024];
	int size11;
	std::cin >> size11;

	std::cout << "Input the elements of the first array: " << std::endl;
	for (size_t i = 0; i < size11; i++)
	{
		std::cin >> arr14[i];
	}

	std::cout << "Input the elements of the second array: " << std::endl;
	for (size_t i = 0; i < size11; i++)
	{
		std::cin >> arr15[i];
	}
	
	for (size_t i = 0; i < size11; i++)
	{
		arr16[i] = arr14[i] * arr15[i];
	}
	
	for (size_t i = 0; i < size11; i++)
	{
		std::cout << arr16[i] << " ";
	}

	return 0;
}