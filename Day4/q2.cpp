// Permutations without duplicates
#include <iostream>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> a, int idx)
{

    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        swap(a[i], a[idx]);
    }
}

int main()
{

    vector<int> a = {1, 2, 3};

    // general method
    // permute(a, 0);

    // STL Method
    // Nextpermutation function
    sort(a.begin(), a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}