age = 20
has_id = True

if age >= 18:
    if has_id:
        print("Access granted: You are an adult with valid ID.")
    else:
        print("Access denied: You need a valid ID.")
else:
    print("Access denied: You must be at least 18 years old.")
