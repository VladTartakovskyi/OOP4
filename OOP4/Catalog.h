#pragma once
#include <iostream>
#include <string>
using namespace std;
class Catalog
{
protected:
	string hairstyles;
	//string addytional_service;
public:
	string products;

public:
	void sethairst(string hairstyles)
	{
		this->hairstyles = hairstyles;
	}
	string gethairst()
	{
		return hairstyles;
	}
	//7. ������� ������� ������������
	Catalog(string hairstyles, string products): hairstyles(hairstyles), products(products)
	{
		cout << "����������� �������� ����� Catalog ��� ���������� �����������" << endl;
	}
	void show_catalog()
	{
		cout << hairstyles<<endl;
		//cout << addytional_service << endl;
		cout << products << endl;
	}
	//7. ������� ������� �����������

	~Catalog()
	{
		cout << "���������� �������� ����� Catalog ��� ���������� �����������" << endl;
	}
};		

