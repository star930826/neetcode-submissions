class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
            //長度不一樣不可能相等
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        //兩個用sort排好
        if(s!=t){
            //排好後直接比看看一不一樣
            return false;
        }
        return true;
    }
};
