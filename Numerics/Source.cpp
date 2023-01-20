#include<iostream>
using namespace std;

#define tab "\t"
//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{

	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичое число: "; cin >> decimal;
#ifdef DEC_2_BIN
	const int n = 32; //максимально возможная разрядность числа типа инт
	bool bin[n] = {}; //bin - binary, этот массив будет хранить биты

	cout << bin << endl;
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
	}

	for (; decimal; decimal /= 2)bin[i++] = decimal % 2;
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 4 == 0)cout << " ";
		if (i % 8 == 0)cout << " ";
	}
	cout << endl;
#endif // DEC_2_BIN

	const int n = 8;
	int hex[n] = {};
	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16;
	}
	for (--i; i >= 0; i--)
	{
		switch (hex[i])
		{
		/* case 10:cout << 'A'; break;
		case 11:cout << 'B'; break;
		case 12:cout << 'C'; break;
		case 13:cout << 'D'; break;
		case 14:cout << 'E'; break;
		case 15:cout << 'F'; break;
		default:cout << hex[i];*/

		/*if (hex[i] < 10)cout << hex[i];
			else cout << char(hex[i] + 55);*/

			cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		}
	}
	cout << endl;

}