class Solution {
public:

    string encode(vector<string>& strs) {
        string temp;

        for (auto &x : strs) {
            temp += to_string(x.length());
            temp += ',';
        }

        temp += '#';

        for (auto &x : strs) {
            temp += x;
            temp += '#';
        }

        return temp;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        vector<int> sizes;

        int i = 0;

        // Step 1: extract sizes
        string num = "";
        while (s[i] != '#') {
            if (s[i] == ',') {
                sizes.push_back(stoi(num));
                num = "";
            } else {
                num += s[i];
            }
            i++;
        }

        i++; // skip '#'

        // Step 2: extract strings using sizes
        for (int size : sizes) {
            string word = "";

            for (int j = 0; j < size; j++) {
                word += s[i++];
            }

            ans.push_back(word);
            i++; // skip '#'
        }

        return ans;
    }
};