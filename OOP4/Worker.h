#pragma once

#pragma once
#include <iostream>
#include <string>
using namespace std;
// 2. ��������� �������� ����� �� ���������� ����� ����� ��� ������������ �������
class Worker
{
private:
	string surname;
	string name;
	string pobatk;

protected:
	int year_vstup_work;

public:
	void show_Worker()
	{
		cout << surname << endl;
		cout << name << endl;
		cout << pobatk << endl;
		cout << year_vstup_work << endl;
	}

	Worker(string surname, string name, string pobatk, int year_vstup_work)
		: surname(surname), name(name), pobatk(pobatk), year_vstup_work(year_vstup_work)
	{
		cout << "����������� �������� ����� Worker" << endl;
	}

	virtual ~Worker()
	{
		cout << "���������� �������� ����� Worker" << endl;
	}
};