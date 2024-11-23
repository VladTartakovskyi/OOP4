#pragma once
#include <iostream>
#include <string>
#include "Catalog.h"
using namespace std;
//3. Демонстрація закритого способу наслідування
class Addytional_service : private Catalog
{
	string name;
public:
	Addytional_service(string name, string hairstyles, string products) : Catalog( hairstyles, products), name(name)
	{

	}
};

