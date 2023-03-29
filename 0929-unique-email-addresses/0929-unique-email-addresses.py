class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        res = []
        for i in emails:
            local_name , domain_name = i.split("@")
            new_email = ""
            for j in local_name:
                if j == '.':
                    continue
                elif j == '+':
                    break
                else:
                    new_email += j
            new_email = new_email+"@"+domain_name
            res.append(new_email)
        res = set(res)
        return len(res)