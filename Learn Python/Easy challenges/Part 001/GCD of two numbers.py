a = int(input())
b = int(input())
def gcd(a,b):
    while b:
        a,b=b,a%b
    print(a)
gcd(a,b)