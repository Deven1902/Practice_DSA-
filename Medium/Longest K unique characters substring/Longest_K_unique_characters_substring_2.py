# Sliding Window Approach 

'''
Understanding the Problem:

Given a string and an integer K, the task is to find the length of the longest substring that 
contains exactly K unique characters. This implies that the substring can have fewer than K unique 
characters, but not more. The goal is to determine the length of the maximum valid substring.

Approach:

To tackle this problem, we can employ a sliding window approach. 
The idea is to maintain a window that continuously expands until the number of unique characters 
within it exceeds K. 
Once the constraint is violated, we slide the window's left end to the right, 
reducing the window size until it satisfies the K unique characters condition again. 

During this process, we keep track of the maximum window length encountered, which will be our solution.

Below is the optimized Solution:- 
'''

class Solution:

    def longestKSubstr(self, s, k):
        # code here
        
        if k == 0:
            return 0
        
        char_freq = {}
        max_length = -1
        left = 0
        
        for right in range(len(s)):
            if s[right] not in char_freq:
                char_freq[s[right]] = 0
            char_freq[s[right]] += 1
            
            while len(char_freq) > k:
                char_freq[s[left]] -= 1
                if char_freq[s[left]] == 0:
                    del char_freq[s[left]]
                left += 1
            
            if len(char_freq)==k:
                max_length = max(max_length, right - left + 1)
        
        return max_length
