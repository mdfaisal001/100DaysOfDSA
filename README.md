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

- **Separate Negative and Positive Numbers**: [separate_neg_pos.cpp](./Day4/separate_neg_pos.cpp)

## 📝 Learnings

- The two-pointer technique is a powerful tool for efficiently solving problems related to partitioning arrays.
- This problem helped reinforce my understanding of in-place algorithms and constant space optimizations.
- It was a practical exercise in manipulating array indices and swapping values.

---

Excited to continue the journey and tackle more challenging problems in the upcoming days!
