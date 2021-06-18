# A. Arithmetic Array

> https://codeforces.com/contest/1537/problem/A

An array b of length k is called good if its arithmetic mean is equal to 1. More formally, if
b1+⋯+bkk=1.
Note that the value b1+⋯+bkk is not rounded up or down. For example, the array [1,1,1,2] has an arithmetic mean of 1.25, which is not equal to 1.

You are given an integer array a of length n. In an operation, you can append a non-negative integer to the end of the array. What's the minimum number of operations required to make the array good?

We have a proof that it is always possible with finitely many operations.

Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases. Then t test cases follow.

The first line of each test case contains a single integer n (1≤n≤50) — the length of the initial array a.

The second line of each test case contains n integers a1,…,an (−104≤ai≤104), the elements of the array.

Output
For each test case, output a single integer — the minimum number of non-negative integers you have to append to the array so that the arithmetic mean of the array will be exactly 1.