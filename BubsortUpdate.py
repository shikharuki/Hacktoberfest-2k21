l=[3,23,5,77,45,5,2,15]
for j in range(len(l)-1):
  for i in range(0,len(l)-1-j):
    if(l[i]>l[i+1]):
      t=l[i]
      l[i]=l[i+1]
      l[i+1]=t
