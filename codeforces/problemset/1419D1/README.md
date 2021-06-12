# D1. Sage's Birthday (easy version)

> binary search, constructive algorithms, greedy, sortings

> https://codeforces.com/problemset/problem/1419/D1

This is the easy version of the problem. The difference between the versions is that in the easy version all prices ai are different. You can make hacks if and only if you solved both versions of the problem.

Today is Sage's birthday, and she will go shopping to buy ice spheres. All n ice spheres are placed in a row and they are numbered from 1 to n from left to right. Each ice sphere has a positive integer price. In this version all prices are different.

An ice sphere is cheap if it costs strictly less than two neighboring ice spheres: the nearest to the left and the nearest to the right. The leftmost and the rightmost ice spheres are not cheap. Sage will choose all cheap ice spheres and then buy only them.

You can visit the shop before Sage and reorder the ice spheres as you wish. Find out the maximum number of ice spheres that Sage can buy, and show how the ice spheres should be reordered.

Input
The first line contains a single integer n (1≤n≤105) — the number of ice spheres in the shop.

The second line contains n different integers a1,a2,…,an (1≤ai≤109) — the prices of ice spheres.

Output
In the first line print the maximum number of ice spheres that Sage can buy.

In the second line print the prices of ice spheres in the optimal order. If there are several correct answers, you can print any of them.