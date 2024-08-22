x,y=map(int,input().split())
if(x%10>y%10):
    print(y,x)
elif(x%10<y%10):
    print(x,y)
else:
    print(max(x,y),min(x,y))
