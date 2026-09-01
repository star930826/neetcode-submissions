class Solution:
    def isValid(self, s: str) -> bool:
        if len(s)%2 != 0:
            return False
        
        count = []
        for i in s:
            if i == ')':
                if not count:
                    return False
                a = count.pop()
                if a != '(':
                    return False
            elif i == '}':
                if not count:
                    return False
                a = count.pop()
                if a != '{':
                    return False
            elif i == ']':
                if not count:
                    return False
                a = count.pop()
                if a != '[':
                    return False
            else:
                count.append(i)

        return len(count) == 0
