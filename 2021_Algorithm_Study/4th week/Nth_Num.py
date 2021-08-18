import heapq

n=int(input())
arr=[]
for i in range(n):
  arr.append(list(map(int, input().split())))

heap=[]
for i in range(n):
  for j in range(n):
    heapq.heappush(heap,arr[i][j])
    if len(heap)>n:
      heapq.heappop(heap)

print(heapq.heappop(heap))