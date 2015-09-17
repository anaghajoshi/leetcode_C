/*
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Solution:
XOR to find out the number that occus odd number of times.
X ^ X = 0
X ^ X ^ Y = Y
*/
int singleNumber(int* nums, int numsSize) {
    int xor_arr =0 ;
    for (int i =0 ; i < numsSize ; i++){
        xor_arr = xor_arr ^ nums[i];
    }
return xor_arr;
    
}
