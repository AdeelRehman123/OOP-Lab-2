#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size of array:";
	cin >> size;
	int *arr = new int[size];
	cout << "enter array Elements:";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	int *ptr = arr;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(ptr + i);
	}
	cout << "Sum:" << sum << endl;
}