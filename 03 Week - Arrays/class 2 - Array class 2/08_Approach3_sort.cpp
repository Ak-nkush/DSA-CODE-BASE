#include <iostream>
using namespace std;
// sorting 0 and 1 in the array by using two pointer method

void sorting(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] == 0 )
        {
            i++;
        }
        else if (arr[j] == 1 )
        {
            j--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 1};
    int size = 8;
    sorting(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}