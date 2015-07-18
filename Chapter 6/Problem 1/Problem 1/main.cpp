/*Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase, and vice
versa. (Don’t forget the cctype family.)*/

#include <iostream>
#include <cctype>

using std::cout;
using std::cin;

int main()
{
	char ch;

	cout << "Please enter anything (except numbers), press @ to exit: ";

	while (cin.get(ch) && ch != '@')
	{
		if (isdigit(ch))
		{
			cout << "No numbers!";
			cin.get(ch);
		}

		if (islower(ch))
		{
			cout << char(toupper(ch));
		}
		else
			cout << char(tolower(ch));
	}
	
	system("pause");

	return 0;
}