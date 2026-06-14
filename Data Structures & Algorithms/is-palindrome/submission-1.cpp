// class Solution {
// public:
//     string remove_spaces(string s){
//         string ans;
//         for(int i=0;i<s.length();i++){
//             if(s[i]==' '){
//                 continue;
//             }
//             if(isalnum(s[i]))
//             ans+=tolower(s[i]);
//         }
//         return ans;
//     }
//     bool isPalindrome(string s) {
//         s=remove_spaces((s));
//         int n=s.length();
         
//      for(int i=0;i<n/2;i++){
//         if(s[i]!=s[n-i-1]) return 0;

//      }  
//      return 1; 
//     }
// };
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;

        while(l < r) {
            while(l < r && !isalnum(s[l])) l++;
            while(l < r && !isalnum(s[r])) r--;

            if(tolower(s[l]) != tolower(s[r]))
                return false;

            l++;
            r--;
        }

        return true;
    }
};