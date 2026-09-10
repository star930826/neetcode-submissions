class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people = sorted(people)
        right = len(people) - 1
        left = 0
        count = 0
        while right >= left:
            if people[right] + people[left] > limit:
                count += 1
                right -= 1
            else:
                count += 1
                right -= 1
                left += 1
        return count