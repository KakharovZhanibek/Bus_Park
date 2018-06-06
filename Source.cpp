#include "BusP.h"
#include "Library.h"
#include "CmpbyNo.h"
#include "CmpbyRouteNo.h"

int main()
{
	setlocale(LC_ALL, "rus");
	set<Bus_Park, CmpbyNo>s;
	set<Bus_Park, CmpbyRouteNo>s1;
	Bus_Park b;
	ifstream in_file("Text.txt");
	if (!in_file)
	{
		cerr << "File open error!" << endl;
	}
	else
	{
		while (!in_file.eof())
		{
			in_file >> b;
			s.emplace(b);
			s1.emplace(b);
		}
	}

	while (true)
	{
		cout << "1: Вывод информации о всех автобусах сортированных по номеру\n2: Вывод информации о всех автобусах сортированных по номеру маршрута\n3: Поиск по номеру\n4: Записать информацию об автобусах  в упорядоченном виде в файл\n5: Выход\n" << endl;
		int x;
		cin >> x;
		if (x == 1)
		{
			system("cls");
			for (set<Bus_Park>::iterator it = s.begin(); it != s.end(); it++)
			{
				cout << *it << endl;
			}
			system("pause");
			system("cls");
		}
		else if (x == 2)
		{
			system("cls");
			for (set<Bus_Park>::iterator it = s1.begin(); it != s1.end(); it++)
			{
				cout << *it << endl;
			}
			system("pause");
			system("cls");
		}
		else if (x == 3)
		{
			system("cls");
			int x;
			cout << "Введите номер автобуса" << endl;
			cin >> x;
			for (set<Bus_Park>::iterator it = s.begin(); it != s.end(); it++)
			{
				if (it->getNo() == x)
				{
					cout << *it << endl;
				}
			}
			system("pause");
			system("cls");
		}
		/*else if (x == 4) //
		{
			system("cls");
			string tmp;
			cout << "Введите имя водителя" << endl;
			cin >> tmp;
			for (set<Bus_Park>::iterator it = s.begin(); it != s.end(); it++)
			{
				if (it->getName() == tmp)
				{
					cout << *it << endl;
				}
			}
			system("pause");
			system("cls");
		}*/
		if (x == 4)
		{
			system("cls");
			ofstream if_file("Buses.txt");
			for (set<Bus_Park>::iterator it = s.begin(); it != s.end(); it++)
			{
				if_file << b;
			}
			system("pause");
			system("cls");
		}
		if (x == 5)
		{
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}