#include<stdio.h>
void merge(int arr[], int p, int q, int r)
{
    int i, j, k, L[18], R[18], n1, n2;
    n1 = q - p + 1;
    n2 =  r - q;
    for (i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[q + 1+ j];
    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int p, int r)
{
    int q ;
    if (p < r)
    {
        q = (p+r)/2;
        mergesort(arr, p, q);
        mergesort(arr, q+1, r);
        merge(arr, p, q, r);
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

    mergesort(arr, 0, n - 1);

    printf("\nSorted array is \n");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
}
