class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.k = k
        self.array = nums
        

    def add(self, val: int) -> int:
        self.array.append(val)
        self.array = sorted(self.array)
        return self.array[-self.k]
        


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)