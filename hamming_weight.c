/*
Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).

For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.

Solution: When one is asked the number of one's in an int then the formula or method to use is Hamming Weight.
*/
int hammingWeight(uint32_t n) {
    int count;
    for (count=0; n; count++)
        n &= n-1;
    return count;
}
