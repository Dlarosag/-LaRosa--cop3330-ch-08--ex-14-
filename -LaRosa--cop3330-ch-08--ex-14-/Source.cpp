/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 first_name last_name
 */

using namespace std;

#include <iostream>
#include <stdlib.h>
#include <time.h>

const int daysOfWeek = 7;

const string day1 = "Monday";
const string day2 = "Tuesday";
const string day3 = "Wednesday";
const string day4 = "Thursday";
const string day5 = "Friday";
const string day6 = "Saturday";
const string day7 = "Sunday";


int getRandomDay(const int days) {

	int day;

	srand(time(NULL));
	day = rand() % daysOfWeek + 1;

	return day;
}

void printRandomDay(int num) {

	cout << "Your lucky day this week is ";

	if (num == 1)
		cout << day1;

	if (num == 2)
		cout << day2;

	if (num == 3)
		cout << day3;

	if (num == 4)
		cout << day4;

	if (num == 5)
		cout << day5;

	if (num == 6)
		cout << day6;

	if (num == 7)
		cout << day7;
}


int main() {
	/*We can declare a non-reference function argument when we don't want to modify the arguments by accident
	*/

	/*This program will print out your lucky day of the week*/

	int randomDay = getRandomDay(daysOfWeek);

	printRandomDay(randomDay);

	cout << "\n";

}