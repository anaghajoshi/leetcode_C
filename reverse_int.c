/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

Solution is to use % and get the last digit and then *10 to move and add next digit

Known bug: Can't Handle overflow 

If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.

Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?

For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.


*/
int reverse(int x) {
    int r =0;
    while (x != 0)
   {
      r = r * 10;
   r = r + x % 10;
   x=(x/10);
   
   }
   return r;
}
