from collections import defaultdict

# Create a defaultdict with int as the default value type
my_dict = {}

# Increment the count for each element in a list
my_list = [1, 2, 3, 1, 2, 1, 3, 4, 5, 4, 4,7]
for num in my_list:
    my_dict[num] += 1

# Print the resulting dictionary
print(my_dict)

