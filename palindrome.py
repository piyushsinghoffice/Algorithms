import math

name = input()                  # Reading input from STDIN
flag = "No"
n = len(name)-1

for i in range(math.floor(len(name)/2)):
    if(name[i] != name[n-i]):
        flag = "No"
        break
    else:
        flag = "Yes"

print(flag)         # Writing output to STDOUT