i=0
my_list=[1,2,32,4,5]
def RecursivePrint(my_list): 
   if  i>len(my_list)-1: 
       return 
   else: 
       print(my_list[i],end="")
       RecursivePrint(my_list[i+1:])
RecursivePrint(my_list)
