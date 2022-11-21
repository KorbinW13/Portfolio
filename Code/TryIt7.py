#Summary Statistics sample partial code
def median(list1):
    numbers = []
    for number in list1:
        numbers.append(number)
    numbers.sort()
    if len(numbers)==0:
        return 0
    else:
        midpoint = len(numbers)//2
        if len(numbers)%2==1:
            return numbers[midpoint]
        else:
            return (numbers[midpoint] + numbers[midpoint - 1])/2

def mode(list1):
    #use a dictitonary
    theDicitionary = {}
    for number in list1:
        freq = theDicitionary.get(number, None)
        if freq == None:
            theDicitionary[number]= 1
        else:
            theDicitionary[number]= freq + 1
    if len(theDicitionary)==0:
        return 0
    else:
        theMaximum = max(theDicitionary.values())
        for key in theDicitionary:
            if theDicitionary[key]==theMaximum:
                return key

def mean(list1):
    return sum(list1) / len(list1)

#The execution starts here
#7,13,16,8,6,9,14
list1 = []
num_ele = int(input("Enter number of elements in the list: "))
for i in range (0, num_ele):
    ele = int(input("Enter number: "))
    list1.append(ele)
print("Summary Statistics:")
print("The original list:",list1)
print("The Mode:", mode(list1))
print("The Median:", median(list1))
print("The Mean:", mean(list1))