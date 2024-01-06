class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    int sum = 0;
        for (int i = a; i <= b; i++) {
            int num = i, prime = 2, power = 0;
            while (num > 1) {
                while (num % prime == 0) {
                    num /= prime;
                    power++;
                }
                sum += power;
                prime = prime == 2 ? 3 : prime + 2;
                
                // Reset power for the next ticket number
                power = 0; // This line has been added as per the suggestion
            }
            
        }
        return sum;
	}
};

// this solution is giving a TLE error, and hence shifting to a solution where i seperate the two functionalities. 

// time complexity:- O(n log n). 

	// The outer loop runs from a to b, where a and b are the given input parameters.
	// The inner loop factorsize each number in the range. The inner loop's complexity is determined by the number of prime factors of each number.
	// The while loop factors each number, and it runs until the number becomes 1. In the worst case, this is similar to the time complexity of the prime factorization of the number.
	// The prime factorization of a number up to n takes approximately O(log n) operations.
	// Therefore, the overall time complexity is O((b - a + 1) * log b). 
	
// space complexity:- O(1) 
	// constant space by all the declared variables. 
