# D. String Searching

> https://codeforces.com/contest/1533/problem/D

You are given an array s consisting of n different strings. Each string consists of m lowercase Latin letters.

You have to respond to q queries. Each query contains a string t of length m+1. Count the number of indices i, such that the string t can be obtained from the string si, if it is allowed to insert one letter in an arbitrary position.

Input
The first line contains two integers n and m (1≤n≤105; 1≤m≤10) — the number of strings in the array and the length of each string.

The following n lines contain strings si. All of the given strings are different.

The next line contains a single integer q (1≤q≤105) — the number of queries.

The following q lines contain query strings t of length m+1.

Output
For each query, print the number of indices i, such that a string from the query can be obtained from the string si, if it is allowed to insert one letter in an arbitrary position.