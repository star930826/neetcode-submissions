class Solution {
private:
    int count(int n){
        int sum=0;
        while(n>0){
            int i=n%10;
            sum+=i*i;
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        int fast=n;
        int slow=n;

        do{
            fast=count(count(fast));
            slow=count(slow);
        }while(fast!=slow);

        return slow==1;
    }
};
