# Constant conversion factor from Fahrenheit to Celsius
FAHRENHEIT_TO_CELSIUS_FACTOR = 5 / 9

# Get user input for temperature in Fahrenheit
fahrenheit = float(input("Enter the temperature in Fahrenheit: "))

# Convert Fahrenheit to Celsius
celsius = (fahrenheit - 32) * FAHRENHEIT_TO_CELSIUS_FACTOR

# Print the result
print("The temperature in Celsius is:", celsius)
