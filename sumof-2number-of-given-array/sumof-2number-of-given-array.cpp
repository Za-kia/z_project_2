// sumof-2number-of-given-array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "vector"
using namespace std;

int Find(float arr[], int number, int size)
{
	int j = 0;
	for (int i = 0; i < size; ++i) {

		if (number <= arr[i] || number == arr[i]){
			j = i;
			break;
		}
	}
	return j;
}

/*********************************************/

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0, n = 0, number = 0, index_f = 0, second_number = 0, index_s = 0;
	float *arr= NULL;
	int first_index = 0;

	cout << "Enter total number of elements: ";
	cin >> n;
	cout << endl << endl;

	arr = new float[n];

	cout << "<<<Enter numbers in ascending order>>>" << endl<<endl;
	// array numbers entered by the user
	for (i = 0; i < n; ++i) {
		cout << "Enter Number " << i + 1 << " : ";
		cin >> arr[i];
	}

	cout << "Enter number that you want to find its sum in array: ";
	cin >> number;
	cout << endl;

   index_f = Find(arr, number, n);
   for (i = 0; i < index_f; i++)
	   cout << "array[" << i << "]=" << " " << arr[i] << endl;

   for (i = index_f; i > 0; i--)
   {
	   first_index = i - 1;
	   second_number = number - arr[first_index];

	   if (index_s == 0 && second_number != arr[0])
	   index_s = Find(arr, second_number, n - first_index);

	   if (arr[index_s] == second_number)
		   break;
   }

   if (first_index == 0 && index_s == 0)
	   cout << "numbers are not exist!"<<endl;
   else
   {
	   cout << "first number is: " << "array[" << first_index << "] =" << arr[first_index] << endl;
	   cout << "second number is: " << "array[" << index_s << "] =" << second_number << endl;
   }

   delete [] arr;
	system("pause");
	return 0;
}

