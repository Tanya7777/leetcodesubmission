class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=0; j< n; j++){
               int result = 2*arr[j];
               if(i!=j && result == arr[i]){
                return true;
               } 
            }
        }
        return false;
    }
};