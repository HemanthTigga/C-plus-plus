#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
            return mid;
        if(key>arr[mid])
            start=mid+1;
        if(key<arr[mid])
            end=mid-1;

        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int a[6]={2,4,6,8,12,18};
    int index=binarysearch(a,6,8);
    cout<<index<<endl;
}
