class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;

        return (n&(n-1)) == 0;
    }
};


//    n  = 8
//16 8 4 2 1 
//0  1 0 0 0 --> n
//0  0 1 1 1 --> n-1
//0  0 0 0 0  (n) & (n-1) == zero means power of two