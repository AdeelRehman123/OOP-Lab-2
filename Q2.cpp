#include <iostream>
using namespace std;

// Function to add a value to each element of the array
void* addToArray(void* arr, int size, int value) {
	int* intArr = static_cast<int*>(arr);
	for (int i = 0; i < size; ++i) {
		intArr[i] += value;
	}
	return arr;
}

int main() {
	int size = 5;
	int value = 5;
	int* arr = new int[size]{1, 2, 3, 4, 5};

	cout << "Original array: ";
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	void* result = addToArray(arr, size, value);

	cout << "Array after adding " << value << ": ";
	int* intResult = static_cast<int*>(result);
	for (int i = 0; i < size; ++i) {
		cout << intResult[i] << " ";
	}
	cout << endl;

	delete[] arr;
	return 0;
}
