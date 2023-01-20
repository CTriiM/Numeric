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
		cout << "¬ведите минимальное случайное число: "; cin >> minRand;
		cout << "¬ведите максимальное случайное число: "; cin >> maxRand;
	} while (maxRand <= minRand);

		
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//вывод исходного массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
#ifdef SORTING
	//—ортировка массива:

//int c, t, buffer;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[i] > arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}

	//вывод сортированного массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SORTING

}