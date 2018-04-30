#include <stdio.h>
#include <stdlib.h>

void merge(int* A, int p, int q, int r);

int main()
{
    int A[4] = {4,2,5,3};
    merge(A,0,1,1);
    merge(A,2,3,1);
    merge(A,0,2,2);
    return 0;
}

void merge(int* A, int p, int q, int r)
{
    int L1[r], L2[r];
    int i=0, j=0, k=p;
    for (i=0; i< r; i++)
    {
        L1[i] = A[p+i];
        L2[i] = A[q+i];
    }
    i =0;
    while (k < q + r)
    {
        if ((L1[i] < L2 [j]) && i!= -1)
        {
            A[k] = L1[i];
            if (i < r -1) i++;
            else i = -1;
        }
        else if ((L1[i] > L2 [j]) && j!= -1)
        {
            A[k] = L2[j];
            if (j < r -1) j++;
            else j = -1;
        }
        else if (j == -1)
        {
            A[k] = L1[i];
            if (i < r-1) i++;
        }
        else if (i == -1)
        {
            A[k] = L2[j];
            if (j < r-1) j++;
        }
        k++;
    }
}
