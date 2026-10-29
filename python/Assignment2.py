# Program to remove duplicate elements from a list
"""numbers = [1, 2, 2, 3, 4, 4, 5, 3, 6]

unique_numbers = []
for num in numbers:
    if num not in unique_numbers:
        unique_numbers.append(num)

print("Original list:", numbers)
print("List after removing duplicates:", unique_numbers)"""


"""numbers = (10, 20, 30, 40, 50)
length = len(numbers)
largest = max(numbers)
smallest = min(numbers)
num_list = list(numbers)
num_list.append(60)
print("Tuple:", numbers)
print("Length:", length)
print("Largest value:", largest)
print("Smallest value:", smallest)
print("Tuple converted to list and new element added:", num_list)"""




text = "madam"
vowels = "aeiouAEIOU"
vowel_count = sum(1 for ch in text if ch in vowels)
reversed_text = text[::-1]
is_palindrome = text == reversed_text
print("String:", text)
print("Vowel count:", vowel_count)
print("Reversed string:", reversed_text)
print("Is palindrome?", is_palindrome)