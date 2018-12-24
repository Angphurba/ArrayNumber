// ConsoleApplication69.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


using namespace std;

int main()
{
	int choice, q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0, q7 = 0, q8 = 0, q9 = 0, q10 = 0, q11 = 0, q12 = 0, q13 = 0, q14 = 0, q15 = 0, q16 = 0;

	double  Xtreme = 7.99, Regular = .99, Large = 1.49, Water = .99, Soda = 1.09, Candy = .99, Sunflower = 1.29, Peanuts = 1.49, Beef = .99, Bag = 3.99, Fountain = 1.39, Hot = 4.99, Cookies = .50, Small = 5.99, Pizza = 9.99, Gas = 2.15;

	double total, tax, last, amt, num, cramt, dec;


	system("Color 4F");
	cout << " ****************************************************************************** " << endl;
	cout << "                   WELCOME TO SLURPIE'S CONVENIENCE STORE                     " << endl;
	cout << " ****************************************************************************** " << endl << endl;
	system("pause");
	system("CLS");


	while (1)
	{
		system("Color 2F");
		cout << " ****************************************************************************** " << endl;
		cout << "                 Slurpies Convenience Store : Inventory List                    " << endl;
		cout << " ******************************************************************************  " << endl;
		cout << " >> PLEASE SELECT YOUR ITEM << " << endl;
		cout << " Enter 1 for xtreme slurpies : $" << Xtreme << endl;
		cout << " Enter 2 for regular chips : $" << Regular << endl;
		cout << " Enter 3 for large chips : $" << Large << endl;
		cout << " Enter 4 for water : $" << Water << endl;
		cout << " Enter 5 for Soda : $" << Soda << endl;
		cout << " Enter 6 for candy : $" << Candy << endl;
		cout << " Enter 7 for sunflower seeds : $" << Sunflower << endl;
		cout << " Enter 8 for peanuts/almonds/cashews/mixed nuts : $" << Peanuts << endl;
		cout << " Enter 9 for small beef jerky : $" << Beef << endl;
		cout << " Enter 10 for bag of beef jerky : $" << Bag << endl;
		cout << " Enter 11 for fountain drinks : $" << Fountain << endl;
		cout << " Enter 12 for hot counter items : $" << Hot << endl;
		cout << " Enter 13 for cookies : $" << Cookies << endl;
		cout << " Enter 14 for small pizza : $" << Small << endl;
		cout << " Enter 15 for large pizza : $" << Pizza << endl;
		cout << " Enter 16 for gas : $" << Gas << " per gallon" << endl;
		cout << " >> Enter 0 for checkout << " << endl << endl;
		cout << " ENTER ITEM NUMBER : " << endl;
		cin >> choice;
		


		switch (choice)
		{
		case 1:
			cout << " Please enter quantity : " << endl;
			cin >> q1;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 2:
			cout << " Please enter quantity : " << endl;
			cin >> q2;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl; 
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 3:
			cout << " Please enter quantity : " << endl;
			cin >> q3;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 4:
			cout << " Please enter quantity : " << endl;
			cin >> q4;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 5:
			cout << " Please enter quantity : " << endl;
			cin >> q5;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 6:
			cout << " Please enter quantity : " << endl;
			cin >> q6;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 7:
			cout << " Please enter quantity : " << endl;
			cin >> q7;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 8:
			cout << " Please enter quantity : " << endl;
			cin >> q8;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl; 
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 9:
			cout << " Please enter quantity : " << endl;
			cin >> q9;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 10:
			cout << " Please enter quantity : " << endl;
			cin >> q10;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 11:
			cout << " Please enter quantity : " << endl;
			cin >> q11;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 12:
			cout << " Please enter quantity : " << endl;
			cin >> q12;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 13:
			cout << " Please enter quantity : " << endl;
			cin >> q13;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 14:
			cout << " Please enter quantity : " << endl;
			cin >> q14;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 15:
			cout << " Please enter quantity : " << endl;
			cin >> q15;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 16:
			cout << " Please enter number of gallon : " << endl;
			cin >> q16;
			cout << " YOUR PRODUCT HAS BEEN ADDED " << endl << endl;
			system("pause");
			system("CLS");
			system("Color 2F");
			break;
		case 0:
			total = (q1*Xtreme) + (q2*Regular) + (q3*Large) + (q4*Water) + (q5*Soda) + (q6*Candy) + (q7*Sunflower) + (q8*Peanuts) + (q9*Small) + (q10*Bag) + (q11*Fountain) + (q12*Hot) + (q13*Cookies) + (q14*Small) + (q15*Pizza) + (q16*Gas);
			tax = total*0.092;
			last = total + tax;
			system("CLS");
			system("Color 1F");
			cout << " ****************************************************************************** " << endl;
			cout << "                                   CHECKOUT                                     " << endl;
			cout << " ****************************************************************************** " << endl << endl;
			
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(2);

			cout << " Total amount = $" << total << endl << endl;
			cout << " Tax amount = $" << tax << endl << endl;
			cout << " Final amount = $ " << last << endl << endl;
			cout << " No electronic payment is accepted currently." << endl << endl;

			cout << " Would you like pay it with 1. Cash or 2. Cheque " << endl;
			cin >> dec;

			if (dec == 1)
			{
				cout << " Enter bill amount : $" << endl;
				cin >> amt;
				cout << endl;
				if (amt > last)
				{
					cout << " Return change : $" << amt - last << endl << endl;
				}
				else
				{
					cout << " Remaining amount to be paid : $" << last - amt << endl << endl; 
				}
				cout << " Thank you for shopping in SLURPIE'S CONVENIENCE STORE. " << endl << endl;
				cout << " We hope to see you again. " << endl << endl;
				system("pause");
				exit(0);
			}
			else
			{
				cout << " Enter cheque number : " << endl;
				cin >> num;
				cout << endl;
				cout << " Enter amount : $" << endl;
				cin >> cramt;
				cout << endl;
				if (cramt > last)
				{
					cout << " Return change : $" << cramt - last << endl << endl;
				}
				else
				{
					cout << " Remaining amount to be paid : $" << last - cramt << endl << endl;
				}

				cout << endl << endl;
				cout << " Thank you for shopping in SLURPIE'S CONVENIENCE STORE. " << endl << endl;
				cout << " We hope to see you again. " << endl << endl;

				system("pause");
				exit(0);
			
			}

		}
	}


	system("pause");
	return 0;
}

