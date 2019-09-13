// SppDB 0.1a
// Crated by Hyeonggyu-lim
// At 13/09/19 20:24:25

#include <iostream>
#include <windows.h>
#include <string.h>
#include <queue>
#include <stack>
#define cls() system("cls")

using namespace std;

queue<int> qu;
stack<int> st;
int dbtyp = 0;

void dbtype();

int main()
{
	dbtype(); cls();
	while (1)
	{
		fflush(stdin);
		SetConsoleTitle("SppDB 0.1a - Idle");
		cout<<">> ";
		char command[50];
		cin>>command;
		if (dbtyp==1)
		{
			if (strcmp(command, "dbtype") == 0)
			{
				SetConsoleTitle("SppDB 0.1a - Selecting new DBtype");
				//SelDbNew
				int a; cin >> a;
				switch(a)
				{
					case 1:
						dbtyp=1;
						cout<<"DBType is now Queue"<<'\n';
						break;
					case 2:
						dbtyp=2;
						cout<<"DBType is now Stack"<<'\n';
						break;
					default:
						cout<<"Unknown selection."<<'\n';
						break;
				}
			}
			else
			if (strcmp(command, "ins") == 0)
			{
				SetConsoleTitle("SppDB 0.1a - Inserting new data");
				int a; cin >> a;
				qu.push(a);
				cout<<"Insert complete." << '\n';
				Sleep(2000);
			}
			else cout<<"Unknown command."<<'\n';
		}
		else if (dbtyp==2)
		{
			if (strcmp(command, "dbtype") == 0)
			{
				SetConsoleTitle("SppDB 0.1a - Selecting new DBtype");
				//SelDbNew
				int a; cin >> a;
				switch(a)
				{
					case 1:
						dbtyp=1;
						cout<<"DBType is now Queue"<<'\n';
						break;
					case 2:
						dbtyp=2;
						cout<<"DBType is now Stack"<<'\n';
						break;
					default:
						cout<<"Unknown selection."<<'\n';
						break;
				}
			}
			else
			if (strcmp(command, "ins") == 0)
			{
				SetConsoleTitle("SppDB 0.1a - Inserting new data");
				int a; cin >> a;
				st.push(a);
				cout<<"Insert complete." << '\n';
				Sleep(2000);
			}
			else cout<<"Unknown command."<<'\n';
		}
	}
}

void dbtype()
{
	SetConsoleTitle("SppDB 0.1a - DBtype Selection");
	SelDB:
	//SelectDbType
	cout<<"Please select db type"<<'\n';
	cout<<"  1. Queue"<<'\n'<<"  2. Stack"<<'\n'<<">> ";
	//SwitchDbType
	int selt; cin>>selt;
	switch(selt)
	{
		case 1:
			dbtyp=1;
			cout<<"DBtype is Queue.";
			Sleep(1000);
			break;
		case 2:
			dbtyp=2;
			cout<<"DBtype is Stack.";
			Sleep(1000);
			break;
		default:
			cout<<"Unknown type.";
			Sleep(1000);
			cls();
			goto SelDB;
			break;
	}
}
