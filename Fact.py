str_num = input()                  # Reading input from STDIN
int_num = int(str_num)
result = 1
for i in range(int_num):
    result = result*int_num
    int_num = int_num-1

print(result)         # Writing output to STDOUT
