# D. Deleting Divisors

> https://codeforces.com/contest/1537/problem/D

Alice and Bob are playing a game.

They start with a positive integer n and take alternating turns doing operations on it. Each turn a player can subtract from n one of its divisors that isn't 1 or n. The player who cannot make a move on his/her turn loses. Alice always moves first.

Note that they subtract a divisor of the current number in each turn.

You are asked to find out who will win the game if both players play optimally.

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

Each test case contains a single integer n (1≤n≤109) — the initial number.

Output
For each test case output "Alice" if Alice will win the game or "Bob" if Bob will win, if both players play optimally.