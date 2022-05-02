def bs(l,target,low=None,high=None):
    if low == None and high == None:
        low = 0
        high = len(l)-1
    
    if high < low:
        return print("bsn")
    
    midpoint=(high+low)//2
    
    if target == l[midpoint]:
        print("bs")
    elif target < l[midpoint]:
        bs(l,target,low,midpoint-1)
    else:
        bs(l,target,midpoint+1,high)
        
l=[2,3,4,5,6,7,8,9,10]
target=6

bs(l,target)
