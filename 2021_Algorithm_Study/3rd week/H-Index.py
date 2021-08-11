citation=list(map(int,input().split()))
n= len(citation)
count=[]
ans=[]
for i in range(n):
    cnt=0
    for j in range(n):
        if citation[i] <= citation[j]:
           cnt+=1
    count.append(cnt)
for i in range(n):
    for j in range(n):
        if citation[i] <= citation[j] and citation[i]<=count[i]:
            ans.append(citation[i])
        elif citation[i] <= citation[j]:
            ans.append(count[i])
if len(ans)==0:
    ans.append(0)
ans.sort(reverse=True)
print(ans[0])