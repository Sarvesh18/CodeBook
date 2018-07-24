#include<stdio.h>
void shellsort(int arr[], int n)
{
    int gap, i, j, temp;
    for (gap=n/2; gap>0; gap/=2)
    {
        for (i=gap; i<n; i+=1)
        {
            temp = arr[i];
            for (j=i; j>=gap && arr[j-gap]>temp; j-=gap)
                arr[j]=arr[j-gap];
            arr[j]=temp;
        }
    }
}
void main()
{
    int i,n,arr[18];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Given array is \n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);

    shellsort(arr, n);

    printf("\nSorted array is \n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
}
