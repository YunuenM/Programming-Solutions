first = []
f = input()
for i in range(len(f)):
    if f[i] != ' ':first.append(f[i])
second = []
s = input()
for i in range(len(s)):
    if s[i] != ' ':second.append(s[i])
second.sort()
first.sort()
if first == second:print('Is an anagram.')
else:print("Is not an anagram.")
