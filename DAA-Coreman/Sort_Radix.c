#include<stdio.h>
void radixsort(int arr[], int n, int k)
{
    int exp;
    for (exp = 1; k/exp > 0; exp *= 10)
        countsort(arr, n, exp);
}
void countsort(int A[], int n, int exp)
{
    int i, j, C[1000], B[1000];
    for (i=0; i<=10; i++)
        C[i]=0;
    for (j=0; j<n; j++)
        C[ (A[j]/exp)%10 ]=C[ (A[j]/exp)%10 ]+1;
    for (i=1; i<10; i++)
        C[i]=C[i]+C[i-1];
    for (j=n-1;j>=0;j--)
    {
        B[C[ (A[j]/exp)%10 ]-1]=A[j];
        C[ (A[j]/exp)%10 ]=C[ (A[j]/exp)%10 ]-1;
    }
    for (i=0; i<n; i++)
        A[i]=B[i];
}
void main()
{
    int i,n,arr[1000],k;
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

    radixsort(arr, n, k);

    printf("\nSorted array is \n");
    for (i=0; i<n; i++)
        printf("%d ", arr[i]);
}
