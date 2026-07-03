class Solution {
public:
    bool isValid(string s) {
        stack<char> barket;
        if(s.size()%2!=0){
            return false;
        }
        for(char c:s){
            if(c=='('||c=='['||c=='{'){
                barket.push(c);
            }
            else{
                if(barket.empty())return false;
                char top=barket.top();
                if(c==')'&&top=='('||c==']'&&top=='['||c=='}'&&top=='{'){
                    barket.pop();
                }
                else return false;
            }
        }
        return barket.empty();
    }
};
