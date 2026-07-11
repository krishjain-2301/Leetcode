class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
        long temp=x;
        long k=0;
        while(x>0){
        long j=x%10;
        x=x/10;
        k=k*10+j;
        }
        if(temp==k){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
    }
};