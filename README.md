# 543330-Assignment03
Alya Haniyah 24/543330/TK/60370 
# Description of Solutions
## Problem 1 – Algorithm Analysis
This problem analyzes three code snippets by counting the exact number of operations T(n), determining their Big-O complexity, and identifying best and worst case scenarios.
- *Snippet A:* Nested loops where the inner loop runs from 0 to i−1. The total number of executions forms the series  
  n(n−1)/2 resulting in *O(n²)* complexity.
- *Snippet B:* Binary search algorithm that repeatedly halves the search space. The total number of iterations is  
  ⌊log₂ n⌋ + 1 resulting in *O(log n)* complexity.
- *Snippet C:* Three nested loops where the middle loop runs n(n−1)/2 times and the innermost loop runs ⌈n/2⌉ times.  
  Overall complexity becomes *O(n³)*.
  ## Problem 2 – Dynamic Array Implementation
This problem implements a resizable array using a struct and procedural functions without using classes or std::vector.
Implemented functions:
- initArray() – Initializes the dynamic array with capacity = 2.
- freeArray() – Frees allocated memory and resets the structure.
- pushBack() – Adds an element to the end of the array. If the array is full, the capacity is doubled and elements are copied to a new buffer.
- insertAt() – Inserts an element at a specific index by shifting elements to the right.
- removeAt() – Removes an element and shifts the remaining elements to the left.
- getAt() – Returns the element at a specific index.
- setAt() – Updates the value at a given index.
- printDynArr() – Prints the contents of the array along with its size and capacity.
## Problem 3 – Linear Search vs Binary Search
Two search algorithms are implemented:
- *Linear Search*
  - Iterates through the array sequentially.
  - Works on both sorted and unsorted arrays.
  - Worst-case complexity: *O(n)*.
- *Binary Search*
  - Works only on sorted arrays.
  - Repeatedly halves the search range.
  - Worst-case complexity: *O(log n)*.
A helper function generateSortedArray() creates a sorted array of distinct integers.  
Both algorithms are tested with array sizes *10, 100, and 1000* for:
1. Searching an existing value.
2. Searching a non-existing value.
# Compilation Command
problem 2: g++ -std=c++17 -Wall -Wextra problem2.cpp -o problem2
problem 3: g++ -std=c++17 -Wall -Wextra problem3.cpp -o problem3
#Known Issues/Limitation
The dynamic array implementation does not perform explicit bounds checking since the assignment assumes valid incides.
Binary search only works correctly on sorted arrays.
The implementation is limited to integer data types.

# Time Spent
+- 3 days
