#include<bits/stdc++.h>
using namespace std;

int ceilSearch(int arr[],int low,int high,int x)
{
    int i;
   if(x<=arr[low])
   {
    return low;
   }
    for(i = low; i < high; i++) 
    { 
        if(arr[i] == x) 
        return i; 
     
        /* if x lies between arr[i] and arr[i+1] including 
        arr[i+1], then return arr[i+1] */
        if(arr[i] < x && arr[i+1] >= x) 
        return i+1; 
    }     
       return -1;
}

int main()
{
    int n;
    cout<<"enter the size of arr:";
    cin>>n;
    int arr[n];
    cout<<"enter the arr number:";
     for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cout<<"enter the value for X:";
    cin>>x;
      int index = ceilSearch(arr, 0, n-1, x); 
    if(index == -1) 
        cout << "Ceiling of " << x << " doesn't exist in array "; 
    else
        cout << "ceiling of " << x << " is " << arr[index]; 
     
    return 0; 

}