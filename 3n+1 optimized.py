#number that the operations will be done on
num = 3
#the same number saved for end to calculate next number
nums=num

while True:
 while num != 1:

  #calculates (main core)
  if(num%2==0):
   num = num/2
  else:
   num = num*3+1
   
  #detects loop
  if(num==nums):
     print("number %s looped" % nums)
     break

  #optimization
  if(num<nums):
   num = 1

  #changes to next number (with optimizations)
 if(nums%100000000==1):
   print("%s reached 1" % nums)
 num = nums + 2
 nums=num