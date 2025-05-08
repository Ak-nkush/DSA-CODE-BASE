# Revist topic : 

* how 2D indecies are converted into a 1D index (C*I+J) where c is total numbers of col , i = row index . j = col index 
* declaration of 2D vector in which we have specifically calculate rowsize and colsize
*  ⭐⭐⭐ transpose of 2d matrix (optimal solution - swapping upper triangle with lower triangle) 

 > while passing the array into the function the array is pass by reference by default and while passing the 2d vector the vector is pass by valye by default 

# ⭐⭐⭐ Understanding Array and Vector Passing in C++

In C++, how you pass an array vs. a 2D vector to a function differs due to their underlying memory structures.

## 1. Arrays: Passed by "Pointer" (Not Truly by Reference)

### Default Behavior
When you pass a raw array to a function, it **decays into a pointer** (not a true reference):
- Changes made to the array inside the function **affect the original array**
* Syntactically, it's not a reference (no `&` needed)

### Example: Array Passing
```cpp
#include <iostream>
using namespace std;

void modifyArray(int arr[], int size) {  // Same as `int* arr`
    arr[0] = 100;  // Modifies the original array
}

int main() {
    int arr[] = {1, 2, 3};
    modifyArray(arr, 3);
    cout << arr[0];  // Output: 100 (original array changed)
    return 0;
}
```

## ⭐⭐⭐ Why Your Error Occurred
        -  Arrays:
        You likely tried void func(int &arr[]), which is invalid. Use int* arr or int (&arr)[SIZE].
        
        - For Vectors:
        You forgot &, so the vector was copied (changes were lost).

