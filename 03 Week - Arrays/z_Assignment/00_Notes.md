# Assignments Questions 
1. Key Pair
2. Find Pivot Index
3. Missing Number
4. Remove Duplicates From Sorted Array
5. Maximum Average Subarray 1
6. Sort Colors
7. Moving All Negative Number to the Left Side of an Array
8. Find Duplicate Number
9. Missing Element From An Array With Duplicates
10. Find First Repeating Element
11. Wave Print A Matrix
12. Spiral Print A Matrix
13. Common Element in 3 Sorted Array
14. Add two numbers represented by two Arrays
15. Factorial of A Large Number

__________________________________________________

# notes and question links 

* [Question 01 - key pair](https://www.geeksforgeeks.org/problems/key-pair5616/1)
* ⭐⭐ [Question 02 - Pivot index](https://leetcode.com/problems/find-pivot-index/description/)
* [Question 03 - missing number](https://leetcode.com/problems/missing-number/)
* ⭐[Question 04 - remove duplicate and then give the length of only unique element](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
* [Question 05 - 643 Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/description/)
* [Question 06 - 75: sort color(dutch national flag)](https://leetcode.com/problems/sort-colors/description/)
*  [Question 09 - Finding repeated Numbers GFG ](https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1)
* ⭐⭐⭐⭐⭐[Question 12 - spiral matrix traversal ](https://leetcode.com/problems/spiral-matrix/)
* ⭐⭐[Question 13 - common elements in 3 sorted array](https://www.geeksforgeeks.org/problems/common-elements1132/1)
* ⭐⭐⭐[Question 14 - add two number represented by array](https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1)
* ⭐⭐⭐⭐⭐⭐ [Question 15 - factorial of large number](https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1)


__________________________________________________
# Difference Between `set` and `vector` in C++

| Feature                | `vector`                                  | `set`                                      |
|------------------------|-------------------------------------------|---------------------------------------------|
| **Header File**        | `<vector>`                                | `<set>`                                     |
| **Type**               | Sequence container                        | Associative container                       |
| **Duplicates**         | Allows duplicates                         | Does **not** allow duplicates               |
| **Order**              | Maintains **insertion order**             | Stores in **sorted (ascending) order**      |
| **Access**             | Random access using index (`arr[i]`)      | No index-based access                       |
| **Insertion Time**     | `O(1)` at end (amortized), `O(n)` in middle | `O(log n)`                                  |
| **Search Time**        | `O(n)` linear search or `O(log n)` if sorted | `O(log n)` with `find()`                   |
| **Underlying Structure** | Dynamic array                           | Self-balancing binary search tree (Red-Black Tree) |
| **Use Case**           | Use when you need order and duplicates    | Use when you need uniqueness and sorting    |

## Example

```cpp
#include <vector>
#include <set>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {3, 1, 2, 1};
    set<int> s = {3, 1, 2, 1};

    // Vector output
    cout << "Vector: ";
    for (int x : v) cout << x << " ";  // Output: 3 1 2 1

    cout << "\nSet: ";
    for (int x : s) cout << x << " ";  // Output: 1 2 3 (no duplicates, sorted)
}
