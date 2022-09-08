#include <bits/stdc++.h>
using namespace std;

void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
vector<int> twoSum(vector<int> &nums, int target)
{
    // sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = nums[i] + nums[j];
            if (temp == target)
            {
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }
    }
    return res;
}
int main()
{
    inputOutput();
    vector<int> nums = {3, 2, 4};
    vector<int> res = twoSum(nums, 6);
    vector<int>::iterator it;
    for (it = res.begin(); it != res.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}