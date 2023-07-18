# Smallest Multiple

This problem is a programming version of Problem 5 from [projecteuler.net](https://projecteuler.net).

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible (divisible with no remainder) by all of the numbers from 1 to N?

## Input Format

The first line contains an integer T that denotes the number of test cases. This is followed by T lines, each containing an integer N.

## Constraints

* 1 <= T <= 10
* 1 <= N <= 40

## Output Format

Print the required answer for each test case.

## Sample Input

```
2
3
10
```

## Sample Output

```
6
2520
```

## Explanation

For N = 3, the smallest positive number that is divisible by each of {1, 2, 3} is 6. The quotients are {6, 3, 2} respectively.

For N = 10, the smallest positive number that is divisible by each of {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} is 2520. The quotients are {2520, 1260, 840, 630, 504, 420, 360, 315, 280, 252} respectively.
