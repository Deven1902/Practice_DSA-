# Fraction pairs with sum 1

# Given a list of N fractions, represented as two lists numerator and denominator, the task is to determine the count of pairs of fractions whose sum equals 1.

# Below is a python solution


import math
from collections import defaultdict

class Solution:
    def countFractions(self, n, numerator, denominator):
        # Your code here
        li = defaultdict(int)
        ans = 0
        for x, y in zip(numerator, denominator):
            z = math.gcd(x, y)
            x = x//z
            y = y//z
            if (y - x, y) in li:
                ans += li[(y - x, y)]
            li[(x, y)] += 1
        return ans

