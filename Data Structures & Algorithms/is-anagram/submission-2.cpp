class Solution {
//複習
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s!=t){
            return false;
        }
        return true;
    }
    
};
