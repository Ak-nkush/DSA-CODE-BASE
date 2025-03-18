#include <iostream>
using namespace std;
// recursive function to check whether the given array is sorted or not 

bool checksorting(int arr[], int size, int index)
{
    if (arr[index] > arr[index + 1] && (index + 1 )< size)
    {
        return false;
    }
    if (arr[index] < arr[index + 1] && (index + 1 ) < size)
    {
        return true;
    }

    bool ans = checksorting(arr, size, index + 1);
    return ans;
}

int main()
{
    int arr[] = {110, 20};
    int size = 2;
    int index = 0;
    bool ans = checksorting(arr, size, index);
    cout << ans << endl;
    return 0;
}