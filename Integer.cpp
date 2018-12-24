// ConsoleApplication28.cpp : Defines the entry point for the console application.
//


#include <iostream> 
#include "stdafx.h"
using namespace std;



void main()
{
	char choice;
	
		int n = 0;

		cout << "Enter one positive integer ";
		cin >> n;

		for (n; n >= 0; n--)
			cout << n << ", ";
		
		cout << "Do you want to start again with new integer? "
			<< "Enter a 'Y' for Yes or 'N' for No." << endl;
		cin >> choice;
		
		if (choice == 'Y' || choice == 'y')
		{
				int n = 0;

				cout << "Enter one positive integer ";
				cin >> n;

				for (n; n >= 0; n--)
					cout << n << ", ";
			}

		else
		{
			cout << "Have a good day." << endl;
		}


			system("pause");
			return;
		}
 