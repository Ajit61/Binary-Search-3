class Solution {
public:
    //TC-O(LOGn)
    double myPow(double x, int n) {
        double ans=1.0;
        long long nn=n;
        if(nn<0)nn=-1*nn;
        while(nn){
            if(nn%2==0){
                nn=nn/2;
                x=x*x;
            }
            else if(nn%2==1){
                nn=nn-1;
                ans=ans*x;
            }
        }
        if(n<0)ans=double(1.0)/double(ans);
        return ans;
    }
};