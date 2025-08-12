#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, val, q, cmd;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        pq.push(val);
    }

    cin >> q;
    while (q--)
    {
        cin >> cmd;

        if (cmd == 0)
        {
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if (cmd == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
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
                    cout << pq.top() << endl;
            }
        }
    }

    return 0;
}