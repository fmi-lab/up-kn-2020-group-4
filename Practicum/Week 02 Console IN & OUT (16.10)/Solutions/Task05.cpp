#include <iostream>

int main() 
{
	float length, height, area;

	std::cout << "Enter length: ";
	std::cin >> length;

	std::cout << "Enter height: ";
	std::cin >> height;

	std::cout << "Enter area: ";
	std::cin >> area;

	int number_of_boxes;

	if ((length * height) % area > 0) 
	{
		number_of_boxes = (length * height / area) + 1;
	} 
	else 
	{
		number_of_boxes = length * height / area;
	}

	std::cout << "Number of boxes: " << number_of_boxes;

	return 0;
}