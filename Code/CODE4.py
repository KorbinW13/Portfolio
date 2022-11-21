file1 = list(open('list1.txt').read().split())  # opening the file 1 and storing it in a list 
file1_sorted = file1.sort()  # then sorting it 
print("File 1") # then printing 
print(file1)
print("File 1 sorted")
print(file1_sorted)
print("Number of words:",len(file1))

file2 = list(open('list2.txt').read().split()) # opening file 2 
print("File 2") # then printing it 
print(file2)
file2_sorted = file2.sort()
print("File 2 sorted")
print(file2_sorted)
print("Number of words:",len(file2)) # also printing the number of words 

file3 = file1 + file2 # then adding both the list 
temp = open("output file.txt","w") # then writing it into a file 
temp.write(" ".join(file3))
print("File 3")
print(file3)
print("Number of words:",len(file3)) # finally printing that also 