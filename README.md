# 100 Days of Data Structures and Algorithms (DSA) Challenge

Welcome to my **100 Days of DSA Challenge** repository! This project is aimed at enhancing my problem-solving skills and deepening my understanding of various data structures and algorithms through daily practice and implementation.

## 📅 Challenge Structure

- **Duration**: 100 days
- **Focus Areas**: 
  - Arrays
  - Linked Lists
  - Trees
  - Graphs
  - Dynamic Programming
  - Searching and Sorting Algorithms
  - And more!

## 🚀 Goals

- Strengthen coding skills in C++.
- Gain proficiency in data structures and algorithmic techniques.
- Solve a variety of problems and document solutions.
- Share knowledge and resources with fellow learners.

## 📚 Resources

- **LeetCode**: [leetcode.com](https://leetcode.com)
- **HackerRank**: [hackerrank.com](https://www.hackerrank.com)
- **GeeksforGeeks**: [geeksforgeeks.org](https://www.geeksforgeeks.org)
- **Competitive Programming Platforms**: Various others.


This repository is organized into daily folders, each containing:

- **Problem Statements**: A brief description of the problem being solved.
- **Code**: The implemented solution in C++.


# Day 1: Arrays

In this first day of the **100 Days of DSA Challenge**, I focused on fundamental problems related to arrays. The goal was to strengthen my understanding of array manipulation techniques and familiarize myself with common problem-solving patterns.

## 📋 Problems Solved

### 1. Find the Maximum Element in an Array

- **Problem Statement**: Given an array of integers, find and return the maximum element.
- **Approach**: 
  - Initialize a variable to store the maximum value.
  - Iterate through the array, updating the maximum value whenever a larger element is found.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

### 2. Second Largest Element in the Array

- **Problem Statement**: Given an array of integers, find and return the second largest element.
- **Approach**: 
  - Initialize two variables to keep track of the largest and second largest elements.
  - Traverse the array, updating these variables accordingly.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

## 💻 Code Implementations

- **Find Maximum Element**: [max_element.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day1/maxElement.cpp)
- **Second Largest Element**: [second_largest.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day1/SecondLargestElement.cpp)

## 📝 Learnings

- I learned about efficient ways to iterate through arrays and the importance of keeping track of multiple variables to find solutions.
- This exercise helped reinforce the concept of linear time complexity and its implications in algorithm efficiency.

---

Excited to continue the journey and tackle more challenging problems in the upcoming days

# Day 2: Missing Number in Array and Array Reverse

On the second day of the **100 Days of DSA Challenge**, I delved into two significant problems involving arrays: **Finding the Missing Number in an Array** and **Reversing an Array**. These exercises reinforced my understanding of array manipulation and explored different algorithmic approaches.

## 📋 Problems Solved

### 1. Missing Number in Array

- **Problem Statement**: Given an array containing `n` distinct numbers taken from `0` to `n`, find and return the one number that is missing from the array.
- **Approach**: 
  - Calculate the expected sum of the first `n` natural numbers and subtract the actual sum of the array elements to identify the missing number.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

### 2. Array Reverse

- **Problem Statement**: Given an array, reverse its elements in place.
- **Approach**: 
  - Use a two-pointer technique to swap elements from the beginning and end of the array until they meet in the middle.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

## 💻 Code Implementations

- **Missing Number in Array**: [missing_number.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day2/missingNum.cpp)
- **Array Reverse**: [array_reverse.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day2/arrayReversal.cpp)

## 📝 Learnings

- I learned about different techniques for solving the missing number problem, emphasizing the importance of selecting efficient algorithms based on time complexity.
- The exercise reinforced my skills in array manipulation, specifically in reversing arrays using various approaches.

---

Excited to continue the journey and tackle more challenging problems in the upcoming days!

# Day 3: Kth Largest Element in an Array

On the third day of the **100 Days of DSA Challenge**, I focused on solving the problem of finding the **Kth Largest Element in an Array**. I implemented a brute force solution first, followed by exploring an optimized approach using Quickselect.

## 📋 Problems Solved

### 1. Kth Largest Element in an Array

- **Problem Statement**: Given an array of integers and a number `k`, find and return the `k`th largest element in the array.
- **Approach (Brute Force)**: 
  - Sort the array in descending order and return the element at the `k-1` index.
  - **Time Complexity**: O(n log n) due to sorting.
  - **Space Complexity**: O(1), as no additional space is required.
- **Approach (Optimized)**: 
  - Use the Quickselect algorithm, which selects the `k`th largest element in average O(n) time, leveraging partitioning like in Quicksort.
  - **Time Complexity**: O(n) on average for Quickselect.
  - **Space Complexity**: O(1).

## 💻 Code Implementations

- **Kth Largest Element (Brute Force)**: [kth_largest_brute.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day3/kthLargestEle.cpp)
- **Kth Largest Element (Quickselect)**: [kth_largest_quickselect.cpp](update soon)

## 📝 Learnings

- I practiced a brute force solution using sorting to find the `k`th largest element in an array.
- I learned how to optimize the approach using the Quickselect algorithm, which is more efficient in terms of time complexity for large arrays.
- Understanding partitioning and recursion in Quickselect deepened my knowledge of divide-and-conquer strategies.

---

Looking forward to exploring more advanced data structures and algorithms in the upcoming days!
# Day 4: Separate Negative and Positive Numbers in an Array

On the fourth day of the **100 Days of DSA Challenge**, I focused on solving the problem of separating negative and positive numbers in an array. I utilized the two-pointer technique to achieve the desired result in optimal time.

## 📋 Problems Solved

### 1. Separate Negative and Positive Numbers in an Array

- **Problem Statement**: Given an array of integers, rearrange the array such that all negative numbers appear before all positive numbers. The relative order of negative numbers and positive numbers does not matter.
- **Approach**:
  - Use two pointers: one at the start and one at the end of the array.
  - Iterate through the array, and if the start pointer points to a positive number and the end pointer points to a negative number, swap them.
  - Repeat this process until the pointers cross each other.
- **Time Complexity**: O(n), as we iterate through the array once.
- **Space Complexity**: O(1), as we only use constant space for two pointers.

## 💻 Code Implementations

- **Separate Negative and Positive Numbers**: [separate_neg_pos.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day4/sepNegAndPos.cpp)

## 📝 Learnings

- The two-pointer technique is a powerful tool for efficiently solving problems related to partitioning arrays.
- This problem helped reinforce my understanding of in-place algorithms and constant space optimizations.
- It was a practical exercise in manipulating array indices and swapping values.

---

Excited to continue the journey and tackle more challenging problems in the upcoming days!

# Day 5: Cyclically Rotate an Array

On the fifth day of the **100 Days of DSA Challenge**, I worked on solving the problem of cyclically rotating an array. I implemented multiple approaches to better understand different techniques for array manipulation.

## 📋 Problems Solved

### 1. Cyclically Rotate an Array

- **Problem Statement**: Given an array, cyclically rotate the array by one position. This means moving the last element of the array to the first position.
- **Approach 1 (Swap-based with Two-Pointer)**:
  - Use two pointers: one at the start of the array and the other at the last element.
  - Swap elements until all positions are rotated.
  - **Time Complexity**: O(n), where n is the length of the array.
  - **Space Complexity**: O(1), as no additional space is used apart from the pointers.
  
- **Approach 2 (Shift-based)**:
  - Store the last element of the array in a temporary variable.
  - Shift all other elements to the right by one position.
  - Place the temporary last element at the first position.
  - **Time Complexity**: O(n), as we iterate through the array once.
  - **Space Complexity**: O(1), as no additional space is used other than the temporary variable.

## 💻 Code Implementations

- **Cyclically Rotate an Array (Two-Pointer)**: [https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day5/circularRotateArr.cpp)
- **Cyclically Rotate an Array (Shift-based)**: [https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day5/circularRotateArr.cpp)

## 📝 Learnings

- The two-pointer technique continues to be a useful approach for in-place array manipulation.
- I learned how to shift elements within an array efficiently, which is crucial for problems involving rotations.
- This exercise helped strengthen my ability to implement different approaches to solving the same problem, which is key for understanding time and space optimization.

---

Looking forward to solving more problems in the upcoming days and improving my skills further!

# Day 6: Intersection of Two Arrays

On the sixth day of the **100 Days of DSA Challenge**, I focused on solving the "Intersection of Two Arrays" problem using three different approaches. Each approach helped me understand different trade-offs in terms of time complexity, space complexity, and code efficiency.

## 📋 Problems Solved

### 1. Intersection of Two Arrays

- **Problem Statement**: Given two arrays, return the intersection of these arrays. Each element in the result must be unique.
  
### Approaches:
  
#### a. Brute-Force Approach
- **Approach**: Compare each element of the first array with each element of the second array using nested loops.
- **Time Complexity**: O(n²) due to the nested loops.
- **Space Complexity**: O(1), as no additional data structures are used.
  
#### b. Optimized Two-Pointer Approach
- **Approach**: 
  - First, sort both arrays.
  - Use two pointers to traverse both arrays simultaneously, checking for common elements.
  - Move the pointer in the smaller array forward to continue the comparison.
- **Time Complexity**: O(n log n) due to sorting and O(n) for traversing.
- **Space Complexity**: O(1), as no additional space beyond the input arrays is used.
  
#### c. Hash Set Approach
- **Approach**: 
  - Store the elements of the first array in an unordered set.
  - Traverse the second array and check for common elements in the set.
- **Time Complexity**: O(n) on average, as hash set operations (insert and lookup) are constant time.
- **Space Complexity**: O(n) due to the storage of elements in the hash set.

## 💻 Code Implementations

- **Brute-Force Approach**: [intersection_brute_force.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day6/intersectionOf2Array.cpp)
- **Two-Pointer Approach**: [intersection_two_pointer.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day6/intersectionOf2Array.cpp)
- **Hash Set Approach**: [intersection_hash_set.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day6/intersectionOf2Array.cpp)

## 📝 Learnings

- The brute-force approach, though easy to implement, is inefficient for large arrays due to its O(n²) time complexity.
- The two-pointer technique provided a more optimized solution with O(n log n) complexity, and its in-place nature minimized the space usage.
- The hash set approach introduced me to a faster solution with O(n) time complexity, helping me understand the practical application of hash tables in solving intersection problems.
- Today, I also learned about the trade-offs between space and time complexity when choosing between different approaches.

---

Excited to keep learning and improving my problem-solving skills in the upcoming days!

# Day 7: Two Sum Problem

On the seventh day of the **100 Days of DSA Challenge**, I tackled the "Two Sum" problem using three different approaches. This problem is a popular interview question and helped me explore various strategies for finding pairs of numbers that sum up to a target value.

## 📋 Problems Solved

### 1. Two Sum

- **Problem Statement**: Given an array of integers and a target value, find two numbers such that they add up to the target. Return the indices of the two numbers.
  
### Approaches:

#### a. Brute-Force Approach
- **Approach**: 
  - Use two nested loops to check all pairs of elements in the array and find the pair whose sum equals the target value.
- **Time Complexity**: O(n²) due to the nested loops.
- **Space Complexity**: O(1), as no extra space is used.

#### b. Hash Set Approach
- **Approach**:
  - Use a hash set to track the complement of each element (target - current element).
  - As you iterate through the array, check if the complement exists in the hash set.
- **Time Complexity**: O(n), since checking for the complement in a hash set is constant time.
- **Space Complexity**: O(n), as we store elements in the hash set.

#### c. Hash Map Approach
- **Approach**:
  - Use an unordered map to store each element’s value and its index as you iterate through the array.
  - For each element, check if its complement (target - element) exists in the map.
- **Time Complexity**: O(n), as each lookup in the hash map is constant time.
- **Space Complexity**: O(n), since we store elements in the hash map.

## 💻 Code Implementations

- **Brute-Force Approach**: [two_sum_brute_force.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day7/twoSumUpdated.cpp)
- **Hash Set Approach**: [https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day7/twoSumUpdated.cpp)
- **Hash Map Approach**: [https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day7/twoSumUpdated.cpp)

## 📝 Learnings

- The brute-force approach is easy to implement but becomes inefficient as the array size grows.
- The hash set and hash map approaches offered significantly better time complexity, demonstrating the power of hash-based data structures for solving problems in linear time.
- I deepened my understanding of how hash maps can be used not just for lookup, but also for efficient searching in problems involving complements or sums.

---

Excited to continue solving more problems and building up my problem-solving toolkit!

# Day 8: Merge Sorted Arrays

On the eighth day of the **100 Days of DSA Challenge**, I focused on solving the "Merge Sorted Arrays" problem. This task involved combining two sorted arrays into a single sorted array. I implemented both an optimized approach and a brute-force approach to better understand the advantages of each.

## 📋 Problems Solved

### 1. Merge Sorted Arrays

- **Problem Statement**: Given two sorted arrays, merge them into a single sorted array.
  
### Approaches:

#### a. Optimized Approach (Two-Pointer Technique)
- **Approach**: 
  - Use two pointers, one for each array, to compare the elements.
  - Add the smaller element to the result array and move the corresponding pointer forward.
  - Continue until all elements from both arrays are merged.
- **Time Complexity**: O(m + n), where m and n are the lengths of the two arrays.
- **Space Complexity**: O(m + n) for the result array.

#### b. Brute-Force Approach
- **Approach**: 
  - Create a new array and insert all elements from both arrays into it.
  - Sort the new array to ensure it is in order.
- **Time Complexity**: O((m + n) log(m + n)), due to the sorting step.
- **Space Complexity**: O(m + n), for storing all elements in the new array.

## 💻 Code Implementations

- **Optimized Two-Pointer Approach**: [merge_sorted_arrays_optimized.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day8/mergeSortedArray.cpp)
- **Brute-Force Approach**: [merge_sorted_arrays_brute_force.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day8/mergeSortedArray.cpp)

## 📝 Learnings

- The optimized approach with the two-pointer technique is significantly more efficient than the brute-force method, particularly as the size of the input arrays grows.
- Understanding how to merge sorted arrays is a crucial skill, as it lays the groundwork for more complex algorithms, such as merge sort.
- I also learned the importance of maintaining order and efficiency when combining data from multiple sources.

  # Day 9: Maximum Subarray

On the ninth day of the **100 Days of DSA Challenge**, I focused on solving the "Maximum Subarray" problem, a fundamental problem that demonstrates the power of dynamic programming techniques. The task was to identify the contiguous subarray within a one-dimensional array of numbers that has the largest sum.

## 📋 Problems Solved

### 1. Maximum Subarray

- **Problem Statement**: Given an integer array, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
  
### Approach:

#### Kadane's Algorithm
- **Approach**:
  - Initialize two variables: `max_current` to keep track of the maximum sum ending at the current position and `max_global` to store the maximum sum found so far.
  - Iterate through the array, updating `max_current` to either the current element alone or the sum of `max_current` and the current element.
  - Update `max_global` if `max_current` exceeds it.
- **Time Complexity**: O(n), as we only traverse the array once.
- **Space Complexity**: O(1), since we use only a fixed amount of extra space.

## 💻 Code Implementation

- **Kadane's Algorithm**: [maximum_subarray.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day9/maxSubArray.cpp)

## 📝 Learnings

- Kadane’s algorithm is an efficient way to solve the maximum subarray problem with linear time complexity, showcasing how dynamic programming principles can be applied to reduce the problem's complexity.
- I learned the importance of keeping track of both the current maximum and global maximum during the iteration, allowing for a straightforward and effective solution.
- This problem deepened my understanding of how to optimize problems involving sums and sequences, which can be applicable in various scenarios.

---

Looking forward to continuing my journey and tackling more interesting problems in the upcoming days!

# Day 10: Best Time to Buy and Sell Stock

On the tenth day of the **100 Days of DSA Challenge**, I focused on solving the "Best Time to Buy and Sell Stock" problem. The goal was to maximize profit by determining the best time to buy and sell a single stock based on its prices over time.

## 📋 Problems Solved

### 1. Best Time to Buy and Sell Stock

- **Problem Statement**: Given an array where the ith element is the price of a given stock on day i, return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
  
### Approach:

#### Single Pass Approach
- **Approach**: 
  - Initialize two variables: `min_price` to track the lowest price encountered so far and `max_profit` to store the maximum profit achieved.
  - Iterate through the prices array, updating `min_price` whenever a lower price is found, and calculate the potential profit by subtracting `min_price` from the current price. Update `max_profit` if this potential profit is greater.
- **Time Complexity**: O(n), as we traverse the prices array only once.
- **Space Complexity**: O(1), since we only use a fixed amount of extra space.

## 💻 Code Implementation

- **Single Pass Solution**: [best_time_to_buy_and_sell_stock.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day10/bestTimetoBuyAndSellStock.cpp)

## 📝 Learnings

- This problem reinforced the importance of keeping track of minimum values and how they can be used to calculate potential profits efficiently.
- I learned how to optimize the problem-solving process by using a single pass through the array, significantly improving efficiency compared to a brute-force approach.
- Understanding this problem is crucial for applications in real-world scenarios, such as stock trading strategies.

---

Excited to take on more challenges and enhance my skills in algorithms and data structures in the upcoming days!


---

Looking forward to the next challenges and continuing to expand my knowledge of algorithms and data structures!


# Day 11: Finding the Middle of a Linked List

On the eleventh day of the **100 Days of DSA Challenge**, I focused on solving the problem of finding the middle node of a linked list. This is a fundamental problem that helps reinforce the understanding of linked list traversal techniques.

## 📋 Problems Solved

### 1. Finding the Middle of a Linked List

- **Problem Statement**: Given a linked list, find the middle node. If the linked list has an even number of nodes, return the second middle node.
  
### Approach:

#### Two-Pointer Technique
- **Approach**: 
  - Initialize two pointers, `slow` and `fast`. Move `slow` by one node and `fast` by two nodes in each iteration.
  - When `fast` reaches the end of the list, `slow` will be at the middle node.
- **Time Complexity**: O(n), as we traverse the linked list once.
- **Space Complexity**: O(1), since we only use a fixed amount of extra space for the pointers.

## 💻 Code Implementation

- **Finding Middle of Linked List**: [find_middle_linked_list.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day11/middleOfLL.cpp)

## 📝 Learnings

- The two-pointer technique is a powerful approach for solving problems involving linked lists, allowing for efficient traversal with minimal space usage.
- Understanding how to find the middle of a linked list enhances the ability to manipulate and analyze linked list structures effectively.
- This problem helped solidify my grasp of linked list operations and the importance of pointer manipulation.

-Looking forward to continuing my journey and tackling more exciting challenges in the upcoming days!

# Day 12: Reverse Linked List

On the twelfth day of the **100 Days of DSA Challenge**, I tackled the "Reverse Linked List" problem. This problem is fundamental for understanding linked list manipulations and pointer adjustments.

## 📋 Problems Solved

### 1. Reverse Linked List

- **Problem Statement**: Given the head of a singly linked list, reverse the list and return the reversed list.
  
### Approach:

#### 1. Brute Force Approach
- **Approach**: 
  - Traverse the linked list and store the values in a vector.
  - Once the values are stored, traverse the list again, updating each node's value from the back of the vector.
- **Time Complexity**: O(n), as we traverse the list twice.
- **Space Complexity**: O(n), since we use a vector to store the values.

#### 2. Optimized Approach with Three Pointers
- **Approach**: 
  - Initialize three pointers: `prev`, `current`, and `mover`.
  - Traverse the list while adjusting the `next` pointers of the nodes to reverse the list in place.
- **Time Complexity**: O(n), as we traverse the list once.
- **Space Complexity**: O(1), since we use a fixed amount of extra space for the pointers.

## 💻 Code Implementation

- **Brute Force Solution**: [reverse_linked_list_brute.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day12/linkedListReversal.cpp)
- **Optimized Solution**: [reverse_linked_list_optimized.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day12/linkedListReversal.cpp)

## 📝 Learnings

- I learned two different approaches to solve the same problem, highlighting the trade-offs between simplicity and efficiency.
- The brute force method provided a straightforward solution, while the optimized approach emphasized in-place modifications, which is essential for linked list problems.
- Understanding how to manipulate pointers effectively is crucial for solving advanced data structure problems.

---

Looking forward to continuing my journey and exploring more complex challenges in the upcoming days!

# Day 13: Detecting Cycle in a Linked List

On the thirteenth day of the **100 Days of DSA Challenge**, I worked on detecting cycles in a linked list, solving it with two different approaches.

## 📋 Problems Solved

### 1. Detect Cycle in a Linked List

- **Problem Statement**: Given the head of a singly linked list, return `true` if there is a cycle in the list, otherwise return `false`.

### Approach:

#### 1. Fast and Slow Pointer (Optimal Approach)
- **Approach**: 
  - Use two pointers, `slowptr` and `fastptr`. The `slowptr` moves one node at a time, while the `fastptr` moves two nodes at a time. If there is a cycle, the two pointers will eventually meet.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

#### 2. Hash Set (Better Approach)
- **Approach**: 
  - Traverse the list and store visited nodes in an unordered set. If a node is visited more than once, it indicates a cycle.
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)

## 💻 Code Implementations

- **Fast and Slow Pointer Approach**: [detect_cycle_fast_slow.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day13/llCycle.cpp)
- **Hash Set Approach**: [detect_cycle_hash_set.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day13/llCycle.cpp)

## 📝 Learnings

- I learned two effective approaches for detecting cycles in a linked list.
- The fast and slow pointer method is more space-efficient, while the hash set approach is simpler to implement but uses extra space.
- Detecting cycles in a linked list is a fundamental skill in handling advanced linked list operations.

---

# Day 14: Merging Two Sorted Linked Lists

On the fourteenth day of the **100 Days of DSA Challenge**, I solved the problem of merging two sorted linked lists.

## 📋 Problems Solved

### 1. Merge Two Sorted Linked Lists

- **Problem Statement**: Given two sorted linked lists, merge them into one sorted linked list and return the merged list.

### Approach:

- **Approach**: 
  - Create a dummy node to serve as the starting point for the merged list.
  - Use two pointers (`ptr1` for `list1` and `ptr2` for `list2`) to traverse the lists.
  - Compare the current nodes of both lists and append the smaller value to the merged list.
  - Continue until one of the lists is exhausted, then append the remaining nodes from the other list.
  
- **Time Complexity**: O(n + m) where `n` is the length of `list1` and `m` is the length of `list2`.
- **Space Complexity**: O(1) as no additional space is used other than pointers.

## 💻 Code Implementation

- **Merge Two Sorted Linked Lists**: [merge_two_sorted_lists.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day14/mergeTwoLL.cpp)

## 📝 Learnings

- I practiced merging two sorted linked lists, which is a common operation used in divide-and-conquer algorithms like merge sort.
- Understanding the use of a dummy node simplifies the logic and reduces the edge cases when handling linked list merges.
- This problem strengthened my grasp of pointer manipulation in linked lists.

---
# Day 15: Fibonacci & Implementing `myPow(x, n)`

On the fifteenth day of the **100 Days of DSA Challenge**, I tackled two distinct problems: computing Fibonacci numbers and implementing the power function `myPow(x, n)`. Both of these problems strengthened my understanding of iterative algorithms and optimization techniques for handling large inputs.

## 📋 Problems Solved

### 1. Fibonacci Sequence

- **Problem Statement**: Given a number `n`, return the `n`th Fibonacci number.
  
### Approach:

#### Iterative Approach
- **Approach**: 
  - Used an iterative approach to compute Fibonacci numbers. The process started by initializing the first two Fibonacci numbers (0 and 1) and iterating through the sequence to compute higher values.
- **Time Complexity**: O(n), as we traverse through the sequence once.
- **Space Complexity**: O(1), as only a fixed amount of extra space is used to store variables.

### 2. Implementing `myPow(x, n)`

- **Problem Statement**: Implement the function `myPow(x, n)` which calculates `x` raised to the power `n`.

### Approaches:

#### 1. Direct Usage of `pow()` Function
- **Approach**: 
  - Directly used the built-in `pow()` function to compute the result.
- **Time Complexity**: O(1), as this method simply calls a built-in function.
- **Space Complexity**: O(1).

#### 2. Optimized Approach (Binary Exponentiation)
- **Approach**: 
  - Optimized the power calculation using binary exponentiation to reduce time complexity. This method calculates powers efficiently by dividing the exponent by half at each step.
  - Handled negative exponents by taking the reciprocal of the base and adjusting the exponent accordingly.
- **Time Complexity**: O(log n), as the exponent is halved in each step.
- **Space Complexity**: O(1), since no additional data structures are required.

## 💻 Code Implementation

- **Fibonacci Solution**: [fibonacci.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day15/fibanocciSeries.cpp)
- **Power Function Solutions**: 
  - [myPow_direct.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day15/pow.cpp)
  - [myPow_optimized.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day15/pow.cpp)

## 📝 Learnings

- The Fibonacci problem reinforced my understanding of iterative solutions and how to manage state between iterations with minimal space usage.
- The `myPow` problem introduced me to binary exponentiation, which is a powerful technique to optimize power calculations.
- Handling edge cases, especially for negative exponents and large inputs, was crucial in this challenge.

---

Excited for more challenges and opportunities to strengthen my DSA skills in the coming days!

# Day 16: Reverse String

On the sixteenth day of the **100 Days of DSA Challenge**, I tackled the "Reverse String" problem using recursion, a fundamental technique that is highly applicable to a wide range of problems.

## 📋 Problems Solved

### 1. Reverse String

- **Problem Statement**: Given an array of characters, reverse the array in place using recursion.

### Approach:

#### Recursive Approach
- **Approach**:
  - I created a helper function `reverseHelper` that uses recursion to swap characters from both ends of the array towards the center.
  - The base case is when the `firstIndex` is greater than or equal to the `lastIndex`.
  - The helper function is then called recursively to continue reversing the remaining characters.
- **Time Complexity**: O(n), where `n` is the length of the string.
- **Space Complexity**: O(n) due to the recursion stack.

## 💻 Code Implementation

- **Recursive Solution**: [reverse_string_recursive.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day16/stringReversalRecursion.cpp)

## 📝 Learnings

- This problem helped me understand how recursion can simplify solutions, making it easier to write clear and concise code.
- While iterating solutions may seem easier at first glance, recursion offers an alternative approach that is useful in many algorithmic problems.

---

Excited to move forward with more challenges as part of this journey!

# Day 17: Subsequences of a String

On the seventeenth day of the **100 Days of DSA Challenge**, I explored how to generate all possible subsequences of a given string. This problem emphasizes the concept of subsets, binary representation, and recursion.

## 📋 Problems Solved

### 1. Subsequences of a String

- **Problem Statement**: Given a string, generate all possible subsequences (non-contiguous subsequences) of the string.

### Approach:

#### 1. Recursive Approach
- **Approach**:
  - I used a helper function `subseqHelper` to recursively generate subsequences.
  - At each index, we have two choices: either include the current character in the subsequence or exclude it.
  - Base case: when the index reaches the length of the string, we store the current subsequence (if it's not empty).
- **Time Complexity**: O(2^n), where `n` is the length of the string, as we explore two possibilities at each step.
- **Space Complexity**: O(n), considering the recursion stack.

#### 2. Iterative (Bitmasking) Approach
- **Approach**:
  - The bitmasking approach treats the problem as a subset generation problem. For a string of size `n`, there are `2^n` subsequences.
  - Each number from `1` to `2^n - 1` is treated as a bitmask. For each bit set, we include the corresponding character from the string.
  - This avoids recursion and uses binary representation to generate subsequences.
- **Time Complexity**: O(n * 2^n), as we generate `2^n` subsequences, and for each subsequence, we iterate over the characters.
- **Space Complexity**: O(2^n), required to store all subsequences.

## 💻 Code Implementation

- **Recursive Solution**: [subsequences_recursive.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day17/subsequenceOfString.cpp)
- **Bitmasking Solution**: [subsequences_bitmask.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day17/subsequenceOfString.cpp)

## 📝 Learnings

- This problem helped me understand the recursive generation of subsequences, a concept closely related to solving problems using backtracking.
- The bitmasking approach allowed me to explore a non-recursive, more systematic way of generating subsequences by leveraging binary numbers.
- Both approaches showcase different ways to solve the same problem, emphasizing the flexibility of algorithm design.

---

Looking forward to continuing the challenge and tackling more interesting problems!

# Day 18,19,20: Combination Sum I,II,III

On the eighteenth day of the **100 Days of DSA Challenge**, I worked on the "Combination Sum" problem. This problem is great for practicing recursion and backtracking.

## 📋 Problems Solved

### 1. Combination Sum

- **Problem Statement**: Given an array of distinct integers `candidates` and a target integer `target`, return all unique combinations of `candidates` where the chosen numbers sum up to `target`. The same number may be chosen an unlimited number of times.

### Approach:

#### Recursive Backtracking Approach
- **Approach**:
  - I used a helper function `findCombinationSum` to recursively explore all possible combinations of numbers that sum up to the target.
  - At each index, there are two choices: include the current element if it is less than or equal to the target, or move to the next element without including it.
  - When the target reaches zero, the current combination is added to the result.
  - Backtracking is used to remove the last added element and explore other combinations.
  
- **Time Complexity**: O(2^t), where `t` is the target value, as there are multiple ways to reach the target.
- **Space Complexity**: O(k), where `k` is the number of elements in a single combination.

## 💻 Code Implementation

- **Combination Sum I Solution**: [combination_sum.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day18/comminationSum.cpp)
- - **Combination Sum II Solution**: [combination_sum.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day18/comminationSum.cpp)
  - - **Combination Sum III Solution**: [combination_sum.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day18/comminationSum.cpp)

## 📝 Learnings

- This problem deepened my understanding of recursive backtracking, which is crucial for solving problems that involve exploring different combinations or permutations.
- I learned how to handle problems with repetitive choices where the same element can be reused multiple times in a solution.
- The use of backtracking to explore all possible combinations, and removing the last added element after exploring a path, is a key technique in this type of problem.

---

Looking forward to continuing this challenge and working on more complex recursive problems in the upcoming days!

