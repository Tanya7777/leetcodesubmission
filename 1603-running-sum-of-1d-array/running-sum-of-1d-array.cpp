class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int> sum;
       int result=0;
       for(int i=0;i<nums.size(); i++){
        result +=nums[i];
        sum.push_back(result);

       }
       return sum;
    }
};