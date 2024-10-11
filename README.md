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
