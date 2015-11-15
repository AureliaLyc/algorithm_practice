int singleNumber(int A[], int n) {
    int ones = 0, twos = 0, threes = 0;
    for (int i = 0; i < n; i++) {
        // 与ones进行与后，得到的就是在第i个书来了之后，每个出现2次的bit
        twos |= ones & A[i];
        // 与第i个数异或后，相同的为0，就是说，如果曾经出现了1，又来一个1，那就变成0，因为已经在twos里面记录它了
        // 而如果曾经出现1，第i个数里面为0，那当然还是1
        // 而如果还没有出现过，第i个数里面它是1，那当然要记录为1
        // 如果还未出现过，第i个数里面它也没出现，那自然维持0不变。
        ones ^= A[i];
        // 如果在ones里面记录了，在twos里面也记录了，那这些就是应该用threes记录的
        threes = ones & twos;
        // 如果在threes里面记录了，就要将ones里面和twos里面都抹掉。
        ones &= ~threes;
        twos &= ~threes;
    }
    return ones;
}