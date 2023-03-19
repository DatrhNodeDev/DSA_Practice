#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {

            int x;
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    //Brute Force O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Optimized

    for(int i=0;<i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(m[i][j],m[j][i]);
        }

    }

    for(int i=0;i<n;i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

}
