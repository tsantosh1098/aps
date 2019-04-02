# cook your dish here
t=int(input())

a={'a','e','i','o','u'}
arr = []
for i in range(40):
    arr.append(0)
for i in range(t):
    l=[]
    n=int(input())
    cnt=0
    cc=0
    for j in range(n):
        flag=1
        s=sorted(set(input()))
        for i in range(len(l)):
            if set(s)==set(l[i]):
                arr[i]=arr[i]+1
                flag=0
        if flag==1:
            l.append(s)
            arr[cc]=1
            cc=cc+1
    for j in range(len(l)):
        m=j
        for k in range(m,len(l)):
            if j!=k:
                z=set()
                z.update(l[k])
                z.update(l[j])
                if set(a)==set(z):
                    cnt=cnt+arr[k]*arr[j]
    print(cnt)
    print(arr)
                
            
    
    