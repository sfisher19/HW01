//Shaun Fisher
//02-09-2016
//CS-172-1
//Homework 1
//Purpose: To display my knowledge of CS I review material

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;


void main()
{
	//Called functions
	ex02();
	ex03();
	ex04();
	ex05();
}

void ex02()
{
	//a
	bool hasPassedTest = true;

	//b
	//random numbers between 1 and 99.
	int x = rand() % 100;
	int y = rand() % 100;
	if (x >= y) {
		cout << x << " is greater than or equal to " << y << endl;
	}
	else {
		cout << y << " is greater than " << x << endl;
	}

	//c
	int numberOfShares = 0;
	cout << "Please enter a value: ";
	cin >> numberOfShares;
	if (numberOfShares < 100) {
		cout << numberOfShares << " is less than 100 " << endl;
	}
	else {
		cout << numberOfShares << " is not less than 100 " << endl;
	}

	//d
	cout << "Please enter a box width: ";
	int boxWidth = 0; //initialized value
	cin >> boxWidth;
	cout << endl;
	cout << "PLease enter a book width: ";
	int bookWidth = 0; //initialized value
	cin >> bookWidth;
	if ((boxWidth % bookWidth) == 0) {
		cout << "The box width and the book width are evenly divisible. " << endl;
	}
	else {
		cout << "The box width and the book width are not evenly divisible. " << endl;
	}

	//e
	int chocolateLife = 0;//initialized value
	int temp = 0;//initialized value
	cout << "Please enter the shelf life of a box of chocolates: ";
	cin >> chocolateLife;
	cout << endl;
	cout << "Please enter the current temperature: ";
	cin >> temp;
	cout << endl;
	if (temp > 90) {
		int newShelfLife = chocolateLife - 4;
		cout << "The shelf life of the chocolate is " << newShelfLife << endl;
	}
	else {
		cout << "The shelf life you entered is not affected by the temperature. " << endl;
	}
}

void ex03()
{
	//a
	double area = 0;//initialized value
	cout << "Please input the area of a square: ";
	cin >> area;
	cout << endl;
	double length = pow(area, 0.5);
	double diagonal = pow((pow(length, 2)) + (pow(length, 2)), 0.5);
	cout << "The diagonal of the square is " << diagonal << endl;

	//b
	cout << "Please type 'y' for yes or 'n' for no: ";
	string answer;
	cin >> answer;
	cout << endl;
	if (answer == "n")
	{
		cout << "no" << endl;
	}
	else if (answer == "y")
	{
		cout << "yes" << endl;
	}

	//c
	char tab = 9;//ASCII = 9 for tab character

	//d
	string mailingAddress;
	cout << "Please enter your mailing address: ";
	cin >> mailingAddress;

	//e
	string x = " ";
}



void ex04()
{
	//a
	int user = 0;//initialized value
	cout << "Please enter a number between 1 and 10: ";
	cin >> user;
	cout << endl;
	do
	{
		cout << "That is not a valid number, please try again: ";
		cin >> user;
		cout << endl;
	} while (user > 10 && user < 1);

	//b
	int total = 0;//initialized value
	for (int i = 1; i < user; i++)
	{
		int cube = pow(i, 3);
		total += cube;
	}

	//c
	int j = 0;//initialized value
	do
	{
		cout << "*";
		j++;
	} while (j <= user);

	//d
	int i;
	for (i = 1; i <= 40; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}

	two(user);

}


	//e function
	void two(int x)
	{
		int x;
		int timesTwo = x * 2;
	}

	//f function #2
	int add(int x, int y)
	{
		int x = rand() % 100;
		int y = rand() % 100;
		cout << x + y << endl;
	}
	

void ex05()
{
	//a & b
	const int numbers = 5;
	double set[numbers];
	double sum = 0;
	double product = 1;

	for (int i = 0; i < numbers; i++)
	{
		cout << "Please enter a number: ";
		cin >> set[i];
		sum += set[i];
		product = set[i] * product;
	}
}