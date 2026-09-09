class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        count = Counter(tasks)
        max_freq = max(count.values())
        max_count = 0

        for i in count.values():
            if i == max_freq:
                max_count += 1

        result = (max_freq - 1) * (n + 1) + max_count
        return max(len(tasks),result)
        