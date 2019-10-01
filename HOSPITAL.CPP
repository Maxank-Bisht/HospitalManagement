#include<iostream>
#include<conio>
#include<stdio.h>
#include<string.h>
using namespace std; 
void menu();
void screen()
{
	clrscr();
	cout<<"\n\n\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t@@ ____________________________________________ @@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                 WELCOME TO                 |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|          HOSPITAL MANAGEMENT SYSTEM        |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|                                            |@@\n";
	cout<<"\t\t@@|____________________________________________|@@\n";
	cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\t";
	cout<<"\n PRESS ANY KEY TO CONTINUE.....";
	getch();

}
void password()
{
	a:
	clrscr();
	char pass[20];
	int a=0;
	cout<<"\n\n\n\t\t\tHOSPITAL MANAGEMENT SYSYTEM";
	cout<<"\n\t\t\t--------------------------";
	cout<<"\n\t\t\t          LOGIN";
	cout<<"\n\t\t\t--------------------------";
	cout<<"\n\n\t\t ENTER PASSWORD:-";
	gets(pass);
	if(strcmp(pass,"mike")==0)
	{	cout<<"\n\tAccess granted.....";
		a=1;
	}
	else
	{	cout<<"\n\tAccess aborted.....";
		cout<<"\n\tPlease try again ";
		getch();
		goto a;
	}
	cout<<"\n\n\n\n\tPress any key to continue....";
	getch();
	if(a==1)
		menu();

}
void menu()
{
	clrscr();
	int ch;
	cout<<"\nHOSPITAL MANAGEMENT SYSTEM";
	cout<<"\nPlease choose from the folowing options:";
	cout<<"\n|----------------------------------------|";
	cout<<"\n|                                        |";
	cout<<"\n|	1 >>Add New Patient Record       |";
	cout<<"\n|       2 >>Add New Staff Record         |";
	cout<<"\n|	3 >>Exit  		         |";
	cout<<"\n|                                        |";
	cout<<"\n|----------------------------------------|";
	cout<<"\n\nEnter your choice:";
	cin>>ch;
	if(ch==1)
		cout<<"Patient record";
	else if(ch==2)
		cout<<"DOCTOR";
	else if(ch==3)
		cout<<"Thanks you";


	getch();
}
void main()
{
	screen();
	password();

}
