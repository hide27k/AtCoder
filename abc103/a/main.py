N = list(map(int, input().split()))
N.sort()

print(N[2] - N[1] + N[1] - N[0])