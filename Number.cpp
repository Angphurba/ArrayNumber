// Number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

int main()
{ 
	cout << "Enter any number: " << endl;
	int num;
	cin >> num;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
	
		
		for (int i = 3; i >= 1; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << j ;
			}
			cout << "\n";
		}
	system("pause");
	return 0;
}
