#Try it 8: Using the dictionary data type
#A contact list consisitng of name and phone numbers
# dictionary of name/number pairs
contact = {'Mary' : '9185160629', 
           'Lisa' : '4052359241',
           'Jasmine' : '9182515122',
           'Simmon' : '9183334411',
           'John' : '9185551234',
           'Julia' : '9185552233',
           'Warren' : '4055551617',
           'Bill' : '4055555678'}

def lookupName(number): #for given contact number, return name
    for name, num in contact.items():
        if num == number:
            return name

def lookupNumber(name): #for given contact name, return number
    number = contact.get(name)
    return number

def addContact(name, phone):
    contact[name.title()] = phone

def deleteContactName(delname):
    del contact[delname]

def deleteContactNumber(number):
    for name, num in contact.items():
            if num == number:
                contact.pop(name, None)
                break


# look up a number to find a name when number is not in dictionary
number = input('Enter the number of contact: ')
name = lookupName(number)
print(f'{name}: {number}')
contactName = input("Enter name of a new contact: ")
contactNumber = input("Enter phone number of contact: ")
addContact(contactName,contactNumber)
name = input("Enter the name of contact you want to search for: ")
number = lookupNumber(name)
print(f'{name}: {number}')
delname = input("Enter name of contact you wish to delete: ")
deleteContactName(delname)
number = input("Enter the number you wish to delete: ")
deleteContactNumber(number)
print(contact)