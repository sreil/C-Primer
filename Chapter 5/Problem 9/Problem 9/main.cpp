/*Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string words;
	int count = 0;

	cout << "Enter words(to stop, type the word done): ";
	cin >> words;

	while (words != "done")
	{
		cin >> words;
		count += 1;
	}

	cout << "You entered a total of " << count << " words." << endl;

	system("pause");

	return 0;
}