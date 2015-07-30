/*Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int size = 10;
double * getInput(int size);
void display(const double *x, int size);
double avg(const double *x, int size);

int main() 
{
	double *x;

	x = getInput(size);
	display(x, size);
	
	double a;
	a = avg(x, size);
	
	cout << "The average is: " << a << endl;

	system("pause");

	return 0;
}

double avg(const double *x, int size) {
	double a = 0.0;
	for (int i = 0; i < size; i++) {
		a += x[i];
	}
	return a / size;
}
void display(const double *x, int size) {
	for (int i = 0; i < size; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
}

double * getInput(int size) {
	cout << "Enter scores: ";
	double *px = new double[size];
	for (int i = 0; i < size; i++) {
		cin >> px[i];
	}
	cin.ignore(size);
	return px;
}