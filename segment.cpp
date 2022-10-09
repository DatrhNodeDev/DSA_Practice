#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        vector <int> x;
        int n;
        cin>>n;
        int k;
        cin>>k;
        for(int j=0;j<n;j++)
        {
            int temp;
        cin>>temp;
        x.push_back(temp);
        }

        int ecount=0;

        for(int j=0;j<x.size();j++)
        {
            if(x[j] %2==0)
            {
                ecount++;
            }
        }

        if(ecount>=k)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO";
        }

    }


}
