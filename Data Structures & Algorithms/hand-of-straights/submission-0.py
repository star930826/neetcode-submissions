class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        if len(hand) % groupSize != 0:
            return False

        count = Counter(hand)

        for start in sorted(count):
            while count[start]>0:
                for num in range(start,start+groupSize):
                    if count[num] == 0:
                        return False
                    
                    count[num] -= 1
                
        return True