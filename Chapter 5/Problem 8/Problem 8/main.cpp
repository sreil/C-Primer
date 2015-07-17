/*Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
You should include the cstring header file and use the strcmp() function to
make the comparison test.*/

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int size = 50;

int main()
{
	char words[size];
	int count = 0;

	cout << "Enter words(to stop, type the word done): ";
	cin >> words;

	while (strcmp(words, "done"))
	{
		cin >> words;
		count += 1;
	}

	cout << "You entered a total of " << count << " words." << endl;

	system("pause");

	return 0;
}