class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        return 0;
        if(x<=3){
            return 1;
        }

    int st=1,e=x/2;
    int mid;
    while(st<=e){
        mid=ceil((st+e)/2);
        if((long)mid*mid<(long)x){
            st=mid+1;
        }
        else if((long)mid*mid>(long)x){
            e=mid-1;
        }
        else{
            return mid;
        }
    }
    if((long)mid*mid>(long)x){
        return mid-1;
    }
    return mid;
    }
};