class Solution {
public:
    bool isPalindrome(int x) {
        int z=x;
        int rem,rev = 0;
        constexpr int top_limit = INT_MAX/10;
        constexpr int bottom_limit = INT_MIN/10;
        for(;x>0;) {
            if (rev > top_limit || rev < bottom_limit)
                return 0;
            rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }
        if(z==rev)
            return true;
        else
            return false;
        
    }
};
