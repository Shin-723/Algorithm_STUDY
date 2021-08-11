price=int(input())
money=int(input())
count=int(input())
sum=0

for i in range(1,count+1):
    cost=price*i
    sum+=cost
result=sum-money
if result<0:
    print(0)
else :
    print(result)