class Solution {
public:
    int sum(int num1, int num2) {
        int s;
        constexpr int top_limit = 100;
        constexpr int bottom_limit = -100;
        s=num1+num2;
        if (num1,num2 > top_limit || num1,num2 < bottom_limit)
        return 0;
        else
        return s;
        
    }
};
