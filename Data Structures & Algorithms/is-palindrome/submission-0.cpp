class Solution {
public:
    string remove_spaces(string s){
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                continue;
            }
            if(isalnum(s[i]))
            ans+=tolower(s[i]);
        }
        return ans;
    }
    bool isPalindrome(string s) {
        s=remove_spaces((s));
        int n=s.length();
         
     for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) return 0;

     }  
     return 1; 
    }
};
