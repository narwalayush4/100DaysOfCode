// Permutations with duplicates
#include <iostream>
using namespace std;

vector<vector<int>> ans;

void helper(vector<int> a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for (int i = idx; i < a.size(); i++)
    {
        if (i != idx and a[i] == a[idx])
            continue;
        swap(a[i], a[idx]);
        helper(a, idx + 1);
    }
}

void permute(vector<int> a)
{
    sort(a.begin(), a.end());
    helper(a, 0);
    return;
}

int main()
{

    vector<int> a = {1, 2, 2};

    // general method
    permute(a);
    // cout << result << " ";

    // STL Method
    // Nextpermutation function
    // sort(a.begin(), a.end());
    // do
    // {
    //     ans.push_back(a);
    // } while (next_permutation(a.begin(), a.end()));

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}