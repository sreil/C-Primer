/*Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int yards, furlong;

	cout << "Please give me a distance in furlongs: ";
	cin >> furlong;

	yards = furlong * 220;

	cout << "There's " << yards << " yards in " << furlong << " furlong(s) " << endl;

	return 0;
}