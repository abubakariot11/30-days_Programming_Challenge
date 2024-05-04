def add_item_to_tuple(old_tuple, item):
    new_tuple = old_tuple + (item,)
    return new_tuple

# Example usage:
old_tuple = (1, 2, 3)
new_item = 4, 5
new_tuple = add_item_to_tuple(old_tuple, new_item)
print("Old tuple:", old_tuple)
print("New tuple:", new_tuple)
