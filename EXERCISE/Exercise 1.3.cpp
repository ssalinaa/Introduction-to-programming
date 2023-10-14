#include <iostream>

/*
Task 1.6.[1] To write a program that according to set completed
years finds the approximate number of days, hours, minutes and seconds that a person lived until reaching the specified years.
*/

int main() {

	int age;
	std::cin >> age;

	int daysInYear = 365;
	int hoursInDay = 24;
	int minutesInHour = 60;
	int secondsInMinute = 60;

	int totalDays = age * daysInYear;
	int totalHours = totalDays * hoursInDay;
	int totalMinutes = totalHours * minutesInHour;
	int totalSeconds = totalMinutes * secondsInMinute;

	std::cout << "Until your " << age << "-th birthday, you've lived approximately:" << std::endl;
	std::cout << totalDays << " days" << std::endl;
	std::cout << totalHours << " hours" << std::endl;
	std::cout << totalMinutes << " minutes" << std::endl;
	std::cout << totalSeconds << " seconds" << std::endl;

	return 0;
}
