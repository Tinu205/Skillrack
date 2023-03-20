x,y = map(int,input().split())
rep,mul=0,1
while rep<10:
    if mul%x ==0 or mul%y==0:
        print(mul,end=" ")
        rep+=1
    mul+=1
        
    