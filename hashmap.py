def hashfunction(key): 
  sum=0; 
  for i in key: 
    sum+=ord(i)
  return sum%100
print(hashfunction('march90'))
Hashtable=[[] for i in range(100)]
def insertvalue(Hashtable,keyvalue,key): 
  index=hashfunction(key)
  Hashtable[index].append(keyvalue)
