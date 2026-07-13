class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> last_seen;
        int max_length=0;
        int left=0;
        for(int right=0;right<s.size();right++){
            char current_char=s[right];
            if(last_seen.count(current_char)){
                left=max(left,last_seen[current_char]);
            }
            int current_length=right-left+1;
            max_length=max(max_length,current_length);
            last_seen[current_char]=right+1;
        }
        return max_length;
    }
};
