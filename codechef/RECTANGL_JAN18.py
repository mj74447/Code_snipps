n = int(input())
t=0
while(t<n):
    t=t+1
    ls=[int(x) for x in input().split()]
    ls.sort()
    count=0
    for i in range(0,4,+2):
        if(ls[i]==ls[i+1]):
              count=count+1
        
    if(count==2):
            print("YES")
    else:
      
            print("NO")
