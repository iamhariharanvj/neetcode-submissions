class Solution {
public:
    bool isPalindrome(string s) {
        int left =0, right = s.size();

        while(left<=right) {
            char a = s[left], b = s[right];
            if (a<='Z' && a>='A') a = a-'A'+'a';
            if (b<='Z' && b>='A') b = b-'A'+'a';
            if (!((a<='z' && a>='a') || (a>='0' && a<='9'))) {
                left++;
                continue;
            }
            if (!((b<='z' && b>='a') || (b>='0' && b<='9'))) {
                right--;
                continue;
            }
            if (a!=b) return false;
            left++;
            right--;
        }

        return true;
    }
};
