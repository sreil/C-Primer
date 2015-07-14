/*Write a program that asks the user to enter his or her first name and then last
name, and that then constructs, stores, and displays a third string, consisting of the
user’s last name followed by a comma, a space, and first name. Use char arrays and
functions from the cstring header file.A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip*/

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int arSize = 20;
	char name[arSize];
	char last[arSize];
	char full[arSize* 2];

	cout << "Enter your first name: ";
	cin.getline(name, arSize);
	cout << "Enter your last name: ";
	cin.getline(last, arSize);

	strcat_s(last, ", ");
	strcpy_s(full, last);
	strcat_s(full, name);

	cout << "Here’s the information in a single string: " << full << endl;

	return 0;
}