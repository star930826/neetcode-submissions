#include <string>
#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        //從兩端開始往內縮
        while(i<j){//右側比左側大
            while(i<j && !isalnum(s[i])){
                i++;
                //遇到空格就往前/後跳一格
            }
            while(i<j && !isalnum(s[j])){
                j--;
            }
            if(tolower(s[i]) !=tolower(s[j])){
                //不相同非迴文
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
