#include "Client.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
int Client::count = 0;

void Client::show_client(void)
{
	cout << GetId() << endl;
	cout << surname << endl;
	cout << name << endl;
	cout << pobatk << endl;
	cout << date_zamov << endl;
	cout << city << endl;
}
void Client::audit(bool a)
{
	if (a == 1)
	{
		cout << "Вибирайте серед наявних чоловічу стрижку" << endl;
	}
	else
	{
		cout << "Вибирайте серед наявних жіночу стрижку" << endl;
	}
}

void Client::audit(int age)
{
	if (age < 18)
	{
		cout << "Вартість стрижки на 20% дешевша" << endl;

	}
	else
	{
		cout << "Вартість стрижки без знижок " << endl;
	}
}

void Client::write(string sur, string nam, string pob, string dat, bool gen, string nom, int ag)
{
	ofstream student_file("INFO.DAT", ios::app);
	student_file << sur << endl;
	student_file << nam << endl;
	student_file << pob << endl;
	student_file << dat << endl;
	student_file << gen << endl;
	student_file << nom << endl;
	student_file << ag << endl;
	student_file << city << endl;

}

void Client::read()
{
	ifstream student_file("INFO.DAT");
	if (!student_file.is_open())
	{
		cout << "Не вдалося відкрити файл INFO.DAT" << endl;
		return;
	}

	string file_city;

	student_file.ignore();
	//student_file >> id;
	getline(student_file, surname);
	getline(student_file, name);
	getline(student_file, pobatk);
	getline(student_file, date_zamov);
	student_file >> gender;
	getline(student_file, nomer_phone);
	student_file >> age;
	getline(student_file, file_city);

	cout << "Читання з файлу" << endl;
	cout << surname << endl;
	cout << name << endl;
	cout << pobatk << endl;
	cout << date_zamov << endl;
	cout << file_city << endl;
}

void Client::Sort_Random(int count)
{
	srand(static_cast<unsigned int>(time(nullptr))); // Ініціалізація генератора випадкових чисел
	int* ages = new int[count]; // Виділення динамічної пам'яті для масиву

	for (int i = 0; i < count; ++i)
	{
		ages[i] = rand() % 100; // Генерація віку від 0 до 99
	}

	// Сортування масиву
	sort(ages, ages + count);

	// Виведення відсортованих значень
	cout << "Відсортовані значення віку:" << endl;
	for (int i = 0; i < count; ++i)
	{
		cout << ages[i] << " ";
	}
	cout << endl;

	// Звільнення виділеної пам'яті
	delete[] ages;
}
