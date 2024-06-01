#include<bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    int class_;
    int seat;
    string descript;
    bool operator <(student a_student)
    {
	return class_ < a_student.class_ || seat < a_student.seat;
    }
};

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int n;

    cin >> n;

    student students[n];

    for (int i = 0; i < n; i++)
    {
	cin >> students[i].name;
	cin >> students[i].class_;
	cin >> students[i].seat;
	cin >> students[i].descript;
    }

    sort(students, students+n);

    for (int i = 0; i < n; i++)
    {
	cout << students[i].class_ << " " << students[i].seat << " " << students[i].name << "\n";
	cout << students[i].descript << "\n";
    }
}
