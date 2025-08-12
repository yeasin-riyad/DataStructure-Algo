#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;

    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

class cmp
{
public:
    bool operator()(Student *s1, Student *s2)
    {
        return s1->mark == s2->mark ? s1->roll > s2->roll : s1->mark < s2->mark;
    }
};
int main()
{
    int n, roll, mark, q, cmd;
    string name;
    priority_queue<Student *, vector<Student *>, cmp> pq;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> roll >> mark;
        pq.push(new Student(name, roll, mark));
    };
    cin >> q;

    while (q--)
    {
        cin >> cmd;
        if (cmd == 0)
        {
            cin >> name >> roll >> mark;
            pq.push(new Student(name, roll, mark));
            cout << pq.top()->name << " " << pq.top()->roll << " " << pq.top()->mark << endl;
        }
        else if (cmd == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                cout << pq.top()->name << " " << pq.top()->roll << " " << pq.top()->mark << endl;
            }
        }
        else if (cmd == 2)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();

                if (pq.empty())
                    cout << "Empty" << endl;
                else
                {
                    cout << pq.top()->name << " " << pq.top()->roll << " " << pq.top()->mark << endl;
                }
            }
        }
    }

    return 0;
}