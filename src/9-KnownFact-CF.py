A, B = [int(ele) for ele in input().split(' ')]

fact = 1
for i in range(min(A, B) + 1, max(A, B) + 1):
    fact *= i

print(fact)
