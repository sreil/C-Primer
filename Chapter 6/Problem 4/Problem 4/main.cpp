/*When you join the Benevolent Order of Programmers, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name.Write a program
that can list members by real name, by job title, by secret name, or by a member’s
preference. Base the program on the following structure:
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};
In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alternatives:
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Note that “display by preference” does not mean display the preference member; it
means display the member corresponding to the preference number. For instance, if
preference is 1, choice d would display the programmer’s job title.A sample run
may look something like the following:
Benevolent Order of Programmers Report
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int strsize = 30;

struct bop {
	char fullname[strsize]; // real name
	char title[strsize]; // job title
	char bopname[strsize]; // secret BOP name
	int preference; // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
	bop members[4] = { "Bob Bobson", "Engineer", "BobSquared", 1,
		"Steve Stevenson", "Athlete", "Steve2.0", 2,
		"Laura Laurel", "Manager", "Lawls", 0,
		"Becky Beckerson", "Student", "ItzBeck", 2
	};

	cout << "BOP Report: " << endl;
	cout << "a.display by name \t b.display by title" << endl;
	cout << "c.display by bopname \t d.display by preference" << endl;
	cout << "q.quit" << endl;

	char choice;

	do {
		cout << "Please make choice now: ";
		cin >> choice;

		for (int i = 0; i < 4; i++)
		{
			switch (choice)
			{
			case 'a':
					cout << members[i].fullname << endl;
					break;
			case 'b':
				cout << members[i].title << endl;
				break;
			case 'c':
				cout << members[i].bopname << endl;
				break;
			case 'd':
				cout << members[i].preference << endl;
				break;
			}
		}
	} while (choice != 'q');

	cout << "Bye!";
	
	system("pause");
	return 0;
}