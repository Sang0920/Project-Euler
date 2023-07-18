# Largest Palindrome Product

This problem is a programming version of Problem 4 from [projecteuler.net](https://projecteuler.net).

A palindromic number reads the same both ways. The smallest 6-digit palindrome made from the product of two 3-digit numbers is $101101 = 143 \times 707$.

Find the largest palindrome made from the product of two 3-digit numbers which is less than $N$.

## Input Format

The first line contains an integer $T$ that denotes the number of test cases. This is followed by $T$ lines, each containing an integer $N$.

## Constraints

* $1 \leq T \leq 100$
* $101101 \leq N \leq 1000000$

## Output Format

Print the required answer for each test case on a new line.

## Sample Input

```
2
101110
800000
```

## Sample Output

```
101101
793397
```

## Explanation

For $N = 101110$, the largest palindrome made from the product of two 3-digit numbers less than $N$ is $101101 = 143 \times 707$.

For $N = 800000$, the largest palindrome made from the product of two 3-digit numbers less than $N$ is $793397 = 869 \times 913$.
