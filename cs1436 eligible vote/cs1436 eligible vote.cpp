// cs1436 eligible vote.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int citizen;
int age;
void eligibility() 
{
	if (age == 1 && citizen == 1) {
		cout << "You are eligible to vote" << endl;
	}
	else if (age== 0|| citizen == 0)
	{
		cout << "Not eligible to vote" << endl;
	}
}

int main()
{
	cout << "Are you 18 or older? yes = 1, No = 0" << endl;
	cin >> age;
	cout << "If you are a citizen? yes = 1, No = 0" << endl;
	cin >> citizen;
	eligibility();


	return 0;
}


