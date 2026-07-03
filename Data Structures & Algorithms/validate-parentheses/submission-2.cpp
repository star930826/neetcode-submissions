class Solution {
public:
    bool isValid(string s) {
        stack<char> bucket;
        if(s.size()%2!=0){
            return false;
        }
        for(char c:s){
            if(c=='('||c=='['||c=='{'){
                bucket.push(c);
            }
            else{
                if(bucket.empty())return false;
                char top=bucket.top();
                if(c==')'&&top=='('||c==']'&&top=='['||c=='}'&&top=='{'){
                    bucket.pop();
                }
                else return false;
            }
        }
        return bucket.empty();
    }
};
