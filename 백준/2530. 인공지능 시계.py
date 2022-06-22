time, minute, second = map(int,input().split())
need_second = int(input())

second = second + need_second
minute = minute + second // 60
second = second % 60
time = time + minute // 60
minute = minute % 60
time = time % 24

print(time, minute, second)
