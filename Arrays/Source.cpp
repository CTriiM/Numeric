#include<iostream>
using namespace std;

//#define MIN_MAX_VAR1
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123;
	//cout << arr[2] << endl;

	//���� ��������� ������� � ����������
	cout << "������� �������� �������(" << n << " ��.):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	//����� ������� �� ����� � �������� �������

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// ����� ��������� �������
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	cout << s << endl;
	cout << "�������-�������������� ��������� �������: " << (double)s / n << endl;

	//����� ������������ � ������������� ��������
#ifdef MIN_MAX_VAR1
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{

		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];

	}
	cout << "����������� � ������������" << min << ", " << max << endl;
}
#endif // DEBUG
