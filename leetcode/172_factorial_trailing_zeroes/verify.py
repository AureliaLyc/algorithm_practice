import string, re

a = range(1,201)

num = 1
for i in range(1,201):

    num *= i
    n = str(num)
    m = re.match(r"\d+?(0*)$", n)
    print("{:>4d}".format(i)),
    print "\t :", m.group(1)




