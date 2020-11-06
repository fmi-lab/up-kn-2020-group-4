#include <iostream>

int main() 
{
	int length, height, area;

	std::cout << "Enter length: ";
	std::cin >> length;

	std::cout << "Enter height: ";
	std::cin >> height;

	std::cout << "Enter area: ";
	std::cin >> area;

	// One approach could be:
	int number_of_boxes;

	if ((length * height) % area > 0) 
	{
		number_of_boxes = (length * height / area) + 1;
	} 
	else 
	{
		number_of_boxes = length * height / area;
	}

	// Other approach could be usage of ceil() from cmath library :
	// int number_of_boxes = ceil(length * height / area);

	std::cout << "Number of boxes: " << number_of_boxes;

	return 0;
}