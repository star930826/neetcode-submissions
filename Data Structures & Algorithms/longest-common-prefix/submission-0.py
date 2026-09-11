class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ''
        
        base_str = strs[0]
        
        for i in range(len(base_str)):
            char = base_str[i]

            for j in range(1, len(strs)):
                if i == len(strs[j]) or strs[j][i] != char:
                    return base_str[:i]

        return base_str