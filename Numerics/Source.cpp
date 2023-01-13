#include<iostream>
using namespace std;

#define tab "\t"
void main()
{

	setlocale(LC_ALL, "");
	int decimal,celoe,result;
	cout << "Введите десятичое число: "; cin >> decimal;
	const int n = 32; //максимально возможная разрядность числа типа инт
	bool bin[n] = {}; //bin - binary, этот массив будет хранить биты
	for (int i = 0; i < n; i++)
	{
		 int DL = decimal / 2;
		 for (int i = 0; i <=DL; i++) {
			 result = decimal % 2;
		 }
		 //result = decimal % 2;
	}
	cout << "Результат: "<<celoe<<tab << result << endl;
}