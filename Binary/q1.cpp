#include<bits/stdc++.h>
using namespace std;
 bool bn(int arr[],int key,int n)
 {
   sort(arr,arr+n);
   int l=0,h=n-1;
   while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key)
        { 
          return true;
        }
        else if(arr[mid]>arr[l])
        {
            h=mid-1;
        }
          else 
   {
     l=mid+1;
   }
   }
   return false;
 }
int main()
{
    int n;
     cout<<"Enter the the number"<<endl;
     cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
     cout<<"enter the key"<<endl;
     cin>>key;
    bool ans=bn(arr,key,n);
     if(ans==true)
     {
        cout<<"result found";
     }
     else 
     {
        cout<<"not found";
     }
}