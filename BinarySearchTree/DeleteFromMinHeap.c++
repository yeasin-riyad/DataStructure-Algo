#include <bits/stdc++.h>
using namespace std;
void insertInMinHeap(vector<int> &v, int val)
{
    v.push_back(val);
    int child_idx = v.size() - 1;
    int parent_idx;
    while (child_idx != 0)
    {
        parent_idx = (child_idx - 1) / 2;
        if (v[parent_idx] > v[child_idx])
        {
            swap(v[parent_idx], v[child_idx]);
            child_idx = parent_idx;
        }
        else
            break;
    }
}

void deleteFromMinHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int parent_idx = 0;
    while (true)
    {
        int left_child_idx = (parent_idx * 2) + 1;
        int right_child_idx = (parent_idx * 2) + 2;

        int left_val = INT_MAX;
        int right_val = INT_MAX;
        if (left_child_idx < v.size())
            left_val = v[left_child_idx];
        if (right_child_idx < v.size())
            right_val = v[right_child_idx];
        if (left_val <= right_val && left_val < v[parent_idx])
        {
            swap(v[left_child_idx], v[parent_idx]);
            parent_idx = left_child_idx;
        }
        else if (right_val < left_val && right_val < v[parent_idx])
        {
            swap(v[right_child_idx], v[parent_idx]);
            parent_idx = right_child_idx;
        }
        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
}
int main()
{

    int n, val;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insertInMinHeap(v, val);
    }
    print_heap(v);
    cout<<endl;
    deleteFromMinHeap(v);
    print_heap(v);
    cout<<endl;
      deleteFromMinHeap(v);
     print_heap(v);
    cout<<endl;
    return 0;
}