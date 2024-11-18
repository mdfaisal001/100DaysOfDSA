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

- **Combination Sum I Solution**: [combination_sumI.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day18/comminationSum.cpp)
- - **Combination Sum II Solution**: [combination_sumII.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day19/CombinationSum2.cpp)
  - - **Combination Sum III Solution**: [combination_sumIII.cpp](https://github.com/mdfaisal001/100DaysOfDSA/blob/main/100DaysOfDSA/Day20/combinationSum3.cpp)

## 📝 Learnings

- This problem deepened my understanding of recursive backtracking, which is crucial for solving problems that involve exploring different combinations or permutations.
- I learned how to handle problems with repetitive choices where the same element can be reused multiple times in a solution.
- The use of backtracking to explore all possible combinations, and removing the last added element after exploring a path, is a key technique in this type of problem.

---

Looking forward to continuing this challenge and working on more complex recursive problems in the upcoming days!

# Day 21: Subsets with Duplicates

On the twenty-first day of the **100 Days of DSA Challenge**, I solved the "Subsets with Duplicates" problem.

## 📋 Problems Solved

### 1. Subsets with Duplicates
- **Problem Statement**: Given an integer array `nums`, return all possible subsets (the power set) without duplicates. The solution set must not contain duplicate subsets.

### Approach:
- **Backtracking**:
  - Use backtracking to generate all subsets, ensuring to skip over duplicates in the array.
  - Sort the array first to help identify duplicates easily by skipping over consecutive identical elements during recursive calls.
- **Time Complexity**: O(2^n), where `n` is the number of elements in `nums`.
- **Space Complexity**: O(n), for storing the current subset and the result.

## 💻 Code Implementation
- **Subsets with Duplicates Solution**: [subsets_with_dup.cpp](./Day21/subsets_with_dup.cpp)

## 📝 Learnings
- This problem reinforced my understanding of generating subsets and handling duplicate elements efficiently using backtracking and sorting.
# Day 22: Container With Most Water

On the twenty-second day of the **100 Days of DSA Challenge**, I solved the "Container With Most Water" problem.

## 📋 Problems Solved

### 1. Container With Most Water
- **Problem Statement**: Given an array `height` where `height[i]` is the height of a vertical line at position `i`, find two lines that together with the x-axis form a container that holds the most water. Return the maximum amount of water a container can store.

### Approach:
- **Two-pointer approach**:
  - Start with two pointers at the beginning and end of the array.
  - Calculate the area formed by the lines at the two pointers.
  - Move the pointer pointing to the shorter line inward in hopes of finding a taller line that could form a larger area.
  - Repeat until the two pointers meet.
- **Time Complexity**: O(n), where `n` is the number of elements in `height`.
- **Space Complexity**: O(1), since no extra space is used beyond the input array.

## 💻 Code Implementation
- **Container With Most Water Solution**: [container_with_most_water.cpp](./Day22/container_with_most_water.cpp)

## 📝 Learnings
- This problem enhanced my understanding of the two-pointer technique, which is very efficient for solving problems involving arrays and optimizing space complexity.
# Day 23: Permutations

On the twenty-third day of the **100 Days of DSA Challenge**, I solved the "Permutations" problem.

## 📋 Problems Solved

### 1. Permutations
- **Problem Statement**: Given a collection of distinct integers, return all possible permutations. You need to implement a function that generates all possible orderings of the input numbers.

### Approach:
- **Backtracking Approach**:
  - Use recursion to generate all possible permutations by swapping elements in the array.
  - Swap elements at the current index and explore all permutations recursively.
  - Once the index reaches the end of the array, store the current permutation.
  - Backtrack by swapping the elements back to their original positions after the recursive call.
- **Time Complexity**: O(n!), where `n` is the number of elements in the input array, because there are `n!` permutations.
- **Space Complexity**: O(n), where `n` is the depth of the recursion tree.

## 💻 Code Implementation
- **Permutations Solution**: [permutations.cpp](./Day23/permutations.cpp)

## 📝 Learnings
- This problem helped me understand the concept of backtracking and how to generate all possible combinations and permutations of a set of elements.
# Day 24: Sort Colors

On the twenty-fourth day of the **100 Days of DSA Challenge**, I solved the "Sort Colors" problem.

## 📋 Problems Solved

### 1. Sort Colors
- **Problem Statement**: Given an array of integers where each element is 0, 1, or 2, sort the array in-place without using the library sort function.
  - The problem is based on the Dutch National Flag problem.
  - The array needs to be sorted so that all 0s come first, followed by 1s, and then 2s.

### Approach:
- **Three Pointers Approach (Dutch National Flag Algorithm)**:
  - Use three pointers (`low`, `mid`, `high`) to divide the array into three sections: one for 0s, one for 1s, and one for 2s.
  - Start with all pointers pointing to the start and end of the array.
  - If `nums[mid] == 0`, swap it with `nums[low]` and increment both `low` and `mid`.
  - If `nums[mid] == 2`, swap it with `nums[high]` and decrement `high`.
  - If `nums[mid] == 1`, just increment `mid`.
  - Continue the process until `mid` crosses `high`.
- **Time Complexity**: O(n), where `n` is the number of elements in the array, as the algorithm only passes through the array once.
- **Space Complexity**: O(1), as we use a constant amount of extra space.

## 💻 Code Implementation
- **Sort Colors Solution**: [sort_colors.cpp](./Day24/sort_colors.cpp)

## 📝 Learnings
- This problem helped me understand how to efficiently sort an array with restricted values using a three-pointer approach.
- The problem also demonstrated the importance of in-place sorting and avoiding unnecessary space complexity.
# Day 25: Single Number

On the twenty-fifth day of the **100 Days of DSA Challenge**, I solved the "Single Number" problem.

## 📋 Problems Solved

### 1. Single Number
- **Problem Statement**: Given an integer array `nums`, where every element appears twice except for one, find the element that appears only once.
  - The problem asks for an efficient solution to find the number that appears only once while all other numbers appear twice.

### Approach:
- **Using Unordered Map**:
  - We use an unordered map (hash map) to store the frequency of each number in the array.
  - Iterate through the array, count the occurrences of each number, and store them in the unordered map.
  - After building the map, we iterate through it to find the number that appears exactly once.
- **Time Complexity**: O(n), where `n` is the number of elements in the array, as we are iterating over the array and the map.
- **Space Complexity**: O(n), since we are using an unordered map to store the frequency of each element.

## 💻 Code Implementation
- **Single Number Solution**: [single_number.cpp](./Day25/single_number.cpp)

## 📝 Learnings
- This problem helped me understand how to use hash maps to track the frequency of elements in an array.
- While this approach is simple and works well, I also explored optimized solutions that use bitwise operations to solve the problem in O(n) time and O(1) space.

# Day 26: Letter Combinations of a Phone Number

On the twenty-sixth day of the **100 Days of DSA Challenge**, I solved the "Letter Combinations of a Phone Number" problem.

## 📋 Problem Solved

### 1. Letter Combinations of a Phone Number
- **Problem Statement**: Given a string containing digits from `2` to `9` inclusive, return all possible letter combinations that the digits could represent. 
  - A mapping of digits to letters (as on a phone keypad) is provided, and the task is to generate all possible letter combinations.

### Approach:
- **Backtracking Approach**:
  - Use backtracking to explore all the possible combinations of letters for the given digits.
  - A map is used to represent the letters associated with each digit.
  - Start by iterating through each digit, and for each digit, explore all the characters that the digit could represent, adding one character at a time to the current combination.
  - Once a combination is formed for the entire string of digits, add it to the result.
- **Time Complexity**: O(4^n), where `n` is the length of the input string. In the worst case, we will have 4 choices for each digit (e.g., for digits '7' and '9').
- **Space Complexity**: O(n), where `n` is the length of the result as we store all possible combinations.

## 💻 Code Implementation
- **Letter Combinations of a Phone Number Solution**: [letter_combinations.cpp](./Day26/letter_combinations.cpp)

## 📝 Learnings
- This problem helped me understand backtracking techniques and how to approach problems that require generating combinations of items.
- I also learned how to effectively use a map to represent character mappings from digits to letters.

# Day 27: Palindrome Linked List

On the twenty-seventh day of the **100 Days of DSA Challenge**, I solved the "Palindrome Linked List" problem.

## 📋 Problem Solved

### 1. Palindrome Linked List
- **Problem Statement**: Given a singly linked list, determine if it is a palindrome.
  - A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).

### Approach:
- **Approach 1: Using a Stack**:
  - Traverse the linked list and push all node values into a stack.
  - Then, traverse the list again and pop values from the stack, comparing them with the current node’s value.
  - If at any point, the values do not match, return false.
  - **Time Complexity**: O(n), where `n` is the length of the linked list (due to traversal and stack operations).
  - **Space Complexity**: O(n) (space used by the stack).

- **Approach 2: Using Recursion with Two Pointers**:
  - Use a recursive approach with two pointers (one from the start and one from the end) to compare values.
  - A helper function is used for recursive traversal, ensuring that we do not modify the original list.
  - **Time Complexity**: O(n) (due to the recursion and linked list traversal).
  - **Space Complexity**: O(n) due to the recursion stack.

## 💻 Code Implementation
- **Palindrome Linked List Solution (Stack-based)**: [palindrome_linked_list_stack.cpp](./Day27/palindrome_linked_list_stack.cpp)
- **Palindrome Linked List Solution (Recursive Two Pointers)**: [palindrome_linked_list_recursive.cpp](./Day27/palindrome_linked_list_recursive.cpp)

## 📝 Learnings
- This problem helped me understand how to manipulate and traverse linked lists efficiently.
- I learned how to use auxiliary data structures like stacks and recursion to solve palindrome-related problems.

# Day 28: 3Sum

On the twenty-eighth day of the **100 Days of DSA Challenge**, I solved the "3Sum" problem.

## 📋 Problem Solved

### 1. 3Sum
- **Problem Statement**: Given an array of integers, return all unique triplets in the array that sum up to zero.
  - The solution should not contain duplicate triplets.

### Approach:
- **Approach**:
  - First, sort the input array.
  - Use a fixed element at each iteration (starting from index `i`), and use two pointers (`left` and `right`) to find pairs that sum up with the fixed element to make the sum zero.
  - Move the `left` and `right` pointers accordingly based on whether the sum is smaller, equal to, or larger than zero.
  - Skip duplicate elements to avoid repeated triplets.
  - **Time Complexity**: O(n^2) due to the two-pointer approach, where `n` is the length of the array.
  - **Space Complexity**: O(1) for space used outside the result storage (since the result stores unique triplets).

## 💻 Code Implementation
- **3Sum Solution**: [three_sum.cpp](./Day28/three_sum.cpp)

## 📝 Learnings
- This problem taught me how to efficiently find triplets that satisfy certain conditions using sorting and the two-pointer technique.
- It was a good practice for handling duplicates in the input array and ensuring that the solution contains only unique triplets.
# Day 29: Binary Tree Level Order Traversal

On the twenty-ninth day of the **100 Days of DSA Challenge**, I solved the "Binary Tree Level Order Traversal" problem.

## 📋 Problem Solved

### 1. Binary Tree Level Order Traversal
- **Problem Statement**: Given a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
  - The result should be a list of lists, where each list represents a level of the tree.

### Approach:
- **Approach**:
  - Use a **queue** to traverse the tree level by level.
  - Start with the root node and add it to the queue.
  - For each level, pop nodes from the queue and add their values to a temporary list. For each node, enqueue its left and right children (if they exist).
  - Continue this process until the queue is empty.
  - **Time Complexity**: O(n), where n is the number of nodes in the tree.
  - **Space Complexity**: O(n), as the queue can contain up to n nodes in the worst case (if the tree is completely unbalanced).

## 💻 Code Implementation
- **Binary Tree Level Order Traversal Solution**: [binary_tree_level_order_traversal.cpp](./Day29/binary_tree_level_order_traversal.cpp)

## 📝 Learnings
- This problem gave me practice with **breadth-first search (BFS)** and **level order traversal** of a tree using a queue.
- It reinforced the concept of visiting nodes level by level, which is fundamental in tree traversal problems.

# Day 30: Binary Tree Traversals (Inorder, Preorder, Postorder)

On the thirtieth day of the **100 Days of DSA Challenge**, I solved the "Binary Tree Traversals" problem, implementing all three common types of tree traversal: **Inorder**, **Preorder**, and **Postorder**.

## 📋 Problem Solved

### 1. Inorder Traversal of a Binary Tree
- **Problem Statement**: Perform an inorder traversal on a binary tree, returning the values of the nodes in the correct order.
  - **Inorder Traversal Order**: Left subtree → Root → Right subtree.

### 2. Preorder Traversal of a Binary Tree
- **Problem Statement**: Perform a preorder traversal on a binary tree, returning the values of the nodes in the correct order.
  - **Preorder Traversal Order**: Root → Left subtree → Right subtree.

### 3. Postorder Traversal of a Binary Tree
- **Problem Statement**: Perform a postorder traversal on a binary tree, returning the values of the nodes in the correct order.
  - **Postorder Traversal Order**: Left subtree → Right subtree → Root.

### Approach:
- For each traversal, use **recursion** to visit the nodes in the correct order.
- For **Inorder**, traverse the left subtree, visit the root, and then traverse the right subtree.
- For **Preorder**, visit the root first, then traverse the left subtree, and then the right subtree.
- For **Postorder**, traverse the left subtree, then the right subtree, and finally visit the root.

- **Time Complexity**: O(n), where n is the number of nodes in the tree (since each node is visited once).
- **Space Complexity**: O(n), as recursion adds stack space proportional to the height of the tree.

## 💻 Code Implementation
- **Inorder Traversal** Solution: [inorder_traversal.cpp](./Day30/inorder_traversal.cpp)
- **Preorder Traversal** Solution: [preorder_traversal.cpp](./Day30/preorder_traversal.cpp)
- **Postorder Traversal** Solution: [postorder_traversal.cpp](./Day30/postorder_traversal.cpp)

## 📝 Learnings
- Implementing the three types of tree traversals deepened my understanding of tree structures and recursion.
- Each traversal serves a specific purpose in different tree algorithms, such as searching, sorting, or evaluating expressions.
- The recursion-based approach is simple and intuitive for tree traversal problems.

# Day 31: Maximum Depth of Binary Tree

On the thirty-first day of the **100 Days of DSA Challenge**, I solved the problem of finding the **maximum depth of a binary tree**. I implemented both **Iterative** and **Recursive** approaches to solve this problem.

## 📋 Problem Solved

### Maximum Depth of Binary Tree
- **Problem Statement**: Given the root of a binary tree, return its maximum depth. The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

### Approach:
- **Iterative Approach (Level-Order Traversal)**: 
  - Use a **queue** to perform level-order traversal of the tree. 
  - Count the number of levels by traversing through the tree level by level. 
  - This ensures that we count the number of levels (or depth) from the root to the deepest leaf node.
  
- **Recursive Approach**:
  - Recursively calculate the depth by determining the maximum depth of the left and right subtrees and adding 1 to account for the current root node.
  
- **Time Complexity**: O(n), where n is the number of nodes in the tree, as we need to visit each node.
- **Space Complexity**: O(n), where n is the number of nodes (for recursion stack or queue).

## 💻 Code Implementation
- **Iterative Approach** Solution: [max_depth_iterative.cpp](./Day31/max_depth_iterative.cpp)
- **Recursive Approach** Solution: [max_depth_recursive.cpp](./Day31/max_depth_recursive.cpp)

## 📝 Learnings
- The iterative approach with level-order traversal is straightforward for finding the depth of the tree by counting levels.
- The recursive approach provides a more natural way of thinking about tree depths, where each subtree’s depth is evaluated independently.
- Both methods are efficient, and knowing both approaches adds versatility in problem-solving.

# Day 32: Balanced Binary Tree

On the thirty-second day of the **100 Days of DSA Challenge**, I solved the problem of checking if a binary tree is **balanced**. A balanced tree is defined as a tree where the height difference between the left and right subtrees of every node is at most 1.

## 📋 Problem Solved

### Balanced Binary Tree
- **Problem Statement**: Given a binary tree, determine if it is height-balanced. A binary tree is balanced if the left and right subtrees of every node differ in height by no more than 1.

### Approach:
- **Recursive Approach**: 
  - Perform a depth-first traversal of the tree, calculating the height of the left and right subtrees for each node.
  - If the difference in height for any node exceeds 1, return -1 to signify that the tree is unbalanced.
  - If we successfully check all nodes without finding any imbalance, the tree is balanced.

- **Time Complexity**: O(n), where n is the number of nodes, because we visit each node once.
- **Space Complexity**: O(h), where h is the height of the tree, due to the recursion stack.

## 💻 Code Implementation
- **Solution**: [balanced_binary_tree.cpp](./Day32/balanced_binary_tree.cpp)

## 📝 Learnings
- A **bottom-up** approach is effective for this problem since we compute the balance factor (height difference) of each subtree as we go deeper into the tree.
- The recursive solution provides a natural way to traverse the tree while checking for balance.
- The use of early termination (returning `-1` when an imbalance is found) optimizes the process by stopping unnecessary checks.


# Day 33: Lowest Common Ancestor of a Binary Tree

On the thirty-third day of the **100 Days of DSA Challenge**, I solved the problem of finding the **Lowest Common Ancestor (LCA)** of two nodes in a binary tree.

## 📋 Problem Solved

### Lowest Common Ancestor of a Binary Tree
- **Problem Statement**: Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree. The LCA of two nodes p and q is the lowest node that is an ancestor of both p and q.

### Approach:
- **Recursive Approach**:
  - Traverse the tree recursively to find nodes p and q.
  - If the current node is one of p or q, return the current node.
  - Recursively find the LCA in the left and right subtrees.
  - If both left and right subtrees contain one of p or q, the current node is their LCA.
  - If only one subtree contains p or q, return that subtree’s result.

- **Time Complexity**: O(n), where n is the number of nodes in the tree, since we may have to traverse the entire tree.
- **Space Complexity**: O(h), where h is the height of the tree, due to the recursion stack.

## 💻 Code Implementation
- **Solution**: [lowest_common_ancestor.cpp](./Day33/lowest_common_ancestor.cpp)

## 📝 Learnings
- The concept of **Lowest Common Ancestor** is essential in many tree-based problems.
- The recursive approach efficiently finds the LCA by breaking down the problem into smaller subproblems (left and right subtrees).
- It’s important to understand that if both nodes are found in the left and right subtrees, the current node is the LCA.

# Day 34: Diameter of Binary Tree

On the thirty-fourth day of the **100 Days of DSA Challenge**, I solved the problem of finding the **diameter of a binary tree**.

## 📋 Problem Solved

### Diameter of Binary Tree
- **Problem Statement**: The diameter of a binary tree is the length of the longest path between any two nodes in the tree. This path may or may not pass through the root.
  
### Approach:
- **Recursive Approach**:
  - Use a helper function `findDia` that computes the diameter of the tree while also calculating the height of each subtree.
  - For each node, calculate the height of its left and right subtrees.
  - The diameter at each node is the sum of the heights of the left and right subtrees. Update the `maxi` variable if the sum exceeds the current maximum diameter.
  - The height of a node is `1 + max(height of left subtree, height of right subtree)`.

- **Time Complexity**: O(n), where n is the number of nodes in the tree, since each node is visited once.
- **Space Complexity**: O(h), where h is the height of the tree, due to recursion stack space.

## 💻 Code Implementation
- **Solution**: [diameter_of_binary_tree.cpp](./Day34/diameter_of_binary_tree.cpp)

## 📝 Learnings
- The diameter of a binary tree is closely related to the height of the tree.
- The recursive approach efficiently computes both the diameter and the height by traversing each node only once.
- It's crucial to track the maximum diameter found during the recursion to ensure the correct result.

# Day 35: Symmetric Tree

On the thirty-fifth day of the **100 Days of DSA Challenge**, I solved the problem of checking if a binary tree is symmetric.

## 📋 Problem Solved

### Symmetric Tree
- **Problem Statement**: A binary tree is symmetric if its left and right subtrees are mirror images of each other.
  
### Approach:
- **Level-Order Traversal (BFS)**:
  - Use a queue to perform a level-order traversal of the tree.
  - Start by pushing the left and right children of the root into the queue.
  - For each pair of nodes, check if they are both `NULL` (in which case they are symmetric at this level) or if they have the same value. If not, return `false`.
  - Add the children of the nodes to the queue in reverse order: for the left node, push its left child first and then its right child, and vice versa for the right node.
  - If all pairs of nodes at each level are symmetric, return `true`; otherwise, return `false`.

- **Time Complexity**: O(n), where n is the number of nodes in the tree, since each node is visited once.
- **Space Complexity**: O(n), where n is the number of nodes at the deepest level, for the queue that stores nodes at each level.

## 💻 Code Implementation
- **Solution**: [symmetric_tree.cpp](./Day35/symmetric_tree.cpp)

## 📝 Learnings
- The problem of checking symmetry in a binary tree can be efficiently solved using level-order traversal and a queue.
- It's important to ensure that nodes are compared in a manner that checks for mirror symmetry at each level of the tree.

# Day 36: Distance K Nodes in a Binary Tree

On the thirty-sixth day of the **100 Days of DSA Challenge**, I solved the problem of finding all nodes at distance `k` from a target node in a binary tree.

## 📋 Problem Solved

### Distance K Nodes in a Binary Tree
- **Problem Statement**: Given a binary tree and a target node, find all nodes that are at distance `k` from the target node.

### Approach:
- **DFS Approach**:
  1. **Find the target node**: Perform a DFS search to find the target node in the tree.
  2. **Find nodes at distance k from the target**: Once the target node is found, use a helper function to collect all nodes that are `k` levels down from the target node.
  3. **Handle both subtrees**: If the target node is found in the left subtree, look at the right subtree for nodes at the required distance, and vice versa.
  
- **Helper Function** (`dfs_down`): This function explores all nodes `k` levels below a given node and collects their values.
- **Main Function** (`find_target`): This function recursively searches the tree for the target node. Once the target is found, it collects nodes that are `k` levels away using `dfs_down`.

### Time Complexity:
- **O(n)**, where `n` is the number of nodes in the tree, because we may need to traverse the entire tree.

### Space Complexity:
- **O(n)**, where `n` is the number of nodes at the deepest level or the height of the tree (due to recursion stack and storage for the result).

## 💻 Code Implementation
- **Solution**: [distance_k_nodes.cpp](./Day36/distance_k_nodes.cpp)

## 📝 Learnings
- The problem can be solved by combining depth-first search (DFS) to find the target node and another DFS to find the nodes at distance `k`.
- Handling both left and right subtrees efficiently is key in this problem.

# Day 37: Distance K Nodes in a Binary Tree

On the thirty-seventh day of the **100 Days of DSA Challenge**, I solved the problem of finding all nodes at distance `k` from a target node in a binary tree.

## 📋 Problem Solved

### Distance K Nodes in a Binary Tree
- **Problem Statement**: Given a binary tree and a target node, find all nodes that are at distance `k` from the target node.

### Approach:
- **DFS Approach**:
  1. **Find the target node**: Perform a DFS search to find the target node in the tree.
  2. **Find nodes at distance k from the target**: Once the target node is found, use a helper function to collect all nodes that are `k` levels down from the target node.
  3. **Handle both subtrees**: If the target node is found in the left subtree, look at the right subtree for nodes at the required distance, and vice versa.
  
- **Helper Function** (`dfs`): This function explores all nodes `k` levels below a given node and collects their values.
- **Main Function** (`findTarget`): This function recursively searches the tree for the target node. Once the target is found, it collects nodes that are `k` levels away using `dfs`.

### Time Complexity:
- **O(n)**, where `n` is the number of nodes in the tree, because we may need to traverse the entire tree.

### Space Complexity:
- **O(n)**, where `n` is the number of nodes at the deepest level or the height of the tree (due to recursion stack and storage for the result).

## 💻 Code Implementation
- **Solution**: [distance_k_nodes.cpp](./Day37/distance_k_nodes.cpp)

## 📝 Learnings
- The problem can be solved by combining depth-first search (DFS) to find the target node and another DFS to find the nodes at distance `k`.
- Handling both left and right subtrees efficiently is key in this problem.

# Day 38: Path Sum in a Binary Tree

On the thirty-eighth day of the **100 Days of DSA Challenge**, I solved the problem of finding all paths in a binary tree that sum to a given target value.

## 📋 Problem Solved

### Path Sum in a Binary Tree
- **Problem Statement**: Given a binary tree and a target sum, find all paths from the root to leaf nodes where the sum of the node values along the path equals the target sum.

### Approach:
- **DFS Approach**:
  1. **DFS Traversal**: Use Depth First Search (DFS) to traverse the tree from root to leaf nodes.
  2. **Path Tracking**: Maintain a list of nodes for each path from root to leaf.
  3. **Backtracking**: As you explore each node, add its value to the current path and sum, and once a leaf node is reached, check if the sum matches the target. If so, store the path.
  4. **Backtrack**: After exploring a node, remove it from the current path (backtrack) and adjust the current sum.

- **Helper Function** (`findPathSum`): This function performs the DFS, passing along the current path and sum, and recursively explores both the left and right subtrees.

### Time Complexity:
- **O(n)**, where `n` is the number of nodes in the tree. We visit each node once.

### Space Complexity:
- **O(h)**, where `h` is the height of the tree, due to the recursion stack used in DFS and space for storing the path.

## 💻 Code Implementation
- **Solution**: [path_sum_binary_tree.cpp](./Day38/path_sum_binary_tree.cpp)

## 📝 Learnings
- The key to this problem is using DFS to traverse the tree and backtracking to find all valid paths that sum to the target.
  
# Day 39: Count Good Nodes in Binary Tree

On the thirty-ninth day of the **100 Days of DSA Challenge**, I solved the problem of counting "good" nodes in a binary tree.

## 📋 Problem Solved

### Count Good Nodes in Binary Tree
- **Problem Statement**: A node in a binary tree is considered a "good" node if, on the path from the root to that node, there are no nodes with values greater than the node's value. Given the root of a binary tree, count the number of "good" nodes in the tree.

### Approach:
- **DFS Traversal**:
  1. Use Depth First Search (DFS) to traverse the tree.
  2. Keep track of the maximum value (`maxi`) encountered along the current path.
  3. At each node, compare its value with `maxi`:
     - If the node's value is greater than or equal to `maxi`, it's a "good" node, and increment the count.
  4. Update `maxi` as the maximum of the current `maxi` and the node's value as you traverse deeper into the tree.
- The helper function `findGoodNode` recursively computes the count of "good" nodes for the left and right subtrees.

### Time Complexity:
- **O(n)**, where `n` is the number of nodes in the tree. Each node is visited once.

### Space Complexity:
- **O(h)**, where `h` is the height of the tree, due to the recursion stack used in DFS.

## 💻 Code Implementation
- **Solution**: [count_good_nodes.cpp](https://github.com/mdfaisal001/100DaysOfDSA/tree/main/100DaysOfDSA/Day39)

## 📝 Learnings
- The problem highlights how to manage path-specific conditions during a tree traversal.
- Efficiently updating and comparing values during recursion is key to solving such tree-based problems.

# Day 40: Vertical Order Traversal of a Binary Tree

On the fortieth day of the **100 Days of DSA Challenge**, I solved the problem of performing a vertical order traversal of a binary tree.

## 📋 Problem Solved

### Vertical Order Traversal of a Binary Tree
- **Problem Statement**:  
  Given the `root` of a binary tree, perform a vertical order traversal of the tree. Nodes at the same vertical level should be ordered by their row index first, and if two nodes are at the same row and column, they should be sorted by value.

### Approach:
- **DFS Traversal with Map Storage**:
  1. Use Depth First Search (DFS) to traverse the tree.
  2. Maintain a nested map structure `nodes`:
     - Outer map key: **Column index**.
     - Inner map key: **Row index**.
     - Value: **Multiset of node values** to automatically handle sorting.
  3. During DFS, update column and row indices for left and right child nodes:
     - Left child: `(row + 1, col - 1)`
     - Right child: `(row + 1, col + 1)`
  4. After traversal, extract the values from the map in column-wise order, aggregating them into the result.

### Time Complexity:
- **O(n log n)**:  
  Traversing all `n` nodes takes O(n), while inserting into the map involves sorting operations with a complexity of O(log n) for each insertion.

### Space Complexity:
- **O(n)**:  
  Space is used to store the map and the recursion stack for DFS.

## 💻 Code Implementation
- **Solution**: [vertical_traversal.cpp](./Day40/vertical_traversal.cpp)

## 📝 Learnings
- Understanding how to efficiently organize data during tree traversal was crucial.
- Multiset and nested map structures can simplify sorting and grouping operations in complex scenarios like vertical traversal.
- Practicing tree problems strengthens the understanding of recursion and multi-level data structures.

---
# Day 41: Populating Next Right Pointers in Each Node

On the forty-first day of the **100 Days of DSA Challenge**, I solved the problem of populating the next right pointers in each node of a binary tree.

## 📋 Problem Solved

### Populating Next Right Pointers in Each Node
- **Problem Statement**:  
  Given a binary tree, connect each node's `next` pointer to its next right node. If there is no next right node, the `next` pointer should be set to `NULL`. The traversal should be level-wise.

### Approach:
- **Level Order Traversal with a Queue**:
  1. Perform a level-order traversal of the tree using a queue.
  2. For each level:
     - Connect the `next` pointer of each node to the node at the front of the queue (if it exists).
     - Add the left and right child nodes of the current node to the queue for the next level.
  3. After processing all nodes, the tree is updated with the correct `next` pointers.

### Time Complexity:
- **O(n)**:  
  Each node is visited once.

### Space Complexity:
- **O(n)**:  
  A queue is used to store nodes at each level.

## 💻 Code Implementation
- **Solution**: [connect_next_pointers.cpp](./Day41/connect_next_pointers.cpp)

## 📝 Learnings
- Understanding level-order traversal and how queues can be used to process nodes level by level.
- Practiced connecting pointers in-place without using additional data structures for storing tree connections.
- This problem reinforced the concepts of BFS and queue-based traversal for tree problems.

---
# Day 42: Binary Tree Right Side View

On the forty-second day of the **100 Days of DSA Challenge**, I solved the problem of finding the right side view of a binary tree.

## 📋 Problem Solved

### Binary Tree Right Side View
- **Problem Statement**:  
  Given the root of a binary tree, return the values of the nodes that are visible when the tree is viewed from the right side. The right side view of the tree is the set of nodes that are visible when we look at the tree from the right.

### Approach:
- **Level Order Traversal (BFS)**:
  1. Perform a level-order traversal using a queue.
  2. For each level:
     - The rightmost node at that level will be visible from the right side, so we add it to the result.
  3. As we process nodes level by level, we ensure that the last node at each level is included in the result list.

### Time Complexity:
- **O(n)**:  
  Each node is visited once.

### Space Complexity:
- **O(n)**:  
  A queue is used to store nodes at each level, where `n` is the number of nodes in the tree.

## 💻 Code Implementation
- **Solution**: [right_side_view.cpp](./Day42/right_side_view.cpp)

## 📝 Learnings
- The problem reinforced the concept of level-order traversal (BFS) for tree problems.
- Understanding how to identify the rightmost node at each level of the tree and storing it for the final result.
- This solution emphasized the importance of using a queue for level-wise traversal in binary trees.

---
