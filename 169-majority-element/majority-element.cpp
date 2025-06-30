class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int candit = nums[0];
         int count=1;
         for(int i=0; i<nums.size(); i++){
            if(nums[i]== candit){
                count ++;
            }else{
                count--;
            }

            if(count==0){
                candit = nums[i];
                count=1;
            }
         }
            return candit;
         }
        
};