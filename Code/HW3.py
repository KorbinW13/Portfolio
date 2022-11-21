import json
#random intergers
count = 0
result = 0

#code that allows me to read answerKey
with open("answerKey.json", "r") as x:
	answers = json.load(x)

#Total Score
def score(count):
    print(f"{QuestNum} Questions answered.")
    print (f"Total Correct: {count}")
    incorrect = (QuestNum) - count
    print (f"Total Incorrect: {incorrect}")
    result = round((count/(QuestNum))*100)
    print (f"Total percentage: {result}%")

#Letter Grade Function
def letterGrade(result):
    if result >= 90:
        print ("Congratulations, You got an A")
    elif (result <=89) and (result >= 80):
        print ("You got a B")
    elif (result <= 79) and (result >=70):
        print("You got a C")
    elif (result <=69) and (result >=60):
        print("You got a D")
    elif result <= 59:
        print ("You got an F")
    
#Main Quesiton Code
with open("studentAnswers.json", "w") as outfile:
    for i in range(len(answers)):
        answer = input("\nQuestion " + str(i+1) + "\nWhat is your answer?\nPlease enter A, B, C, D or T, F: ")
        if answer.lower() == answers[i]:
            print ("Correct")
            count = count + 1
            json.dump(answer, outfile)    
        else:
            print ("Wrong")
            json.dump(answer, outfile)
QuestNum = i+1


score(count)
letterGrade(result)

#dump Results to result.json
with open('result.json', 'w') as t:
    ResultFile = {}
    ResultFile['Results']= []
    ResultFile['Results'].append({
        "Questions Answered": QuestNum,
        "Total Correct": count,
        "Total Incorrect": QuestNum-count,
        "Total Percentage": f"{round((count/(QuestNum))*100)}%",
    })
    json.dump(ResultFile, t)