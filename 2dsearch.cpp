#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;cin>>m;
    int n;
    cin>>n;
    int key;cin>>key;

    vector< vector <int>> arr;

    for(int i=0;i<m;i++)
    {
        vector <int> x;
        for(int j=0;j<n;j++)
        {
            
            int temp;
            cin>>temp;
            x.push_back(temp);
        }
        arr.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        if(key>=arr[i][0] && key<=arr[i][n])
        {
            if(binary_search(arr[i].begin(), arr[i].end(), key))
            {
                cout<<"true";
            }q

            else{
                cout<<arr[i][0];
                cout<<"false";
            }
        }
    }

   

}
