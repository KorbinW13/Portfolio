from os import readlink
def searchFile(file1, inputValue):
    result = False # to initalize that the value is not in the file 
    try: 
        read = open(file1, "r")
        for row in read: 
            if inputValue in row: 
                result =  True # the search string is found in the current row being read from the file 
            return result 
    except FileNotFoundError: 
        print(f'The file named {read} is not found')




#starting point 
file1 = "C:/Temp/Python/Nov 16/items.txt"
inputValue = input("What are you looking for inside the file enter one word:")

result = searchFile(file1, inputValue)
if result: # implied if result == True 
    print (f"There is {inputValue} in the file {file1}")
else:
    print(f"There is no {inputValue} in the file {file1}")