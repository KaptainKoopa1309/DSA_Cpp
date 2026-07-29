## Problem Statement
https://leetcode.com/problems/two-sum/description/

## Approach
- utilized an unordered-map to store each value and its index
- for each value, iterated through the array to compute the complement
- performed a check to see if any complement matched the target number
- if a match was found, the pair of indeces were returned

## Complexity
Time: O(n)
- O(1) time to build hash-map and to compute each complement
- O(n) for the entire array

Space: O(n)
- hash-map has one entry for each element

## Concepts used:
- Hash Maps
- STL (unordered-map)
- Arrays
- Vectors

