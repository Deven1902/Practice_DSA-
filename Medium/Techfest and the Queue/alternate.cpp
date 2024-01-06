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
