plainText = 'Tulsa Oklahoma'
shift = 5
cipher = ''
size = len(plainText)
for i in range(len(plainText)):
    char = plainText [i]
    if (char.isupper()):
        cipher+= chr((ord(char) + shift - 65) % 26 + 65)
    else:
        cipher+= chr((ord(char) + shift - 97) % 26 + 97)
print(f'Plain plainText : {plainText}')
print(f'The number of shifts is {shift}')
print(f'The Caeser Cipher: {cipher}')