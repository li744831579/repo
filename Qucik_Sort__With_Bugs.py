import sys
reload(sys)
#-------------------------------------------------------------------------------  
# Name:        Sort.py  
# Purpose:  
#  
# E-mail:      zhenboye@gmail.com  
# Created:     14-06-2014  
#-----------------------------------------------------------------------  

import random

def partion(array, left, right):
   i=left; j=right;
   temp = array[i];   
   while i<j:
      while  i<j and array[j]>=temp:   
         j=j-1
      if i<j:                         
         array[i]=array[j]  
         i=i+1
      while i<j and array[i]<=temp:  
         i=i+1
      if i<j:
         array[j]=array[i]
         j=j-1
   array[i] = temp;  
   print(array)
   return i

def quick_sort(sortarray, left, right):
   if left<=right:        
      #pivot=partion(sortarray, left, right)
      #partion(sortarray, left, pivot-1)
      #partion(sortarray, pivot+1, right)

      pivot=partion(sortarray, left, right)
      quick_sort(sortarray, left, pivot-1)
      quick_sort(sortarray, pivot+1, right)

      
################################ 
if __name__ == '__main__':
   Array=[42, 76, 84, 30, 25, 63, 65, 48, 76, 76]
   print("primer Content:%s"%Array)
   quick_sort(Array,0,len(Array)-1)
   print("\nAfter sorted:",Array)


      











   
      
   
