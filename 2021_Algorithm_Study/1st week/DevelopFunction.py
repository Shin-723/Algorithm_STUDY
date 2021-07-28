from collections import deque
progress = list(map(int, input().split()))
speeds = list(map(int, input().split()))
deq = deque()
for i in range(len(progress)):
    day = 1
    while progress[i] + speeds[i] < 100:
        progress[i] += speeds[i]
        day += 1
    deq.append(day)
ans = []
while 0< len(deq):
    j = 1
    count = 1
    while j < len(deq):
        if deq[0] > deq[0+j]:
            j += 1
            count += 1
        elif deq[0] <= deq[0+j]:
            break
    # print(count)
    ans.append(count)
    # print(deq)
    for k in range(count):
        deq.popleft()
    # print(deq)
print(ans)
