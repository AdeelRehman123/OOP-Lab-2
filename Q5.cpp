#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
	int id;
	string name;
};


bool compareByID(const Person& a, const Person& b) {
	return a.id < b.id;
}


bool compareByName(const Person& a, const Person& b) {
	return a.name[0] < b.name[0];
}

int main() {
	int N;
	cout << "Enter the number of structures: ";
	cin >> N;

	vector<Person> people(N);

	
	for (int i = 0; i < N; ++i) {
		cout << "Enter id and name for person " << i + 1 << ": ";
		cin >> people[i].id >> people[i].name;
	}


	sort(people.begin(), people.end(), compareByID);
	cout << "\nSorted by ID:\n";
	for (const auto& person : people) {
		cout << "ID: " << person.id << ", Name: " << person.name << endl;
	}

	
	sort(people.begin(), people.end(), compareByName);
	cout << "\nSorted by the first character of Name:\n";
	for (const auto& person : people) {
		cout << "ID: " << person.id << ", Name: " << person.name << endl;
	}

	return 0;
}
