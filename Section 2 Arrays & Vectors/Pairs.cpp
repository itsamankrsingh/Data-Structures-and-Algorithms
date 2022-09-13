#include <bits/stdc++.h>
using namespace std;
void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
vector<int> pairSum(vector<int> arr, int Sum)
{
    inputOutput();
    unordered_set<int> s;
    vector<int>::iterator it;
    vector<int> res;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        int rem = Sum - *it;
        if (s.find(rem) != s.end())
        {
            res.push_back(rem);
            res.push_back(*it);
            return res;
        }

        // insert the current no in set
        s.insert(*it);
    }
    return {};
}

int main()
{
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int S = 4;
    auto p = pairSum(arr, S);
    if (p.size() == 0)
    {
        cout << "No Such Pair";
    }
    else
    {
        cout << p[0] << " , " << p[1] << endl;
    }
    return 0;
}