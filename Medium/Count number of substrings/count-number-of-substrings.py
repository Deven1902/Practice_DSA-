#User function Template for python3

class Solution:
    def count_substrings_with_k_distinct_characters(self, s, k):
        count = 0  # Initialize a counter for the substrings
        current_substring = ''  # Initialize an empty current substring
        character_count = dict()  # Initialize a dictionary to track character counts
        start_index = 0  # Initialize the starting index of the current substring


        for end_index in range(len(s)):
            current_substring += s[end_index]  # Add the current character to the substring
            character_count[s[end_index]] = character_count.get(s[end_index], 0) + 1


            while len(character_count) > k:
                # Remove characters from the start of the substring until we have 'k' distinct characters
                first_char = s[start_index]
                if character_count[first_char] == 1:
                    del character_count[first_char]
                else:
                    character_count[first_char] -= 1
                start_index += 1
                current_substring = current_substring[1:]


            count += (end_index - start_index + 1)  # Increment the count based on substring length


        return count
   
    def substrCount (self,s, k):
        # your code here
        
        return self.count_substrings_with_k_distinct_characters(s, k) - self.count_substrings_with_k_distinct_characters(s, k - 1)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    s = input ()
    k = int (input ())
    ob = Solution()
    print (ob.substrCount (s, k))
# } Driver Code Ends