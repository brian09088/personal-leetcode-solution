class Solution {
public:
    vector<string> fullJustify(vector<string> &words, int L) {
        vector<string> res;
        int i = 0;
        while (i < words.size()) {
            int j = i, len = 0;
            while (j < words.size() && len + words[j].size() + j - i <= L) {
                len += words[j++].size();
            }
            string out;
            int space = L - len;
            for (int k = i; k < j; ++k) {
                out += words[k];
                if (space > 0) {
                    int tmp;
                    if (j == words.size()) { 
                        if (j - k == 1) tmp = space;
                        else tmp = 1;
                    } else {
                        if (j - k - 1 > 0) {
                            if (space % (j - k - 1) == 0) tmp = space / (j - k - 1);
                            else tmp = space / (j - k - 1) + 1;
                        } else tmp = space;
                    }
                    out.append(tmp, ' ');
                    space -= tmp;
                }
            }
            res.push_back(out);
            i = j;
        }
        return res;
    }
};
