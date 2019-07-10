"""This code is implimented to count number of jumps an element has done to dislocate from its original position (its index)
constrain::element can jump at max 2 step , but here 2 single swap takes place during 2 step jump"""



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

            
