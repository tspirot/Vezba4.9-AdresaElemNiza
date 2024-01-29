#include<stdio.h>
int* pmax(int niz[], int n)
{
    int* max, * p;
    max = niz;
    for (p = niz + 1; p < niz + n; p++)
        if (*p > *max)
            max = p;
    return max;
}
// adresa prvog trazenog elementa u nizu
int* prvi(int niz[], int n, int x)
{
    int* px, *p;
    px = NULL;
    for (p = niz; p < niz + n; p++)
        if (*p == x)
            px = p;
    return px;
}


int main()
{
    int *max;
    int a = 7, b = 3, c = 9;
    max = pmax(&a, &b, &c);
    printf("Najveci od brojeva je %d", *max);

}