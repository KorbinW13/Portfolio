#Korbin Wampler

list1 = open('list1.txt').read().split()
list2 = open('list2.txt').read().split()
list3 = []

def printedList(list1,list2):
    print("Input:")
    print(f"Unsorted List 1 {list1}")
    print(f"Unsorted List 2 {list2}\n")

printedList(list1,list2)
#Needed to Seperated sorted and non sorted code
list1_sorted = list1.sort()
list2_sorted = list2.sort()


def sortList(list1,list2):
    print("Output:")
    print("Sorted List 1")
    print(list1)
    print("Number of words:",len(list1),"\n")
    print("Sorted List 2")
    print(list2)
    print("Number of words:",len(list2),"\n")


def combinedList(list3):
    list3 = list1 + list2
    output = open("output file.txt","w")
    output.write(" ".join(list3))
    print("Combined List")
    print(list3)
    print("Number of words:",len(list3),"\n")

sortList(list1,list2)
combinedList(list3)