def fib(n):
    a,b=0,1
    for  i in range(0,n):
        print(a,end=" ")
        a,b=b,a+b
x = int(input())
fib(x)
       