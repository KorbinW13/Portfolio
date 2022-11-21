def findAverage(file1):
    total, count = 0.0, 0
    try: 
        readf = open(file1,"r")
        for row in  readf: 
            num = float(row.rstrip())
            count+=1 
            total += num
        mean = total/count
        readf.close 
        return mean
    except FileNotFoundError:
        print("Can not find the file... ")
    except IOError:
        print(f"Error read or write form file {file1}")

# this is the starting point where the code executes 
file1 = 'C:/Temp/Python/Nov 16/values.txt'
mean = findAverage(file1)
print(f"The average of the values in {file1} is {mean:.2f}")