#User function Template for python3

class Solution:
	def Count(self, matrix):
		# Code here
		
		n, m= len(matrix), len(matrix[0])

        ans = 0
        for i in range(n):
            for j in range(m):
                if matrix[i][j] == 0:
                    continue
                r = [-1, -1, -1,
                      0,      0,
                      1,  1,  1]
                c = [-1,  0,  1,
                     -1,      1,
                     -1,  0,  1]
                count = 0
                for k in range(8):
                    _i = i + r[k]
                    _j = j + c[k]
                    if 0<=_i<n and 0<=_j<m and matrix[_i][_j] == 0:
                        count += 1
                ans += 1 if count != 0 and count % 2 == 0 else 0

        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, m = input().split()
		n = int(n); m = int(m);
		matrix = []
		for _ in range(n):
			matrix.append(list(map(int,input().split())))
		ob = Solution()
		ans = ob.Count(matrix)
		print(ans)

# } Driver Code Ends