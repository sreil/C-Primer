/*Do Programming Exercise 6 but modify it to get information from a file.The first
item in the file should be the number of contributors, and the rest of the file should
consist of pairs of lines, with the first line of each pair being a contributor’s name
and the second line being a contribution.That is, the file should look like this:
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000*/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

struct member {
	string name;
	double contribution;
};

int main()
{
	ifstream contributors;

	contributors.open("contributors.txt");

	if (!contributors.is_open())
	{
		cout << "Could not open file!";
		exit(EXIT_FAILURE);
	}

	int donorTotal = 0;
	char first;

	contributors >> donorTotal;

	member *total = new member[donorTotal];

	for (int i = 0; i < donorTotal; i++)
	{
		contributors.get();
		getline(contributors, total[i].name);
		contributors >> total[i].contribution;
	}

	cout << "Grand Patrons: " << endl;

	for (int i = 0; i < donorTotal; i++)
	{
		if (total[i].contribution >= 10000)
		{
			cout << total[i].name << endl;
		}

	}
	cout << "Patrons: " << endl;

	for (int i = 0; i < donorTotal; i++)
	{
		if (total[i].contribution < 10000)
		{
			cout << total[i].name << endl;
		}
	}
	system("pause");

	return 0;
}