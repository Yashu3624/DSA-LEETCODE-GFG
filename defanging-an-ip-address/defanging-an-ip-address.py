class Solution:
    def defangIPaddr(self, address: str) -> str:
        res = []
        for i in range(len(address)):
            if address[i]!=".":
                res.append(address[i])
            else:
                res.append("[.]")
        return "".join(res)