# Day 5: January 27, 2024

# Arrays - Searching & Sorting (8.1 - 8.4)

## Introduction
- size of int - 4 bytes
```c++
#include <climits>
int arr[4] = {1,2,4,4};

// For finding max min in array 
// better to initialise as follows
int maxNo = INT_MIN;
int minNo = INT_MAX;
// max inbuilt function
maxNo = max(maxNo, arr[i]);
```

## Searching

- Linear Search $O(n)$
- ### Binary Search 
- $O(log n)$

## Sorting
#### Selection Sort
- Swap the minimum element in the unsorted array with the first element of the unsorted array recursively
- $O(n^2)$

### Bubble Sort
- Repeatedly swap each element with the next element if they are in the wrong order
- why Bubble? because the last element, after every complete iteration over the array, is the maximum and is fixed at the end. Like a bubble rises to the surfacee, it gets its position and rises
- $O(n^2)$

### Insertion Sort
- Insert an element in the unsorted array to its correct position in the sorted array 
- $O(n^2)$

## SubArray vs SubSequence
### SubArray
- Subarray is a continuous part of the array.
- Note: Number of subarrays of an array with $n$ elements $ = {n \choose 2} + n = {\frac{n(n+1)}{2}}$.

### Subsequence 
- A subsequence is a sequence that can be derived from an array by selecting zero or more elements, without changing the order of the remaining elements.
- Note: Number of subsequences of an array with n elements = $2^n$

## Array Challenges - lecture 8.4 

### Q1 
- for each i , 0 to n-1, output the max (a[0], a[1],...a[i])

### Q2
- Print sum of all subarray possible

### Q3 ** Google kickstart
- print the length of the longest arithmetic subarray

### Q3 ** Google kickstart
- output the number of record breaking days in an event


