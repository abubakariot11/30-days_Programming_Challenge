def sort_tuples_by_second_item(tuple_list):
    return sorted(tuple_list, key=lambda x: x[1])

# Example usage:
tuple_list = [(1, 5), (2, 3), (3, 8), (4, 1)]
sorted_tuples = sort_tuples_by_second_item(tuple_list)
print("Sorted list of tuples by the second item:", sorted_tuples)
