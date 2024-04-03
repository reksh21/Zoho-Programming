#Function to find Maximum product of triplets
def triplets(a,n):
  product = 1
  maxprod = float('-inf')
  for i in range(n):
    for j in range(i+1,n):
      for k in range(j+1,n):
        product = a[i]*a[j]*a[k]
        if product > maxprod:
          maxprod = product
  print("Maximum product of triplets: ", maxprod)

#Get No of Integer from User
n= int(input("Enter the No of Integer: "))

#Initialize an Empty Array
arr=[]

#Get n Inputs from User
for i in range(n):
  arr.append(int(input()))

#Print the Given Array
print("Given Array:",arr)

#Calling the Triplet Funtion
triplets(arr,n)

Scn 1:
Enter the No of Integer: 5
10
3
5
6
20
Given Array: [10, 3, 5, 6, 20]
Maximum product of triplets:  1200

Scn 2:
Enter the No of Integer: 5
-10
-3
-5
-6
-20
Given Array: [-10, -3, -5, -6, -20]
Maximum product of triplets:  -90

Scn 3:
Enter the No of Integer: 6
1
-4
3
-6
7
0
Given Array: [1, -4, 3, -6, 7, 0]
Maximum product of triplets:  168
