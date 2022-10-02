#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    
    int seq=1;
    int c=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        else if((arr[i+1]!=arr[i]+1))
        {
            seq=1;
            c=max(c,seq);
            continue;
        }
        
        if(arr[i+1]==arr[i]+1)
        {
            seq++;
        }
        
        c=max(c,seq);
        
    }

    cout<<c;
}
