#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    int top()
    {
        return v.back();
    }
    void pop()
    {
        v.pop_back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    };
};
int main()
{
    myStack st1;
    myStack st2;
    int n, m, val;
    cout << "Input The Size Of stack1 and stack2" << endl;
    cin >> n >> m;
    cout << "Input the value of stack 1" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        st1.push(val);
    }
    cout << "Input the value of stack 2" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        st2.push(val);
    }

    string same = "Yes";
    if (st1.size() != st2.size())
    {
        same = "NO";
    }
    else
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                same = "NO";
                break;
            }
            st1.pop();
            st2.pop();
        }
    }
    cout<<same<<endl;

    return 0;
}