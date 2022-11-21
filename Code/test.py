list1= [1,2,3,4,5,6,7,8,9,10]
list1.sort(reverse=True)
for i in list1:
    if i % 2 ==1:
        print('Largest odd number is ', i)
        break