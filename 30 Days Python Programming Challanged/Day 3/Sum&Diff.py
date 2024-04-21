def calculate_sum_difference(num1, num2):
    # Calculate the sum of the two numbers
    sum_result = num1 + num2

    # Calculate the difference of the two numbers
    difference_result = num1 - num2

    return sum_result, difference_result

def main():
    # Input the first number
    num1 = float(input("Enter the first number: "))

    # Input the second number
    num2 = float(input("Enter the second number: "))

    # Calculate sum and difference
    sum_result, difference_result = calculate_sum_difference(num1, num2)

    # Display the results
    print("The sum of", num1, "and", num2, "is:", sum_result)
    print("The difference between", num1, "and", num2, "is:", difference_result)

if __name__ == "__main__":
    main()
