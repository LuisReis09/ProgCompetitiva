def passo1(str):
    for i in range(len(str)):
        if str[i].isalpha():
            str = str[:i] + chr(ord(str[i]) + 3) + str[i+1:]
    
    return str

def passo2(str):
    return str[::-1]

def passo3(str):
    for i in range(len(str)//2, len(str)):
        str = str[:i] + chr(ord(str[i]) - 1) + str[i+1:]
    
    return str


n = int(input())

for i in range(n):
    str = input()
    str = passo3(passo2(passo1(str)))
    print(str)