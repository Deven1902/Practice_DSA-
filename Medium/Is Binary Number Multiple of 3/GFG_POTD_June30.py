#User function Template for python3
class Solution:
	def isDivisible(self, s):
		# code here
		
	  #  Approach :- 
		  #  convert the binary string into integer. 
		  #  check if it is divisible. 
		    
		n = int(s,2) #convert binary to int.
		
		if n%3==0:
		    return 1
		    
	    return 0
