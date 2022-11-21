#Korbin Wampler
symbolFreq = []
def analyze(message,symbol):
      
    for location in range (29):

        symbolFreq.append(0)
        location += 1
    #converts message string to listLength
    listLength=[]
    message= message.lower()
    print(message)
    for char in message:
        listLength.append(char)
    n = len(listLength) +0.0

    #calculate frequency of each symbol
    for item in listLength:
        count=0
        while count < 29:
            if item == symbol[count]:
                symbolFreq[count] += 1 
            count +=1         
    
    freq_list = []

    for count in symbolFreq:
        formatF = "{:.2%}".format(count/n)
        freq_list.append(formatF)
    return freq_list



#main

symbol = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ',',','.']

message = "Oklahoma is a state in the South Central and Southern\
Plains region of the United States, bordered by the state of Texas on the south \
and west, Kansas on the north, Missouri on the northeast, Arkansas on the east, \
New Mexico on the west, and Colorado on the northwest."



result=analyze(message, symbol)
noletters = sum(symbolFreq)

print(f'letter \t freq \t %') #11 is the ASCII decimal for tab and 10 for line feed
count=0
for freq in result:
    index= result.index(freq)
    print(f' {symbol[count]}\t {chr(14)} {symbolFreq[count]}\t {freq} ')
    count +=1
    
print(f'Total Number of symbols count {noletters}')