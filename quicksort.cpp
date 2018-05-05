int part(vector<int> A, int p, int r)
{
    int index = A[r], j = 0, i = 0, cop;
    for (j=0; j < r; j++)
    {
        if (A[j] <= index)
        {
            cop = A[i];
            A[i] = A[j];
            A[j] = cop;
            i ++;
        }
    }
    cop = A[r];
    A[r] = A[i];
    A[i] = cop;
    return i++;
}

void quicksort(vector<int> A, int p, int r)
{
    int q;
    if (p < r)
    {
        q = part(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}
