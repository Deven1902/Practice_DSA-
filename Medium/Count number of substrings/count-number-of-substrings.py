#User function Template for python3

'''
Approach

We'll use a sliding window approach and a dictionary to track character counts within the window. Here's the step-by-step approach:

1. Initialize a counter for the substrings (count), an empty current substring (current_substring), a dictionary to track character counts (character_count), and the starting index of the current substring (start_index).

2. Iterate through the input string, adding characters to current_substring and updating character_count accordingly.

3. While the count of distinct characters in character_count exceeds k, remove characters from the start of the substring and update character_count. This step ensures that we maintain exactly k distinct characters within the current window.

4. Increment count by the length of the current substring (end_index - start_index + 1) at each iteration. This accounts for all valid substrings with exactly k distinct characters ending at the current index.

5. Return the count as the final result.

'''

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

# time complexity:- O(n)  -> N is the length of the input string.

# space complexity:- O(K) -> K is the number of distinct characters allowed (given as input)
