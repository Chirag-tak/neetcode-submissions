class Solution {
public:
    bool isValid(string s) {
        if (s.length()==1){
            return 0;
        }
        if (s.length()==0){
            return 1;
        }
        stack<char> str;
        bool flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{' || s[i]=='['|| s[i]=='('){
                str.push(s[i]);
            }
            if(str.empty()){return 0;}
            if(s[i]=='}' || s[i]==']'|| s[i]==')'){
                 if((abs(s[i]-str.top())==1)||(abs(s[i]-str.top())==2)){
                    str.pop();
                 }else{
                    flag=1;
                 }
            }
        }
        if(str.empty() && flag==0){return 1;}
        return 0;
    }
};
