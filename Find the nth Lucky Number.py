#Find the nth Lucky Number in the series 4,7,44,47,74,77,.........
n = int(input("Enter position of Lucky Number:"))
i=1
position =0
flag =0
while(position<n):
  Num =i
  while(Num>0):
    if(Num%10==4 or Num%10==7):
      Num = Num//10
      flag =1
    else:
      flag=0
      break
  if flag==1:
    position =position+1
  i=i+1
  
print(n,"th Lucky Number is ",i-1)

Scn 1:
Enter position of Lucky Number:4
4 th Lucky Number is  47