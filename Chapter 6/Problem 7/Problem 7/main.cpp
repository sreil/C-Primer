/*Write a program that reads input a word at a time until a lone q is entered.The
program should then report the number of words that began with vowels, the number
that began with consonants, and the number that fit neither of those categories.
One approach is to use isalpha() to discriminate between words beginning with
letters and those that don’t and then use an if or switch statement to further identify
those passing the isalpha() test that begin with vowels.A sample run might
look like this:
Enter words (q to quit):
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int size = 50;
	char word[size];
	int vowel = 0, consonant = 0, neither = 0;

	cout << "Enter words (q to quit)";
	
	while (cin.get(word, size) && word[0] != 'q')
	{
		if (isalpha(word[0]))
		{
			switch (word[0])
			{
			case 'a':
				vowel++;
				cin.get();
				break;
			case 'e':
				vowel++;
				cin.get();
				break;
			case 'i':
				vowel++;
				cin.get();
				break;
			case 'o':
				vowel++;
				cin.get();
				break;
			case 'u':
				vowel++;
				cin.get();
				break;
			default:
				consonant++;
				cin.get();
				break;
			}
		}
		else
		{
			neither++;
			cin.get();
		}
	}

	cout << "There's " << vowel << " words beginning with vowels." << endl;
	cout << "There's " << consonant << " words beginning with consonants. " << endl;
	cout << "There's " << neither << " words that don't begin with either." << endl;

	system("pause");

	return 0;
}