/*G. Simple Problem
time limit per test2 seconds
memory limit per test512 megabytes
One day, Polycarp came up with the following simple problem: the numbers 0,1,…,n−1
 are given. Is it possible to arrange them so that the absolute difference of every adjacent pair of numbers is divisible by at least one of the numbers k1,k2,…,km
?

Polycarp spent a long time thinking about how to solve this problem and eventually realized that it is not so simple after all. Help him solve this problem.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤103
). The description of the test cases follows.

The first line of each test case contains two integers n
 and m
 (3≤n≤5⋅103
; 1≤m≤10
).

The second line of each test case contains m
 integers ki
 (1≤ki≤⌊n3⌋
).

Additional constraints on the input:

the sum of n
 over all test cases does not exceed 5⋅103
.
Output
For each test case, output one of the following:

-1 on a single line if no suitable arrangement exists;
n
 integers 0,1,…,n−1
 satisfying the condition. If there are multiple answers, print any of them.
Example
InputCopy
2
10 2
2 3
6 1
2
OutputCopy
0 2 6 8 4 1 3 5 7 9 
-1

*/