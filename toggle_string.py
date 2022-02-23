name = input()                  # Reading input from STDIN
string = ""
for i in range(len(name)):
    # print(name[i].upper())
    if name[i].isupper():
        string += name[i].lower()

    elif name[i].islower():
        string += name[i].upper()

print(string)         # Writing output to STDOUT
