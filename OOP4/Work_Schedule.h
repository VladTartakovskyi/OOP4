#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Work_Schedule
{
protected:
	vector<string> time;
public:
	Work_Schedule()
	{
		time = {"09:00", "10:00", "11:00", "12:00", "13:00", "14:00"};
		cout << "Конструктор базового класу Work_Schedule при множинному наслідування" << endl;
	}
	void show_work_schedule()
	{
		cout << "Графік роботи з понеділка по п'ятницю: " << endl;
		for (const auto& t : time)
		{
			cout << " " << t << "\n";
		}
	}
	string check_time(string tim)
	{
		for (const auto& t : time)
		{
			if (t == tim)
			{
				return "Час вільний";
			}
			
		}
		return "Зайнято";
	}
	~Work_Schedule()
	{
		cout << "Деструктор базового класу Work_Schedule при множинному наслідування" << endl;
	}
};

