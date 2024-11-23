#pragma once
#include "Worker.h"
#include <string>
using namespace std;
//1. Створення похідного класу 
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
		cout << "Конструктор класу Manager" << endl;
	}

	~Manager()
	{
		cout << "Деструктор класу Manager" << endl;
	}
	void accessMembers()
	{
		//2. Демонстрація як працює моифікатор protected в нащадка
		year_vstup_work = 2020; 
		show_Worker();          
	}
};

