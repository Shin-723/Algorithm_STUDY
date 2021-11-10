n = int(input())
plus_list = []
minus_list = []
for i in range(n):
    a = int(input())
    plus_list.append(a) if a > 0 else minus_list.append(a)

plus_list.sort()
minus_list.sort(reverse=True)

plus = 0
for i in range(len(plus_list)-1, -1, -2):
    if len(plus_list) % 2 == 0:
        if plus_list[i] != 1 and plus_list[i-1] != 1:
            plus += (plus_list[i] * plus_list[i-1])
            plus_list.pop()
            plus_list.pop()
        else:
            plus += plus_list[i] + plus_list[i-1]
            plus_list.pop()
            plus_list.pop()
    else:
        if len(plus_list) != 1:
            if plus_list[i] != 1 and plus_list[i-1] != 1:
                plus += (plus_list[i] * plus_list[i-1])
                plus_list.pop()
                plus_list.pop()
            else:
                plus += plus_list.pop()
        else:
            plus += plus_list.pop()

minus = 0
for i in range(len(minus_list)-1, -1, -2):
    if len(minus_list) % 2 == 0:
        minus += (minus_list[i] * minus_list[i-1])
        minus_list.pop()
        minus_list.pop()
    else:
        if len(minus_list) != 1:
            minus += (minus_list[i] * minus_list[i-1])
            minus_list.pop()
            minus_list.pop()
        else:
            minus += minus_list.pop()
print(plus + minus)