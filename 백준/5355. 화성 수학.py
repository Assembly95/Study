cnt = int(input())

for j in range(cnt):
    mars = input().split()
    number = float(mars[0])
    
    for i in range(1,len(mars)):
        if mars[i] == '@':
            number *= 3
        elif mars[i] == '%':
            number +=5
        elif mars[i] == '#':
            number -=7
            
    print("%.2f"%(number))

