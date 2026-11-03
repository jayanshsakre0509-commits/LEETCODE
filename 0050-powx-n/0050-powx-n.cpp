class Solution {
public:
    double myPow(double x, int n) {
        long long power = n; // Use long long to safely handle INT_MIN
        
        // If the power is negative, make it positive for the calculation
        if (power < 0) {
            power = -power;
        }
        
        double result = 1.0;
        double current_product = x;
        
        // Binary Exponentiation (O(log n))
        while (power > 0) {
            if (power % 2 == 1) { // If the current bit is odd
                result *= current_product;
            }
            current_product *= current_product; // Square the base
            power /= 2;                         // Halve the power
        }
        
        // Apply the negative exponent rule at the very end to protect precision
        if (n < 0) {
            return 1.0 / result;
        }
        
        return result;
    }
};
