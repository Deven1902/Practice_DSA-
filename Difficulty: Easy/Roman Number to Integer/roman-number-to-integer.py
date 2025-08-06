class Solution:
    def romanToDecimal(self, s): 
        # code here 
        
        # ans = prev = 0
        # roman_map = {'I':1, 'IV': 4, 'V': 5, 'X': 10, 'XL': 40, 'l': 50, 'XC': 90, 'C': 100, 'CD': 400, 'D': 500, 'CM': 900, 'M': 1000} 
        
        # i = 0 
        # while i<len(s):
        #     if i+1<len(s) and s[i:i+2] in roman_map: 
        #         ans += roman_map[s[i:i+2]]
        #         i += 2 
                
        #     else: 
        #         ans += roman_map[s[i]]
        #         i += 1
        
        # return ans 
        
        ans=prev=0
        roman_map = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        for i in reversed(s):
            value = roman_map[i]
            if value < prev:
                ans -= value
            else:
                ans += value
                prev = value
        return ans