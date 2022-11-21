students = {'Joe': 3.17,
            'Martha': 3.9,
            'Samantha':2.8,
            'Mark':3.1, 
            'Peter':4.0,
            'Alexa':'3.2'
             }


#find students by the the key- which is student name 
def findStudentByName(name):
    flag = False 
    
    gpa = students.get(name)
    #print(f'{name} has a gpa of {gpa}')
    

#find students based the value instead of the key, which is in this case gpa 
def findStudentByGPA(number):
    name = 'not Found'
    for name, value in students.items():
        if value == number:
            return(name)

#def addStudent(name, gpa):
 #   students[name.title()] = gpa 

#def deleteStudent(name):


   # students.pop(name, None) 


def deleteStudent(name):    
    found =   False

    for name, value in students.items():
        if value == name:
            students.pop(name, None)
            found=True
            break
    if (found):
      print(students)
    else:
        print('Sorry, name not found!')  

#starting point similar to main method in C++/Java 
key = 'Alexa'
gpa = 3.10
#findStudentByName(key)
#name = findStudentByGPA(gpa)
#print(f'The gpa is {gpa} and name is {name}')
#name = input("Enter student name to add to dictionary: ")
#gpa = input ("Enter student gpa: ")
#addStudent(name,gpa)
#print(students)
name = input("Enter the of student to be deleted: ")
deleteStudent(name)
print(students)