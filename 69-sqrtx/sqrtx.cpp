class Solution {
public:
    int mySqrt(int n) {
        int s=0,e=n;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long curr= 1LL* mid*mid;
            if(curr==n)  return mid;
            else if(curr<n)    s=mid+1;
            else    e=mid-1;
        }return s-1;
    }
};