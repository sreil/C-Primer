/*Write a precursor to a menu-driven program.The program should display a menu
offering four choices, each labeled with a letter. If the user responds with a letter
other than one of the four valid choices, the program should prompt the user to
enter a valid response until the user complies.Then the program should use a
switch to select a simple action based on the user’s selection.A program run could
look something like this:
Please enter one of the following choices:
c) carnivore p) pianist
t) tree g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char choice;

	cout << "Please enter a c, p, t, or g: ";
	while (cin >> choice)
	{
		switch (choice)
		{
		case 'c': 
			cout << "C is for cat" << endl;
			break;
		case 'p':
			cout << "P is for peaches " << endl;
			break;
		case 't':
			cout << "A maple is a tree" << endl;
			break;
		case 'g':
			cout << "G is for gangsta" << endl;
			break;
		default:
			cout << "Please enter c, p, t, or g" << endl;
			break;
		}
	}


	return 0;
}