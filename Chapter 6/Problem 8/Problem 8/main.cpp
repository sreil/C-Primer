/*Write a program that opens a text file, reads it character-by-character to the end of
the file, and reports the number of characters in the file.*/

#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::ifstream;
using std::endl;

int main()
{
	ifstream File;

	File.open("example.txt");

	if (!File.is_open())
	{
		cout << "Could not open file!";
		exit(EXIT_FAILURE);
	}

	int count = 0;
	char ch;
	cout << "Reading file..." << endl;

	while (File.get(ch))
	{
		count++;
	}

	cout << "There's " << count << " characters found in that file. ";

	File.close();

	system("pause");
	
	return 0;
}