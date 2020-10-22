#include <iostream>

int main() 
{
	int hour, minute, time;
	int end_hour, end_minute;

	std::cout << "Enter hour: ";
	std::cin >> hour;

	std::cout << "Enter minute: ";
	std::cin >> minute;

	std::cout << "Enter period: ";
	std::cin >> time;

	int period_hour = time / 60;
	int period_minute = time % 60;

	end_hour = (hour + period_hour + (minute + period_minute) / 60) % 24;
	end_minute = (minute + period_minute) % 60;

	std::cout << "Arrival time: " << end_hour << ":" << end_minute;

	return 0;
}