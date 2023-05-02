// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Merge Sort

#include <iostream>
using namespace std;
/*
time complexity O(nlog(n))
*/
void merge(int *a, int s, int e)
{
    int mid = (s + e) / 2;

    // considering lengths of boths seperated arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // making new arrays dynamically
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = a[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = a[mainArrayIndex++];
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            a[mainArrayIndex++] = first[index1++];
        }
        if (first[index1] > second[index2])
        {
            a[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        a[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        a[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *a, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // left part sort
    mergeSort(a, s, mid);
    // right part sort
    mergeSort(a, mid + 1, e);

    merge(a, s, e);
}

int main()
{
    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    cout << "The sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}