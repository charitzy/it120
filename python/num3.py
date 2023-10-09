def compute_age(birth_year, current_year):
    return current_year - birth_year

def can_vote(age):
    return age >= 18

def main():
    birth_year = int(input("Enter your birth year: "))
    current_year = int(input("Enter the current year: "))
    
    age = compute_age(birth_year, current_year)
    print(f"You are {age} years old.")
    
    if can_vote(age):
        print("You are qualified to vote in national or local elections.")
    else:
        print("You are not qualified to vote in national or local elections.")

if __name__ == "__main__":
    main()
