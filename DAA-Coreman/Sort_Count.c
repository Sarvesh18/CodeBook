#include<stdio.h>
void countingsort(int A[], int n, int k)
{
    int i, j, C[18], B[18];
    for (i=0; i<=k; i++)
        C[i]=0;
    for (j=0; j<n; j++)
        C[A[j]]=C[A[j]]+1;
    for (i=1; i<=k; i++)
        C[i]=C[i]+C[i-1];
    for (j=n-1;j>=0;j--)
    {
        B[C[A[j]]-1]=A[j];
        C[A[j]]=C[A[j]]-1;
    }
    printf("\nSorted array is \n");
    for (i=0; i<n; i++)
        printf("%d ", B[i]);
}
void main()
{
    int i,n,arr[18],k;
    scanf("%d",&n);
    k=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>k)
            k=arr[i];
    }
    printf("Given array is \n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);

  countingsort(arr,n,k);
}
