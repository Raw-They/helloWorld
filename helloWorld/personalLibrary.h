#pragma once 
/*
Radhe Patel


*/
// #include "personalLibrary.h"



#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <random>
#include <windows.h>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <vector>

using namespace std;


/**********
END PROGRAM
**********/
int end()
{
	cin.get();
	cin.ignore(100, '\n');
	return '0';
}

/*****************
 RANDOM NUMBER GEN
*****************/

int random(int min, int max)
{
	int x = 0;

	random_device engine; // Random number engine
	std::random_device rand_dev; // Distribution object
	std::mt19937 generator(rand_dev());
	std::uniform_int_distribution<int> random(min, max);

	x = random(generator);
	return x;
}

/*****************************************************************
VALIDATE DATA WITH NO RANGE AND STRING PROMPT (INT, FLOAT, DOUBLE)
*****************************************************************/

int validateInt() {
	int num = 0;
	while ((!(cin >> num)) || cin.fail()) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number: ";
	}
	return num;
}

float validateFloat() {
	float num = 0;
	while ((!(cin >> num)) || cin.fail()) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number: ";
	}
	return num;
}

double validateDouble() {
	double num = 0;
	while ((!(cin >> num)) || cin.fail()) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number: ";
	}
	return num;
}

/***********************************************
VALIDATE DATA WITH NO RANGE (INT, FLOAT, DOUBLE)
***********************************************/

int validateInt(string prompt) {
	int num = 0;
	cout << endl << prompt;
	while ((!(cin >> num)) || cin.fail()) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number: ";
	}
	return num;
}

float validateFloat(string prompt) {
	float num = 0;
	cout << endl << prompt;
	while ((!(cin >> num)) || cin.fail()) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number: ";
	}
	return num;
}

double validateDouble(string prompt) {
	double num = 0;
	cout << endl << prompt;
	while ((!(cin >> num)) || cin.fail()) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number: ";
	}
	return num;
}

/********************************************
VALIDATE DATA WITH RANGE (INT, FLOAT, DOUBLE)
********************************************/

int validateInt(string prompt,int max,int min) {
	int num = 0;
	cout << endl << prompt;
	while ((!(cin >> num)) || cin.fail() || num < min || num > max) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number between " << min << " and " << max << ": ";
	}
	return num;
}

float validateFloat(string prompt, float max,float min) {
	float num = 0;
	cout << endl << prompt;
	while ((!(cin >> num)) || cin.fail() || num < min || num > max) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number between " << min << " and " << max << ": ";
	}
	return num;
}

double validateDouble(string prompt, double max, double min) {
	double num = 0;
	cout << endl << prompt;
	while ((!(cin >> num)) || cin.fail() || num < min || num > max) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number between " << min << " and " << max << ": ";
	}
	return num;
}

/*************
VALIDATE RANGE
*************/

int validateRangeInt(int max, int min) {
	int num = 0;
	while ((!(cin >> num)) || cin.fail() || num < min || num > max) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number between " << min << " and " << max << ": ";
	}
	return num;
}

float validateRangeFloat(float max, float min) {
	float num = 0;
	while ((!(cin >> num)) || cin.fail() || num < min || num > max) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number between " << min << " and " << max << ": ";
	}
	return num;
}

double validateRangeDouble(double max, double min) {
	double num = 0;
	while ((!(cin >> num)) || cin.fail() || num < min || num > max) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter a number between " << min << " and " << max << ": ";
	}
	return num;
}

/*************
RUN AGAIN LOOP
*************/

bool runAgain() {
	bool again;
	cout << endl << endl << "Would you like to run again?(y = 1, y = 0):  ";
	while ((!(cin >> again)) || cin.fail() || again != 1 && again != 0) {
		cout << "Error - try again\n";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "Enter 1 or 0:  ";
	}
	return (again);
}

/************
ARRAY TOTALER
************/
int totalVector(vector<int> set)
{
	int total = 0;
	printf("\n\n");
	for (int i = 0; i < set.size(); i++) {
		total += set[i];
	}
	return total;
}

int totalArray(const int set[], int size)
{
	int total = 0;
	printf("\n\n");
	for (int i = 0; i < size; i++) {
		total += set[i];
	}
	return total;
}

float totalVector(vector<float> set)
{
	float total = 0;
	printf("\n\n");
	for (int i = 0; i < set.size(); i++) {
		total += set[i];
	}
	return total;
}

float totalArray(const float set[], int size)
{
	float total = 0;
	printf("\n\n");
	for (int i = 0; i < size; i++) {
		total += set[i];
	}
	return total;
}

/********************
ARRAY AND VECTORS AVG
********************/

float getIntAvg(vector<int> set)
{
	int total = 0, i;
	float dailyAvg = 0;
	for (i = 0; i < set.size(); i++) {
		total += set[i];
	}
	dailyAvg = (float)total / (float)(i);

	return dailyAvg;
}

float getIntAvg(const int set[], int size)
{
	int total = 0, i;
	float dailyAvg = 0;
	for (i = 0; i < size; i++) {
		total += set[i];
	}
	dailyAvg = (float)total / (float)(i);

	return dailyAvg;
}

float getFloatAvg(vector<float> set)
{
	int i;
	float total = 0, dailyAvg = 0;
	for (i = 0; i < set.size(); i++) {
		total += set[i];
	}
	dailyAvg = (float)total / (float)(i);

	return dailyAvg;
}

float getFloatAvg(const float set[], int size)
{
	float total = 0;
	float dailyAvg = 0;
	int i;
	for (i = 0; i < size; i++) {
		total += set[i];
	}
	dailyAvg = total / (i);
	
	return dailyAvg;
}

/*********************************
LARGEST AND MIN IN ARRAY / VECTORS
*********************************/

int getMaxInt(const int set[], int size)
{
	int largest = 0;
	printf("\n\n");
	for (int i = 0; i < size; i++) {
		if (largest < set[i]) {
			largest = set[i];
		}
	}
	return largest;
}

int getMinInt(const int set[], int size)
{
	int largest = 0;
	printf("\n\n");
	for (int i = 0; i < size; i++) {
		if (largest > set[i]) {
			largest = set[i];
		}
	}
	return largest;
}

float getMaxFloat(const float set[], int size)
{
	float largest = 0;
	printf("\n\n");
	for (int i = 0; i < size; i++) {
			if (largest < set[i]) {
				largest = set[i];
			}
	}
	return largest;
}

float getMinFloat(const float set[], int size)
{
	float largest = 0;
	printf("\n\n");
	for (int i = 0; i < size; i++) {
		if (largest > set[i]) {
			largest = set[i];
		}
	}
	return largest;
}



/********************
PRIME NUMBERS CHECKER
********************/

bool valPrime(int num) {
	
	if (num == 1 || num == 0)
		return false;

	for (int i = 1; i < num / 2; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

/********
FACTORS!!
********/

vector<int> getFactor(int num)
{
	vector<int> factor;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			factor.push_back(i);
		}
	}
	return factor;
}

/**************
PERFECT NUMBERS
**************/


bool perfectNum(int num)
{
	if (num != 0)
	{
		vector<int> factor;
		factor = getFactor(num);
		factor.pop_back();
		if (!(valPrime(num)))
		{
			if (totalVector(factor) == num)
			{
				return 1;
			}
		}
	}
	return 0;
}

int linearSearch(const int arr[], int size, int value) 
{ 
    int index = 0;      // Used as a subscript to search array 
    int position = -1;  // To record position of search value 
    bool found = false; // Flag to indicate if the value was found 
 
    while (index < size && !found) 
    { 
        if (arr[index] == value) // If the value is found 
        { 
            found = true;        // Set the flag 
            position = index;    // Record the value's subscript 
        } 
        index++;                 // Go to the next element 
    } 
    return position;             // Return the position, or −1 
} 


int binarySearch(int arr[], int size, int target) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		// Check if the middle element is the target
		if (arr[mid] == target) {
			return mid;
		}
		// If the target is smaller, search the left half
		else if (arr[mid] > target) {
			right = mid - 1;
		}
		// If the target is larger, search the right half
		else {
			left = mid + 1;
		}
	}

	// If the target element is not found, return -1
	return -1;
}


//****************************************************** 
// The swap function swaps doubles a and b in memory.  * 
//****************************************************** 
void swap(double &a, double &b) 
{ 
   double temp = a; 
   a = b; 
   b = temp; 
} 
     
//****************************************************** 
// The swap function swaps ints a and b in memory.     * 
//****************************************************** 

void swap(int &a, int &b) 
{ 
   int temp = a; 
   a = b; 
   b = temp; 
} 