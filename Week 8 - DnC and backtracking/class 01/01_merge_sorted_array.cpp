#include <iostream>
using namespace std;
#include <vector>
// program to merge two sorted arrays
// time complexity - o(n) 
// space complexity - o(n)

void mergeSortedArray(int arr[], int arrSize, int brr[], int brrSize, vector<int> &ans)
{
    int i = 0; // this will points to the elements of the arr
    int j = 0; // this will points to the elements of the brr

    // until both i and j are inside there length
    while (i < arrSize && j < brrSize)
    {
        if (arr[i] < brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[j]);
            j++;
        }
    }

    // but there are still 2 remaining cases
    // case 1 - elements are still present in arr
    while (i < arrSize)
    {
        ans.push_back(arr[i]);
        i++;
    }
    // case 2 - elements are still present in brr
    while (j < brrSize)
    {
        ans.push_back(brr[j]);
        j++;
    }
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 23};
    int arrSize = sizeof(arr) / sizeof(int);

    int brr[] = {2, 4, 6, 8, 10};
    int brrSize = sizeof(brr) / sizeof(int);

    vector<int> ans;
    mergeSortedArray(arr, arrSize, brr, brrSize, ans);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
