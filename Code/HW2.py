#Korbin Wampler
import random
number = random.randint(1,100)
attempts = 0
guess = int

while guess != number:
    guess = int(input('Enter your guess as an integer between 1 and 100 : '))
    if guess < number:
        print('No, it is a little higher than that')
        attempts += 1
    elif guess > number:
        print('No, it is a little lower than that')
        attempts += 1

if guess == number:
    print('Congratulations, you guessed it.')
    print(f'The number of attempts is: {attempts}')
