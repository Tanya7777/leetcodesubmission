class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;

        for(int i=0;i<size-2;i++){
          if(nums[i] + nums[i+1] > nums[i+2]){
             ans= nums[i] + nums[i+1] + nums[i+2];
           cout <<ans;
          }

        }
        return ans;

    }
};