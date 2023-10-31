#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include "Call_list.h"

using namespace std;

int main()
{
	

	fstream file("List.txt", ios::in | ios::out | ios::trunc);

	int ch;
	
	do
	{
		
		cout << "1 - Read\n2 - Write\n0 - Exit\n> ";
		cin >> ch;
		cin.ignore();

		Call_list list;

		string Firm;
		string Owner;
		string Adress;
		string Work;
		double Phone;

		

		switch (ch)
		{
		case 0:
			break;
		case 1:
			file.seekg(0, ios::beg);
			
			do
			{
				char character = '\0';
				file.get(character);
				cout << character;
				Sleep(1);
			}while (file);
			
			break;
		case 2:
			cout << "Firm: ";
			getline(cin, Firm);

			cout << "Owner: ";
			getline(cin, Owner);

			cout << "Adress: ";
			getline(cin, Adress);

			cout << "Work: ";
			getline(cin, Work);

			cout << "Phone: ";
			cin >> Phone;

			list.Set(Firm, Owner, Adress, Work, Phone);

			file << (list.Get_firm()) << endl;
			file << (list.Get_owner()) << endl; 
			file << (list.Get_adress()) << endl;
			file << (list.Get_work()) << endl;
			file << (list.Get_phone()) << endl;

			break;
		default:
			cout << "ERROR\n";
			break;
		}

	} while (ch != 0);
}