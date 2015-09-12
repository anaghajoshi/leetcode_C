/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime?

Solution: Use Digital root formula:
for a given number n, 
the sum of digits is given by 
n - 9 * floor((n-1)/9)
*/

int addDigits(int num) {
    int result=0;
    result = num - 9 * floor((num-1)/9);
    return result;
}
