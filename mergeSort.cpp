#include <iostream>
#include <array>

using namespace std;

void merge(int* A, int p, int q, int r);
void mergeSort(int* A, int p, int q, int r);

int main()
{
    int A[7] = {1,3,4,7,2,5,6};
    mergeSort(A,0,A.size()/2,A.size()/2);
    std::cout << A << endl;
    return 0;
}


void merge(int* A, int p, int q, int r)
{
    int L1[];
    int L2[];
    int maxi = q+r, n=0, m=0;
    while (p<maxi)
    {
        if (L1[n] > L2[m])
        {
            A[p] = L2[m];
            m++;
        }
        else
        {
            A[p] = L1[n];
            n++;
        }
        p++;
    }
}


void mergeSort(int* A, int p, int q, int r)
{
    mergeSort(A,0,A.size()/2,A.size()/2);
    mergeSort(A,A.size()/2,A.size()/2,A.size()/2);
    merge(A,0,A.size()/2,A.size()/2);
}
