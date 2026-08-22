class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int count=0;
        int pro=1;
        while(x>0){
            int digit=x%10;
            count+=digit;
            pro*=digit;
            x/=10;
        }
        return (n%(count + pro)==0);
    }
};