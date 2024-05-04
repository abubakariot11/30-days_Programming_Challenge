def is_palindrome(word):
    return word == word[::-1]

# Example usage:
word = input("Enter a word: ")
if is_palindrome(word):
    print(word, "is a palindrome.")
else:
    print(word, "is not a palindrome.")
