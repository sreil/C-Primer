/*Rewrite Listing 4.4, using the C++ string class instead of char arrays.
Listing 4.4 instr2.cpp
// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
using namespace std;
const int ArSize = 20;
char name[ArSize];
char dessert[ArSize];
cout << "Enter your name:\n";
cin.getline(name, ArSize); // reads through newline
cout << "Enter your favorite dessert:\n";
cin.getline(dessert, ArSize);
cout << "I have some delicious " << dessert;
cout << " for you, " << name << ".\n";
return
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

using namespace std;

int main()
{
	string name, dessert;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your favorite dessert: ";
	cin >> dessert;

	cout << "I have some delicious " << dessert << " for you, " << name << endl;

	return 0;
}