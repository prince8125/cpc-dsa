#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int low,int high,int x);
bool isMajority(int arr[],int n,int x)
{
    int i=binary_search(arr,0,n-1,x);
    if(i==-1)
    return false;
    if((i+n/2 <=(n-1))&&
    arr[i+n/2]==x)
    return true;
    else
    false;
}
int binary_search(int arr[],int low,int high,int x)
{
    if(high>=low)
    {
        int mid=(low+high)/2;

        if ((mid == 0 || x > arr[mid - 1]) && 
            (arr[mid] == x) )
            return mid;
             
        else if (x > arr[mid])
            return binary_search(arr, (mid + 1),
                                 high, x);
        else
            return binary_search(arr, low,  
                                (mid - 1), x);
    }
   return -1;
}
int main()
{
    int n;
    cout<<"enter the size of arr";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cout<<"enter the check majority element";
    cin>>x;
     if (isMajority(arr, n, x))
        cout << x << " appears more than "<< n / 2 << " times in arr[]"<< endl;
    else
        cout << x << " does not appear more than"<< n / 2 << "  times in arr[]" << endl;
    return 0;
}