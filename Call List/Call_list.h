#include <iostream>
#pragma once

using namespace std;

class Call_list
{
protected:
	string Firm;
	string Owner;
	string Adress;
	string Work;
	double Phone;
public:
	Call_list() = default;

	void Set(string firm, string owner, string adress, string work, double phone);

	string Get_firm();
	string Get_owner();
	string Get_adress();
	string Get_work();
	int Get_phone();
};

