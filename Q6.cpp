#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Subject
{
	string subjectName;
};

struct Student
{
	int id;
	vector<Subject> subjects;
};

int main()
{
	int N, subjectCount;
	cout << "Enter the number of students: ";
	cin >> N;

	vector<Student> students(N);

	for (int i = 0; i < N; ++i)
	{
		cout << "Enter ID for student " << i + 1 << ": ";
		cin >> students[i].id;

		cout << "Enter the number of subjects for student " << i + 1 << ": ";
		cin >> subjectCount;
		students[i].subjects.resize(subjectCount);

		for (int j = 0; j < subjectCount; ++j)
		{
			cout << "Enter subject " << j + 1 << " for student " << i + 1 << ": ";
			cin >> students[i].subjects[j].subjectName;
		}
	}

	cout << "\nStudent Data:\n";
	for (const auto &student : students)
	{
		cout << "ID: " << student.id << ", Subjects: ";
		for (const auto &subject : student.subjects)
		{
			cout << subject.subjectName << " ";
		}
		cout << endl;
	}

	return 0;
}
