#include<iostream>
using namespace std;

#define tab "\t"
#define SORTING
void main()
{

	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;

	}*/


	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	} while (maxRand <= minRand);

		
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//����� ��������� �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
#ifdef SORTING
	//���������� �������:

//int c, t, buffer;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[i] > arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}

	//����� �������������� �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SORTING

}