from collections import deque

bridge_length = input()
weight = input()
truck_weights = deque(map(int, input().split()))

while len(truck_weights) >0:
    if weight > truck_weights[0]:
