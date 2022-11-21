password = 'goodone'
noMatch = True
attempts = 0
n = 4
while noMatch and attempts<n:
    attempts+=1
    print('Enter your password.')
    typedPassword = input()
    if typedPassword == password:
        print('Access Granted')
        noMatch = False
        break
    else:
        print('Access Denied- try again')