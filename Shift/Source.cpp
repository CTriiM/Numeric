#include<iostream>
//#include<Windows.h>
using namespace std;

#define tab "\t"
//#define	LEFT_SHIFT
#define	RIGHT_SHIFT
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	//вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	// сдвиг массива:
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
#ifdef LEFT_SHIFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{

			arr[i - 1] = arr[i];
		}

		arr[n - 1] = buffer;
	}
#endif // LEFT_SHIFT


#ifdef RIGHT_SHIFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = 1;  i<n; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = buffer;
	}
#endif // RIGHT_SHIFT

	
	//Sleep(1000);
	//system("CLS");

	//Вывод сдвинутого массива
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}