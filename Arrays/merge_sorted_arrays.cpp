#include<iostream>
using namespace std;
void mergesorted(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6};
    int arr3[8]={0};
    mergesorted(arr1,5,arr2,3,arr3);
    print(arr3,8);
    return 0;
}
