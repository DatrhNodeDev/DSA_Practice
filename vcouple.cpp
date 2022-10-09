#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    int n;
    cin>>n;
    vector<int> b;
    vector<int> g;


    for(int i =0;i<n;i++)
    {
        int tempb;
        cin>>tempb;
        
        b.push_back(tempb);
      

    }
    for(int i =0;i<n;i++)
    {
        int tempg;
        cin>>tempg;

        g.push_back(tempg);

    }
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
     
 
    vector<int> res;

    for(int i=0;i<n;i++)
    {
        res.push_back(b[i]+g[n-i-1]);
    }
    cout << *max_element(res.begin(), res.end());
    
    return 0;
    }
}
