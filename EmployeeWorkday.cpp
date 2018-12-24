#include “stdafx.h”
#inlcude<iostream>
#inlcude<string>

using namespace std;

int main()
{

int x;
char choice;
string name;

string M[10];
string T[10];
string W[10];
string R[10];
string F[10];

string days[5] = {“M”,”T”,”W”,”R”,”F”};

cout<<“Enter 0 for M”<<endl;
cout<<”Enter 1 for T”<<endl;
cout<<”Enter 2 for W”<<endl;
cout<<”Enter 3 for R”<<endl;
cout<<”Enter 4 for F”<<endl;

do
{
cout <<” Enter the day:”<<endl;
cin>>x;

cout<<” Your day is:”<<endl;
cout<<days[x]<<endl;
cout<<”Name of the employee worked on”<<days[x]<<endl;
cin>>name;

cout<<name<<”worked on”<<days[x]<<endl;
}

system(“pause”);
return 0;
}


