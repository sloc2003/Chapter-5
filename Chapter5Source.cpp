/* oez-Chapter5Source.cpp
Student name:			Oscar Zavala
Student ID:				0198873
EGR-123-001				Spring 2014
Programing Exercise: Text Exercises Chapter 5
Assigned:				Concurrent
Due:						TBD
Program Description:	Program allows user to select the desired exercise program from text book chapter 5.  Uses a
							switch/case to send a call to the appropriate code for each exercise.
							In order to write a new exercise, programmer must include new list item in void choiceLists()
							and include a new case in the switch/case statement found in int main()
Developed on:			2/24/2014
Modified on:			2/25/2014
							Finished Exercise 5.11 (Compound interest)
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

void choiceLists();
void summingIntegers();
void calculateAverage();
void whatDoesThisDo();
void smallestInteger();
void productOfOdds();
void factorials();
void compoundInterest();
void nestedLoops();
void barCharts();

int main()
{
	
	
	int choice = 0;
	
	cout << "Pick an Exercise: " << endl;
	choiceLists();
	while (cin >> choice)
	{
		switch (choice)
		{
		case 1:
			summingIntegers();
			break;

		case 2:
			calculateAverage();
			break;

		case 3:
			whatDoesThisDo();
			break;

		case 4:
			smallestInteger();
			break;

		case 5:
			productOfOdds();
			break;

		case 6:
			factorials();
			break;

		case 7:
			compoundInterest();
			break;

		case 8:
			nestedLoops();
			break;

		case 9:
			barCharts();
			break;

		default:
			break;
		}
	
		cout << "\nChoose again!" << endl;
		choiceLists();
	}
	
}

void choiceLists()
{
	cout << "1)\t5.5  Summing Integers" << endl;
	cout << "2)\t5.6  Averaging Integers" << endl;
	cout << "3)\t5.7  What does this do?" << endl;
	cout << "4)\t5.8  Find the Smallest Integer" << endl;
	cout << "5)\t5.9  Product of Odd Integers" <<endl;
	cout << "6)\t5.10 Factorials" << endl;
	cout << "7)\t5.11 Compound Interest" << endl;
	cout << "8)\t5.12 Drawing Patterns with Nested `for` Loops" << endl;
	cout << "9)\t5.13 Bar Charts" << endl;
}

void summingIntegers()
{
	int intCounter = 0;
	int addValue = 0;
	int sum = 0;
	int counter = 0;

	cout << "\nPlease specify the number of integers follwed by your input: " << endl;
	for ( cin >> intCounter; intCounter > 0; --intCounter, ++counter)
	{
		cin >> addValue;
		sum += addValue;
	}
	cout << "\nAfter " << counter << " integers, your total is " << sum << endl;
}

void calculateAverage()
{
	int sum = 0;
	double avSum = 0;
	unsigned int average = 0;

	cout << "\nEnter the integers to average (9999 to end list) " << endl;
	for( ; average >=0 ; ++average )
	{
		cin >> sum;
		if(sum == 9999)
			break;
		avSum += sum;
	}

	cout << "\nThe average after " << average << " numbers is " << avSum/average << endl;
}

void whatDoesThisDo()
{
	unsigned int x;
	unsigned int y;

	cout << "Enter two integers in the range 1-20: ";
	cin >> x >> y ;

	for ( unsigned int i = 1 ; i <= y ; ++i )
	{
		for (unsigned int j = 1; j <= x ; ++j )
			cout << '@';
		cout << endl;
	}
}

void smallestInteger()
{
	int valuesRemaining = 0;
	int currentInt = 0;
	int smallestInt = 0;

	cout << "\nPlease specify the number of integers followed by your input: " << endl;
	cin >> valuesRemaining;
	cin >> currentInt;
	smallestInt = currentInt;
	for (valuesRemaining = valuesRemaining - 1 ; valuesRemaining > 0 ; -- valuesRemaining )
	{
		cin >> currentInt;
		smallestInt = (currentInt < smallestInt ? currentInt : smallestInt );
	}
	cout << "\nThe smallest integer found was " << smallestInt << endl;
}

void productOfOdds()
{
	int product = 1;

	cout << "\nThe product of all odd itegers from 1-15 is ";
	for (int counter = 15; counter >=1 ; counter -=2 )
		product = counter * product;
	cout << product << endl;
}

void factorials()
{
	int number = 0;
	int factorialNumber;

	cout << "\nThe factorials of 1-5:" << endl;
	cout << "Number" << setw(15) << "Factorial" <<endl;
	for (int counter = 1 ; counter <=5; ++counter)
	{
		number = counter;
		cout << setw(6) << number;
		cout << setw(15);
		factorialNumber = 1;
		while (number !=0)
		{
			factorialNumber *=number;
			--number;
		}
		cout << factorialNumber << endl;
	}
}

void compoundInterest()
{
	double amount;
	double principal = 1000;
	double rate;
	cout << "Compound interest from 5-10% over 10 year" << endl;
	cout << "Year" << setw(10) << "5%" << setw(10) << "6%" << setw(10) << "7%" << setw(10) << "8%" << setw(10) << "9%" << setw(10) << "10%" << endl;

	cout << fixed << setprecision(2);
	for (unsigned int year = 1; year <= 10; ++year)
	{
		cout << setw(4) << year; 
		for (int interestOutput = 5; interestOutput <=10; ++interestOutput)
		{
			rate = interestOutput*.01;
			amount = principal * pow(1.0 + rate ,year);
			cout << setw(10) << amount;
		}
		cout << endl;
	}
}

void nestedLoops()
{
	cout << endl;

	for (int rows = 1; rows <= 10; ++rows)
	{
		for (int column = 1; column <= rows; ++column)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int rows = 1; rows <= 10; ++rows)
	{
		for (int column = 0; column + rows <= 10; ++column)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	for (int rows = 1; rows <= 10; ++rows)
	{
		for (int space = 1; space < rows; ++space)
		{
			cout << " ";
		}
		for (int column = 0; column + rows <= 10; ++column)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int rows = 1; rows <= 10; ++rows)
	{
		for (int space = 1; space + rows <= 10; ++space)
		{
			cout << " ";
		}
		for (int column = 1; column <= rows; ++column)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void barCharts()
{
	void barLooper(int);
	cout << "\nEnter five numbers between 1 - 30: " << endl;
	int bar1 = 0, bar2 = 0, bar3 = 0, bar4 = 0, bar5 = 0;
	cin >> bar1 >> bar2 >> bar3 >> bar4 >> bar5;

	cout << endl;

	barLooper(bar1);
	barLooper(bar2);
	barLooper(bar3);
	barLooper(bar4);
	barLooper(bar5);
	cout << endl;
}

void barLooper(int bar)
{
	for ( ; bar > 0; --bar)
	{
		cout << "*";
	}
	cout << endl;

}