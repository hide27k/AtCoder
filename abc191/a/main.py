N = list(map(int, input().split()))
if (N[3] / N[0]) >= N[1] and (N[3] / N[0]) <= N[2]:
  print("Yes")
else:
  print("No")