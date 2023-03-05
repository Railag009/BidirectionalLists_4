// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

struct Dlist
{

	int info;
	Dlist* next, * prev;

};


int main()
{

	Dlist* head, * p, * r;
	int x, k, y;
	int max, sum;
	float sr;
	head = new Dlist;
	cin >> x;
	head->info = x;
	head->next = NULL;
	head->prev = NULL;
	p = head;
	int a;

	a = 0;
	k = 0;
	sum = 0;

	cin >> x;
	while (x)
	{
		r = new Dlist;
		r->info = x;
		r->next = NULL;
		r->prev = p;
		p->next = r;
		p = r;
		cin >> x;

		sum += p->info;
		k++;

	}

	sr = float(sum) / k;
	p = head;
	max = p->info;
	

	while (p != NULL)
	{

		if (p->info < max)
		{
			max = p->info;
		}

		p = p->next;

	}

	y = 0;

	if (max % 5 == 0) y = 1;

	int q = 1;
	p = head;

	if (y == 1)
	{

		while (p->next != NULL)
		{

			if (p->next->info > sr)
			{
				q *= p->info;
			}

			p = p->next;

		}

	}

	cout << endl << q;
	/*
	p = head;
	while (p != NULL)
	{
	cout « p->info « endl;

	p = p->next;
	}
	*/
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы
// 1. В окне обозревателя решений можно добавлять файлы и управлять ими.
// 2. В окне Team Explorer можно подключиться к системе управления версиями.
// 3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
// 4. В окне "Список ошибок" можно просматривать ошибки.
// 5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
// 6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
