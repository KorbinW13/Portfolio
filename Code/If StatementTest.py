# Considering 10 MCQ questions

def get_results(students_answers, answer_key):

results = []

for i in range(len(students_answers)):
if(students_answers[i] == answer_key[i]):
results.append("Y")
else:
results.append("N")

return results

def get_correct_answers(results):

count = 0

for i in results:
if(i == "Y"):
count = count + 1

return count

def main():
students_answers = ["A", "C", "D", "F", "A", "T", "B", "D", "B", "T"] # Sample Data

answer_keys = ["B", "C", "D", "T", "A", "T", "B", "D", "C", "F"]
  
results = get_results(students_answers, answer_keys)

numberOfQuestions = len(students_answers)

numberOfCorrectAnswers = get_correct_answers(results)

print()
print("*************** Result ***************")
print()

print("Que. No | Student Answer | Correct Answer")

for i in range(numberOfQuestions):
if(results[i] == "N"):
print("{:^8}|{:^16}|{:^16}".format((i + 1), students_answers[i], answer_keys[i]))

print()

print("The number of the questions that were answered: " + str(numberOfQuestions))
print("The number of correct answers: " + str(numberOfCorrectAnswers))
print("The number of incorrect answers: " + str(numberOfQuestions - numberOfCorrectAnswers))

score = (numberOfCorrectAnswers/numberOfQuestions) * 100

print("Student score: " + str(score) + "%")

Grade = ""

if(score >= 90 and score <= 100):
Grade = "A"
elif(score >= 80 and score <= 89):
Grade = "B"
elif(score >= 70 and score <= 79):
Grade = "C"
elif(score >= 60 and score <= 69):
Grade = "D"
elif(score >= 0 and score <= 59):
Grade = "F"

print("Student Grade: " + Grade)

if __name__ == "__main__":
main()