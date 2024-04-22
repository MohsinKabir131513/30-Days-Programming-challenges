# Function to calculate sum and difference of two numbers
def calculate_sum_and_difference(num1, num2):
    sum_result = num1 + num2
    difference_result = num1 - num2
    return sum_result, difference_result

# Ask the user for two numbers
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Calculate sum and difference
sum_result, difference_result = calculate_sum_and_difference(num1, num2)

# Print the results
print(f"The sum of {num1} and {num2} is {sum_result}")
print(f"The difference of {num1} and {num2} is {difference_result}")
