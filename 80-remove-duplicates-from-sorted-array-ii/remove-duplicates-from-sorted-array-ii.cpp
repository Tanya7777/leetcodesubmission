class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        int r=0;

        while(r<nums.size()){
            int count = 1;
            while(r+1<nums.size() && nums[r]==nums[r+1]){
                r+=1;
                count+=1;
            }

         int cnum = min (2,count);   
        for(int i=0; i<cnum; i++){
                nums[l] = nums[r];
                l+=1;
        }
                r+=1;
        }
        return l;
    }
};