class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if (x < 0) {
            x = -(long long)x;   // fix INT_MIN issue
            flag = -1;
        }

        long long ans = 0;

        while (x != 0) {
            int a = x % 10;
            ans = ans * 10 + a;
            x = x / 10;
        }

        if (flag == -1) {
            ans = -ans;
        }

        if (ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }

        return (int)ans;
    }
};
