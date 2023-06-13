# string1 cat -> source
#string2 cut -> destination

src = input("Enter source string: ")
dest = input("Enter destination string: ")

if src == dest:
    print("Same")

ins = 0
rep = 0
de = 0


if len(src) > len(dest):
    de = len(src) - len(dest)
if len(src) < len(dest):
    ins = len(dest) - len(src)
for i in range(min(len(src),len(dest))):
    if src[i] != dest[i]:
        rep += 1

print("Insertions: ", de)
print("Deletions: ", ins)
print("Replacements: ", rep)
