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
		cout << "����������� �������� ����� Work_Schedule ��� ���������� �����������" << endl;
	}
	void show_work_schedule()
	{
		cout << "������ ������ � �������� �� �'������: " << endl;
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
				return "��� ������";
			}
			
		}
		return "�������";
	}
	~Work_Schedule()
	{
		cout << "���������� �������� ����� Work_Schedule ��� ���������� �����������" << endl;
	}
};

