def hashfunction(key): 
  sum=0
  for i in key: 
    sum+=ord(i)
  return sum%100
hashtable=[]
def insertkey(key,value): 
  hashkey=hashfunction(key)

  return hashtable[hashkey].append(value)
