#include<iostream>
using namespace std;

#define tab "\t"
void main()
{

	setlocale(LC_ALL, "");
	int decimal,celoe,result;
	cout << "������� ��������� �����: "; cin >> decimal;
	const int n = 32; //����������� ��������� ����������� ����� ���� ���
	bool bin[n] = {}; //bin - binary, ���� ������ ����� ������� ����
	for (int i = 0; i < n; i++)
	{
		 int DL = decimal / 2;
		 for (int i = 0; i <=DL; i++) {
			 result = decimal % 2;
		 }
		 //result = decimal % 2;
	}
	cout << "���������: "<<celoe<<tab << result << endl;
}