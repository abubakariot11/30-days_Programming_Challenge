import random

def guess_number():
    secret_number = random.randint(1, 10)
    
    while True:
        try:
            guess = int(input("Guess the number between 1 and 10: "))
            if guess < 1 or guess > 10:
                print("Please enter a number between 1 and 10.")
                continue
            if guess == secret_number:
                print("Congratulations! You guessed the number.")
                break
            else:
                print("Wrong guess. Try again!")
        except ValueError:
            print("Please enter a valid number.")

guess_number()
