#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int t;
    cin>>t;

    for(int i =0;i<t;i++)
    {
        int count =0;
        int temp;
        cin>>temp;

        for(int k=1;k<temp+1;k=k+2)

        {
            count=pow(((temp-k)+1),2)+count;
        }
        cout<<count<<endl;

    }
}
