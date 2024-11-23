// OOP4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "Client.h"
#include "Catalog.h"
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#ifdef _WIN32
#include <windows.h>  
#include "HairDress.h"
#include "Manager.h"
#include "Addytional_service.h"


#endif
using namespace std;




//4. Функція поза межами класу, яка в якості параметрів використовує об'єкт класу
int Experince(HairDress& hairdress)
{
	return hairdress.year - hairdress.year_vstup_work;
}
//5. Функція, яка повертає об'єкт класу
Client CreateClient(string sur, string nam, string pob, string dat, bool gen, string nom, int ag, string& city) {
	Client newClient(dat, gen, nom, ag, city);
	newClient.setsur(sur);
	newClient.setname(nam);
	newClient.setpobat(pob);
	return newClient;
}





int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif
	string city = "Kyiv";
	//6. Масив об'єктів
	Client clients[2]{ Client("2024-10-22", false, "", 29,  city), Client("2024-10-23", false, "", 29, city) };
	clients[0].setsur("Petrova");
	clients[0].setname("Alina");
	clients[0].setpobat("Ivanivna");


	clients[1].setsur("Petrova");
	clients[1].setname("Alina");
	clients[1].setpobat("Ivanivna");

	cout << "Виведення через масив" << endl;
	for (int i = 0; i < 2; i++) {
		clients[i].show_client();
		cout << "-------------------" << endl;
	}


	Client client("2024-10-22", false, "", 15, city);
	client.GetId();
	client.setsur("Ivanov");
	client.setname("Ivan");
	client.setpobat("Ivanovich");


	Client client5("2024-10-22", false, "", 29, city);
	client5.GetId();
	client5.setsur("Petrova");
	client5.setname("Alina");
	client5.setpobat("Ivanivna");

	Client client6("2024-10-22", false, "", 29, city);
	client6.GetId();
	client6.setsur("Petrova");
	client6.setname("Alina");
	client6.setpobat("Ivanivna");

	Client client7("2024-10-22", false, "", 29, city);
	client7.GetId();
	client7.setsur("Petrova");
	client7.setname("Alina");
	client7.setpobat("Ivanivna");

	Client client8("2024-10-22", false, "", 29, city);
	client8.GetId();
	client8.setsur("Ivanov");
	client8.setname("Ivan");
	client8.setpobat("Ivanovich");


	//6. Покажчик на екземпляр класу та розміщення об'єктів у динамічній пам'яті
	Client* client2 = new Client("2024-10-22", false, "", 29, city);
	client2->GetId();
	client2->setsur("Ivanov");
	client2->setname("Ivan");
	client2->setpobat("Ivanovich");

	Client* client3 = new Client("2024-10-22", false, "", 29, city);
	client3->GetId();
	client3->setsur("Ivanov");
	client3->setname("Ivan");
	client3->setpobat("Ivanovich");

	Client* client4 = new Client("2024-10-22", false, "", 29, city);
	client4->GetId();
	client4->setsur("Ivanov");
	client4->setname("Ivan");
	client4->setpobat("Ivanovich");

	Client* client9 = new Client("2024-10-22", false, "", 29, city);
	client9->GetId();
	client9->setsur("Ivanov");
	client9->setname("Ivan");
	client9->setpobat("Ivanovich");

	Client* client10 = new Client("2024-10-22", false, "", 29, city);
	client10->GetId();
	client10->setsur("Ivanov");
	client10->setname("Ivan");
	client10->setpobat("Ivanovich");



	cout << "Виведення одного екземпляра класу" << endl;
	client.show_client();


	cout << "\nПеревірка статі клієнта:" << endl;
	client.audit(false);

	cout << "\nПеревірка віку клієнта для знижки:" << endl;
	client.audit(29);




	client2->write(client2->getsur(), client2->getname(), client2->getpobat(), "2024-10-22", false, "", 29);
	client2->read();
	client2->Sort_Random(22);
	cout << "Загальна кількість клієнтів " << Client::Getcount() << endl;

	delete client2;
	delete client3;
	delete client4;
	delete client9;
	delete client10;
	Client original("2024-10-25", false, "123456789", 29, city);

	original.setsur("Petrova");
	original.setname("Alina");
	original.setpobat("Ivanivna");
	Client copy(original);
	cout << "Копія" << endl;
	copy.show_client();
	int year_vstup_w1 = 2012;
	int year_vstup_w2 = 2019;
	/*HairDress hairdress1("Petrov", "Petro", "Petrovich", year_vstup_w1, 2024);
	cout << "______________________" << endl;
	cout << "Перукар " << endl;
	hairdress1.show_client();
	cout << "Досвід роботи: " << Experince(hairdress1) << endl;
	HairDress hairdress2("Sidorov", "Petro", "Petrovich", year_vstup_w2, 2024);
	
	hairdress2.show_client();
	cout << "Досвід роботи: " << Experince(hairdress2) << endl;
	cout << "Виклик функції яка повертає об'єкти класу Client" << endl;
	Client cl = CreateClient("Ivanov", "Ivan", "Ivanovich", "2024-10-22", true, "", 30, city);
	cl.show_client();
	cout << "Наслідування" << endl;
	HairService h("Звичайна чоловіча стрижка", 20, "", 20, "", hairdress2);
	h.show_service();
	*/
	cout << "_______________________________" << endl;
	/*Service service("Коротока чоловіча стрижка", 200, "", 1);
	service.show_service();
	Order order("Коротока чоловіча стрижка", 300, "", 1, client, "12.11.2024");
	order.show_order();
	cout << "Остаточна вартість " << order.calculete_zn(client.getage()) << endl;*/
	cout << "Створення об'єкту каталог" << endl;
	//2. Створення об'єкту базового класу
	Catalog cat("Класична зачіскв", "Фарба для волосся");
	cat.show_catalog();
	cout << "Створення об'єкту графік" << endl;
	Work_Schedule schedule;
	schedule.show_work_schedule();
	cout<<schedule.check_time("18:00")<<endl;
	cout << "Створення об'єкту нащадка двох базових класів. Клас перукар" << endl;
	//4. Конструктор об'єкта похідного класу де в якості праметрів є констрктор базових класів
	HairDress hairdress("Sidorov", "Petro", "Petrovich", year_vstup_w2, 2024, "Класична зачіскв", "Фарба для волосся");
	hairdress.show_client();
	cout << "Тип стрижки. Викликано об'єктом hairdress"<< hairdress.gethairst() << endl;
	
	//3. Створення об'єкту нащадка базового класу
	Addytional_service a("Фарбування", "Класична зачіска", "Фарба для волосся");
	
	//2. Створення об'єкта базового класу
	Worker wor("Sidorov", "Petro", "Petrovich", 2024);
	wor.show_Worker();
	//2. Створення об'єкту нащадка
	Manager man("Sidorov", "Petro", "Petrovich", 2024, "petrov@gmail.com", "", "чоловік", "Хмельницький");
	//2. Виклик об'єктом нащадка метод базового класу
	man.show_Worker();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
