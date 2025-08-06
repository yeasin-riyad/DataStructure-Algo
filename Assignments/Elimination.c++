#include <bits/stdc++.h>
using namespace std;
int main()
{
    int que;

    cin >> que;
    while (que--)
    {
        stack<char> stk;
        string s;
        cin >> s;
        for (char ch : s)
        {
            if (!stk.empty())
            {
                if (ch == '1' && stk.top() == '0')
                {
                    stk.pop();
                }
                else
                {
                    stk.push(ch);
                }
            }
            else
            {
                stk.push(ch);
            }
        }
        if (stk.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}