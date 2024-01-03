#include<bits/stdc++.h>
using namespace std;
int binary (int arr[],int low,int high,int key)
{
    if(high<low)
    {
    return -1;
    }
int mid= low+(high-low)/2;
if (arr[mid]==key)
{
    return mid;
}
if(arr[mid]<key)
{
    return binary(arr,mid+1,high,key);
}
return binary(arr,low,mid-1,key);
}
int findpivot(int arr[],int low,int high)
{
    if(high<low)
    {
        return -1;
    }
    if(high==low)
    {
    return low;
   }
   int mid=low+(high-low)/2;
   if(mid<high && arr[mid]>arr[mid+1])
   return mid;

   if(mid>low && arr[mid]<arr[mid-1])
   return mid-1;
   
   return findpivot(arr,mid+1,high);

int main(){
    int n;
    cin>>n;
    cout<<"Enter the size of array";
    int arr[n];
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
}
int key;
cout <<"enter the elements to be found";
cin>>key;
int ans=pivotbinarysearch(arr,n,key)
cout<<"elements found at"<<ans<<"index"<<endl;
return 0;

}