class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> number;
        for(const string& token :tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                int b =number.top();
                number.pop();
                int a =number.top();
                number.pop();
                if(token=="+")number.push(a+b);
                if(token=="-")number.push(a-b);
                if(token=="*")number.push(a*b);
                if(token=="/")number.push(a/b);
                
            }
            else number.push(stoi(token));
        }
        return number.top();
    }
};
