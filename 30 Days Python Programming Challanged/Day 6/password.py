import re

def is_strong_password(password):
    # Check if password contains at least one uppercase letter
    if not re.search(r'[A-Z]', password):
        return False
    
    # Check if password contains at least one lowercase letter
    if not re.search(r'[a-z]', password):
        return False
    
    # Check if password contains at least one digit
    if not re.search(r'[0-9]', password):
        return False
    
    # Check if password contains at least one special character
    if not re.search(r'[@_!#$%^&*()<>?/\|}{~:]', password):
        return False
    
    # Check if password length is at least 8 characters
    if len(password) < 8:
        return False
    
    return True

password = input("Enter the password to check its strength: ")
if is_strong_password(password):
    print("The password is strong.")
else:
    print("The password is weak. Please make sure it contains letters, numbers, and special")
