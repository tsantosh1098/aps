t=int(input())
flg=0
for j in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    cnt=0
    
    for i in range(n):
        i=n-i-1
        if arr[i]!=i+1:
            if i-1 >= 0 and i+1 == arr[i-1]:
                d=i-1
                arr[i-1]=arr[i]
                arr[i]=i+1
                cnt+=1
                # print(arr)
            elif i-2 >= 0 and i+1 == arr[i-2]:
                arr[i-2]=arr[i-1]
                arr[i-1]=arr[i]
                arr[i]=i+1
                cnt+=2
                # print(arr)
            else:
                print("Too chaotic")
                flg=1
                break
            
            
    if flg==0:
        print(cnt)
    else:
        flg=0

            
