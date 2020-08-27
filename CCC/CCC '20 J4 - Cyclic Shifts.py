import sys
S = input()
T = input()

if T in S:
    print("yes")
    sys.exit()
for i in range(len(T)-1):
    T = T[1:]+T[0]
    if T in S:
        print("yes")
        sys.exit()
print("no")
