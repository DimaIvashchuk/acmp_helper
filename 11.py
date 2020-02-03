k, n = map(int, input().split())

arr = [0] * 301

arr[0] = 1

i = 1
n+=1
while i < n:
    j = 1
    while j <= min(k, i):
        arr[i] = arr[i] + arr[i - j]
        j+=1
    i+=1

print(arr[n - 1])

