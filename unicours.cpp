#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;   

    for(int i=0;i<t;i++)
    {
        vector<int> x;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int temp;
            cin>>temp;
            x.push_back(temp);
        }
        sort(x.begin(),x.end());
        cout<<n-*max_element(x.begin(),x.end())<<endl;
    }
}
