import os

os.system("./main.exe 5 10 > output.txt")
f = open("output.txt", "r")
content = f.read()
if "-1.065217" in content:
    print("test PASS")
else:
    print("test FAIL")