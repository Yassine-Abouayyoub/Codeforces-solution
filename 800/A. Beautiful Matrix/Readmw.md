# A. Beautiful Matrix

This repository contains my solution for **A. Beautiful Matrix** from Codeforces.

## Problem Summary

You are given a **5×5 matrix** containing exactly one number **1**, while all other elements are **0**.

The goal is to make the matrix **beautiful**, meaning the number **1** must be placed in the center of the matrix (row 3, column 3).

You can perform one move by swapping two neighboring rows or two neighboring columns.

Your task is to find the **minimum number of moves** required.

## Approach

The solution works by:

1. Reading the 5×5 matrix.
2. Finding the position of the number **1**.
3. Calculating the distance from its current position to the center.

We use Manhattan distance:

|i - 2| + |j - 2|

Where:

- `i` = row index of **1**
- `j` = column index of **1**
- `(2,2)` = center position using zero-based indexing

## Why This Works

Each row move changes the row position by **1**.  
Each column move changes the column position by **1**.

So the minimum number of moves is simply:

- row distance + column distance

## Complexity

- **Time Complexity:** O(25)
- **Space Complexity:** O(1)

## Language

Implemented in **C**.