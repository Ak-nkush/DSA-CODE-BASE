#include <iostream>
using namespace std;
// printing digits using recursion
void printingDigits(int n)
{
    if (n == 0)
        return;
    int digit = n % 10;
    n = n / 10;
    printingDigits(n);
    cout << digit << endl;
}

int main()
{
    int n = 389;
    printingDigits(n);
    return 0;
}