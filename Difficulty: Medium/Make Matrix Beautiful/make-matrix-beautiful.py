class Solution:
    def balanceSums(self, mat):
        # code here
        row_max = max([ sum(arr) for arr in mat ])
        col_max = max([ sum(arr) for arr in zip(*mat) ])
        target_sum = max(row_max, col_max)
        # how much to add to each row
        return sum(target_sum - sum(arr) for arr in mat)