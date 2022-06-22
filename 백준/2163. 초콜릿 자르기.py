N, M = map(int,input().split()) #N가로, M세로
if M > N:
    temp = N
    N = M
    M = temp
cnt = (M-1) + M * (N-1)
print(cnt)
