def find_min_max(numbers):
    if not numbers:
        return None, None
    min_num = max_num = numbers[0]
    for num in numbers:
        if num < min_num:
            min_num = num
        elif num > max_num:
            max_num = num
    return min_num, max_num

# Example usage:
user_list = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
min_num, max_num = find_min_max(user_list)
print("Smallest number:", min_num)
print("Largest number:", max_num)
