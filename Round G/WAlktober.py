t=int(input())
for i in range(t):
    m,n,p=map(int,input().split())
    d=[0]*n
    store=[]
    for j in range(1,m+1):
        a=list(map(int,input().split()))
        if p==j:
            store=a
        for k in range(n):
            d[k]=max(d[k],a[k])
    s=0     
    for j in range(n):
        s+=abs(store[j]-max(store[j],d[j]))
    print("Case #",i+1,":",sep='',end=" ")
    print(s)
