#pragma once
#include "Worker.h"
#include <string>
using namespace std;
//1. ��������� ��������� ����� 
class Manager : public Worker
{
private:
	string email;
	string phone;
	string gender;
	string city;

public:
	Manager(string surname, string name, string pobatk, int year_vstup_work, string email, string phone, string gender, string city)
		: Worker(surname, name, pobatk, year_vstup_work), email(email), phone(phone), gender(gender), city(city)
	{
		cout << "����������� ����� Manager" << endl;
	}

	~Manager()
	{
		cout << "���������� ����� Manager" << endl;
	}
	void accessMembers()
	{
		//2. ������������ �� ������ ���������� protected � �������
		year_vstup_work = 2020; 
		show_Worker();          
	}
};

