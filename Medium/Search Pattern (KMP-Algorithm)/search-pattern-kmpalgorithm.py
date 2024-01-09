class Solution:
    def search(self, pat, txt):
        # code here
        
        # this is brute force, and it works
        n=len(pat)
        ans=[]
        for i in range(len(txt)-n+1):
            if txt[i:i+n]==pat:
                ans.append(i+1)
        return ans

# Time Complexity:

# O(M * N), where M is the length of the pattern pat and N is the length of the text txt.
# The outer loop iterates N - M + 1 times, checking each possible starting position of the pattern in the text.
# Inside the loop, the substring comparison txt[i:i+n] == pat takes O(M) time in the worst case (when the characters match).
# This leads to a total of (N - M + 1) * M = O(M * N) comparisons in the worst case. 

# Space Complexity:

# O(P + Q + Z), where P is the length of the pattern, Q is the length of the text, and Z is the number of occurrences of the pattern in the text.
# The space is used for:
# Storing the pattern pat and the text txt.
# The ans list to store the indices of pattern occurrences, which can grow up to Z elements in the worst case.
# Variables for loop counters and temporary values, which take constant space.

# Key Points:

# The time complexity is relatively high due to the nested loops and substring comparisons.
# The space complexity is also linear, mainly due to the potential size of the ans list.
# More efficient algorithms for pattern searching exist, such as the Knuth-Morris-Pratt (KMP) algorithm, which has a time complexity of O(M + N) and a space complexity of O(M).
