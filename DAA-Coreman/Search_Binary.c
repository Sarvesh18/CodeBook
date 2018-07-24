#include<stdio.h>
int arr[18];
int binary_search(int f, int l, int s)
{
    int mid;
    mid=(f+l)/2;
    if(arr[mid]==s)
    {
        printf("Element Found");
    }
    else if(arr[mid]<s)
    {
        f=mid+1;
        return(binary_search(f,l,s));
    }
    else if(arr[mid]>s)
    {
        l=mid-1;
        return(binary_search(f, l,s));
    }
}
void main()
{
    int n, s, i, f, l;
    printf("Enter Size");
    scanf("%d",&n);
    printf("Enter Search");
    scanf("%d",&s);
    printf("Enter Sorted Array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    f=0;
    l=n-1;
    binary_search(f,l,s);
}

