class Solution {
    public: string reverseWords(string & s) {
        int n = s.size();
        vector < string > ans;
        string word;
        int i = 0;
        while (i < n && s[i] == ' ') i++;
        for (; i < n; i++) {
            if (s[i] == ' ') {
                if (i > 0 && s[i - 1] == ' ') {
                    continue;
                }
                ans.push_back(word);
                word.clear();
            } else {
                word.push_back(s[i]);
            }
        }

        if (!word.empty()) {
            ans.push_back(word);
        }
        string str;
        for (int i = ans.size() - 1; i > -1; i--) {
            str += ans[i];
            if (i > 0) {

                str.push_back(' ');
            }
        }
        return str;
    }
};