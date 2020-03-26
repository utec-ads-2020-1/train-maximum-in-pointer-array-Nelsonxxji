int max(int *iptr[], int n)
{
    int maxNumber = *iptr[0];
    for (int i = 1; i < n; i++)
    {
        if (*iptr[i] > maxNumber)
        {
            maxNumber = *iptr[i];
        }
        else
        {
        }
    }
    return maxNumber;
}