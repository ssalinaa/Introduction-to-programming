#include <iostream>

// Програма, която по въведени тегло в килограми и височина в метри, изчислява BMI.

int main()
{
	double weight, height;
    std::cout << "Please correctly input your weight in kg: ";
    std::cin >> weight;

    std::cout << "Please correctly input your height in m: ";
    std::cin >> height;

    std::cout << "Your BMI is: " << weight / (height * height) << std::endl;

	return 0;
}
