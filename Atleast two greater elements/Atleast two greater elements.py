#Find No of elements in an array which have atleast two greater elements
def atleasttwo(a):
  #Eliminates duplicate elements
  a = list(set(a))
      
  #Sorting an array
  a.sort()
  
  print("No of Elements:",len(a)-2)
  for i in range(len(a)-2):
    print(a[i])
  print("element have atleast two element greater than them")

arr=[]
n= int(input("Enter the Number of Integer:"))

for i in range(n):
  arr.append(int(input()))

atleasttwo(arr)

Scn 1:
Enter the Number of Integer:5
1
5
6
3
6
No of Elements: 2
1 	
3 	
 element have atleast two element greater than them