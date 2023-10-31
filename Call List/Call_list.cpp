#include "Call_list.h"
#include <iostream>

using namespace std;

void Call_list::Set(string firm, string owner, string adress, string work, double phone)
{
	Firm = firm;
	Owner = owner;
	Adress = adress;
	Work = work;
	Phone = phone;
}

string Call_list::Get_firm()
{
	return Firm;
}

string Call_list::Get_owner()
{
	return Owner;
}

string Call_list::Get_adress()
{
	return Adress;
}

string Call_list::Get_work()
{
	return Work;
}

int Call_list::Get_phone()
{
	return Phone;
}
