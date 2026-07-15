class Solution {
public:
    int numDecodings(string s) {
        if(s.empty() ||s[0] == '0')return 0;
        int s1=1;//前一格
        int s2=1;//前兩格(因為兩個兩個跳 所以要看的是前兩格數量有多少)
        for(int i=1;i<s.size();i++){
            int count=0;
            if(s[i]!='0') count+=s1;//只會有1~9 只要不是1 count就加上一格繼承的數量

            int two_digit =(s[i-1]-'0')*10+s[i]-'0';//跳兩格的時候要算是不是在範圍哩，因此要進行字源轉數字
            if(two_digit>=10 &&two_digit<=26) count+=s2;

            if(count==0) return 0; //兩個都行不通代表數字斷掉沒辦法組成正確的英文 直接回傳0

            s2=s1;
            s1=count;//往前挪
        }
        return s1;
    }
};
