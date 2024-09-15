class Solution {
    public int totalHammingDistance(int[] nums) {
        int n = nums.length;
        int ans =0;
        for(int i = 0; i<n; i++) {
            for(int j = i+1;j<n;j++) {
                int xor = nums[i] ^ nums[j];
                int bit = Integer.bitCount(xor);
                ans += bit;
            }
        }
        
    return ans;
        
    }
}