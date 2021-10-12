l=[1,2,3,4,45,65,2,15]
for j in range(len(l)-1):
  for i in range(0,len(l)-1-j):
    if(l[i]>l[i+1]):
      t=l[i]
      l[i]=l[i+1]
      l[i+1]=t
print(l)
