class Solution {
public:
    int reverse(int x) {
        int num=x;
      long rev=0;
        while(x != 0){
        int ld=x%10;
        rev=(rev*10) + ld;

        if(rev > INT_MAX)return 0;
        if(rev < INT_MIN)return 0;
        x=x/10;
        }
     return rev;
    }
};