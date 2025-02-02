#include <iostream>
using namespace std;

void resizeArray(int *&arr, int &size, int newSize)
{
	int *newArray = new int[newSize];
	for (int i = 0; i < size; ++i)
	{
		newArray[i] = arr[i];
	}
	delete[] arr;
	arr = newArray;
	size = newSize;
}

int main()
{
	int initialSize = 5;
	int maxSize = initialSize;
	int elementCount = 0;
	int *array = new int[initialSize];

	int input;
	cout << "Enter elements (enter -1 to stop): ";
	while (true)
	{
		cin >> input;
		if (input == -1)
			break;

		if (elementCount == maxSize)
		{
			resizeArray(array, maxSize, maxSize * 2);
		}

		array[elementCount++] = input;
	}

	resizeArray(array, maxSize, elementCount);

	cout << "Final array: ";
	for (int i = 0; i < elementCount; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;

	delete[] array;

	return 0;
}
