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
	//7. Порядок виклику конструктора
	Catalog(string hairstyles, string products): hairstyles(hairstyles), products(products)
	{
		cout << "Конструктор базового класу Catalog при множинному наслідування" << endl;
	}
	void show_catalog()
	{
		cout << hairstyles<<endl;
		//cout << addytional_service << endl;
		cout << products << endl;
	}
	//7. Порядок виклику деструктора

	~Catalog()
	{
		cout << "Деструктор базового класу Catalog при множинному наслідування" << endl;
	}
};		

