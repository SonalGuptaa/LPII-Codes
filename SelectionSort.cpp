#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int pos=0;pos<=n-2;pos++)
    {
        //current position
        int curr=arr[pos];
        int min=pos;
        for(int j=pos;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                //update min pos as j
                min=j;
            }
        }
        //swap curr with min element present inthe remaining array
        swap(arr[min],arr[pos]);
    }
}
int main()
{
    int arr[]={3,2,1,5,4};
    int n=sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }


}