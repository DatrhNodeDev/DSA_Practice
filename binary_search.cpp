//Binary Search Iterative Method

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int n, int arr[], int x){
   int low=0, high=n-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid] == x){
        return mid;
    }
    else if(arr[mid] > x){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
   }
   return -1;

}

int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
  
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    int x;
    cout<<"Enter the element"<<endl;
    cin>>x;

    cout<<binarySearch(n,arr,x)<<endl;
    
    return 0;

}
