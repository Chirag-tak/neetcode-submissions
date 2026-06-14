class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto x:strs){
            s+= to_string(x.length());
            s+=',';
        }
        s+='#';
        for(auto x:strs){
            s+=x;
            s+='#';
        }
        return s;
    }
    

    vector<string> decode(string s) {
       vector<string> ans;
       vector<int> sizes;
       int i=0;
       string temp="";
       while(s[i]!='#'){
        if(s[i]==','){
            sizes.push_back(stoi(temp));
            temp="";
        }
        else{
            temp+=s[i];
        }
        i++;
       }
       i++;
        for(auto x:sizes){
            string temp="";
            for(int j=0;j<x;j++){
            temp+=s[i++];
            }
            ans.push_back(temp);
            i++;
        }
        return ans;
       }
    };
