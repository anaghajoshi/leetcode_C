/*
Reverse bits of a given 32 bits unsigned integer.

For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

Solution is to check each bit at a time and then copy it
*/

uint32_t reverseBits(uint32_t n) {
    uint32_t new = 0;
    for (int i = 0; i < 32; ++i) {
        new = (new << 1) | (n & 0x01);
        n = n >> 1;
    }
    return new;
}
