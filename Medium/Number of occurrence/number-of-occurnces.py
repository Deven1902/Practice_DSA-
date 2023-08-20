class Solution:

	def count(self,arr, n, x):
		# code here
		
		dic={}
	    for i in arr:
	        if i not in dic:
	            dic[i]=1
	        else:
	            dic[i]+=1
	    if x in dic:
	        return dic.get(x)
	    else:
	        return 0
