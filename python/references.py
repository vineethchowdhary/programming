#!/usr/bin/env python


#Demonstrate immutable reference

a = 3
b = a
a = 4

print "a=%d , b=%d" % (a,b)


#Mutable references

list_1 = [1,2]
list_2 = list_1  #It will only assign reference
list_1.append(3)

print "list_1=%s , list_2=%s" % (list_1,list_2)

#Mutable references to copy object

list_3 = [1,2]
list_4 = list_3[:] # This will copy entire object into new location
list_3.append(3)

print "list_3=%s , list_4=%s" % (list_3,list_4)

