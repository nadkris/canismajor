class palindrome {
public:
    bool npalindrome (int x) {
        int num = abs(x);
        int num1 = 0;
        bool rv = false;
        
        if (x < 0) {
            return false;
        }
        
        while (num) {
            num1 = num1 * 10 + num % 10;
            num /= 10;
        }
        
        if (x == num1) {
            rv = true;
        }
        
        return rv;
    }
};
