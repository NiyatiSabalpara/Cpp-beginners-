//link: https://leetcode.com/problems/powx-n/submissions/1706299684
class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n;
        if(x==1) return 1.0;
        if(x==0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n%2==0) return 1.0;
        if(x==-1 && n%2 != 0) return -1.0;
        if(n<0){
            x = 1/x;
            binForm = -binForm;
        }
        double ans=1;

        while(binForm>0){
            if(binForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }

        return ans;
    }
};
