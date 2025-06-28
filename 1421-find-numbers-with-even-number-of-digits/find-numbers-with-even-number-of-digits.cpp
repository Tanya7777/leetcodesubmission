class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int freq=0;
        for(int i=0; i<nums.size(); i++){
            int n = to_string(nums[i]).length();
           
            if(n%2==0) {
                freq++;
            }

        }
        return freq;

    }
};