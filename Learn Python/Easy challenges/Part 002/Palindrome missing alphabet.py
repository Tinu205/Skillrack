pal = input()
pal_li = list(pal)
j=len(pal_li)-1
for i in range(len(pal_li)):
    if(pal_li[i]!=pal_li[j]):
        if(pal_li[i]==pal_li[j-1] and i!=j-1):
            print(pal_li[j])
            break
        else:
            print(pal_li[i])
            break
    j-=1