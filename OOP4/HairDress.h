#pragma once
#include <iostream>
#include <string>
#include "Catalog.h"
#include "Work_Schedule.h"
using namespace std;
//4. Множинне наслідування
class HairDress : public Catalog, public Work_Schedule
{
private:
	string surname;
	string name;
	string pobatk;
	const int year_vstup_work;
	int year;
public:
	HairDress(string surname, string name, string pobatk, const int year_vstup_work, int year, string hairstyles,  string products)
		: Catalog(hairstyles,  products), Work_Schedule(),surname(surname), name(name), pobatk(pobatk),year_vstup_work(year_vstup_work), year(year)
	{
		cout << "Конструктор похідного класу HaiDress при множинному наслідування" << endl;
	}
	void show_client(void);
	friend int Experince(HairDress& hairdress);
	//6. Доступ до члену базового класу з похідного класу засобами глобального доступу та оператора using
	using Catalog::gethairst;

	~HairDress()
	{
		cout << "Деструктор похідного класу HaiDress при множинному наслідування" << endl;
	}
};


