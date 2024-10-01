class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int i=0;
         //int count=0;
        int n = nums.size();
        int c= n/2;
        for(i=0; i<n;i++){
             int count=0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    count++;
            }
            }
            if(count >c){
                return nums[i];
            }   
        }
        return 0;  
    }
};