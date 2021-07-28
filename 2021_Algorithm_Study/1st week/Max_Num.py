nums = list(map(int, input().split()))
nums = list(map(str, nums))
nums.sort(key=lambda x: x * 3, reverse=True)
print(nums)
print(str(int(''.join(nums))))
# Snums=[]

# for i in range(len(nums)):
#     if nums[i] >= 100:
#         Snums.append(nums[i]/100)
#     elif nums[i] >= 10:
#         Snums.append(nums[i]/10)
#     else :
#         Snums.append(nums[i])
# Snums.sort()
# Snums.reverse()
# for i in range(len(Snums)-1):
#     if Snums[i] == Snums[i+1] and type(Snums[i]) != type(Snums[i+1]):
#         tmp = Snums[i]
#         Snums[i] = Snums[i+1]
#         Snums[i+1] = tmp
# for i in range(len(Snums)):
#     for j in range(len(nums)):
#         if Snums[i]==nums[j] and type(Snums[i]) is int:
#             Snums[i]=nums[j]
#         elif Snums[i]*10==nums[j] and type(Snums[i]) is float:
#             Snums[i]=Snums[i]*10
#         elif Snums[i]*100==nums[j] and type(Snums[i]) is float:
#             Snums[i]=Snums[i]*100
#     Snums[i] = int(Snums[i])
# print(Snums)
# print(''.join(map(str, Snums)))
