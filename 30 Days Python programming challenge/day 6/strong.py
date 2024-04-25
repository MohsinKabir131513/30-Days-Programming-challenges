import re

def is_strong_password(password):
    # Define regular expressions to check for letters, numbers, and special characters
    has_letter = re.search(r'[a-zA-Z]', password)
    has_number = re.search(r'\d', password)
    has_special_char = re.search(r'[!@#$%^&*()_+{}|:"<>?`\-=[\];\',./]', password)

    # Check if all conditions are met
    if has_letter and has_number and has_special_char:
        return True
    else:
        return False

# Test the function
password = input("Enter a password: ")
if is_strong_password(password):
    print("Strong password!")
else:
    print("Weak password. Password should contain letters, numbers, and special characters.")
