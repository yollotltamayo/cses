n = input()
arr = [int(x) for x in input().split(' ')]
abc = {}
ma, cta, i = 0 , 0, 0
while i < len(arr):
    if arr[i] in abc:
        ma = max(cta , ma)
        cta = i - abc[arr[i]]
        print(arr[i]," -> ",cta)
        abc[arr[i]] = i
        i += 1
    else:
        abc[arr[i]] = i
        cta += 1
        i += 1
print(max(cta,ma))



