#Find Longest consecutive subset
def longcons(a,n):
  a.sort()
  print("Sorted Array",a)
  final_cons_len=1
  cons_len=1
  start_index=0
  final_start_index=0
  final_end_index=0
  for i in range(n-1):
    if a[i+1]==a[i]+1:
      cons_len+= 1
    else:
      if cons_len>final_cons_len:
        final_start_index = start_index
        final_end_index = i
        final_cons_len = cons_len
        cons_len=1
        start_index = i+1
  print(
    f"Starting Index: {final_start_index}"
    f"\nEnding Index: {final_end_index}"
    f"\nLength of the Longest consecutive subset: {final_cons_len}"
  )
  print(f"Longest consecutive subset: {a[final_start_index:final_end_index+1]}")
  
n = int(input("Enter No of Integer:"))
arr = []
for i in range(n):
  arr.append(int(input()))

print("Given Array:",arr)

longcons(arr,n)

Scn 1:
Enter No of Integer:7
1
7
4
6
5
10
2
Given Array: [1, 7, 4, 6, 5, 10, 2]
Sorted Array [1, 2, 4, 5, 6, 7, 10]
Starting Index: 2
Ending Index: 5
Length of the Longest consecutive subset: 4
Longest consecutive subset: [4, 5, 6, 7]

Scn 2:
Enter No of Integer:7
1
7
4
6
3
10
2
Given Array: [1, 7, 4, 6, 3, 10, 2]
Sorted Array [1, 2, 3, 4, 6, 7, 10]
Starting Index: 0
Ending Index: 3
Length of the Longest consecutive subset: 4
Longest consecutive subset: [1, 2, 3, 4]