#print("hello")

# MCQ
# 1: B
# 2: C
# 3: C
# 4: D
# 5: B
# short answer
# 1: A variable is refered to name of address given to memory. Constant Refers to name which holds a constant  
# value in memory which can used by anywhere in code.

# question number 2
# Age = 19
# print(Age)

# Coding Exercise
# Name = "Ravi sharma"
# Age = 19
# Height = 5.7
# print(Name)
# print(Age)
# print(Height)


# find the sum of 2 variable

# enter the first number
#num = 12
# enter the second number
#num2 = 19
# sum of => 
#print(num + num2)



#wap to find a square of number
# age = int(input("enter the age = "))
# if (age>=18):
#     print("eligible voting")
# else:
#     print("not eligible voting")


# for i in range(7,71,7):
#    print(i)

#a = str(input("enter the add in list = "))
#fruits = ["banana","apple","mango"]
#fruits.append(a)
# x=fruits.count("banana")
# cars = fruits.copy()
# fruits.clear()
# print(cars)
#print(fruits)

# def areaofrectangle(l,b):
#     return l*b
# l=int(input("enter length = "))
# b=int(input("enter breadth = "))
# print("area of rectangle = ",areaofrectangle(l,b))



def count_leap_years(start_year, end_year):
    leap_years = []
    for year in range(start_year, end_year + 1):
        if (year % 4 == 0 and year % 100 != 0) :
            leap_years.append(year)
    return len(leap_years), leap_years


start_year = 2000
end_year = 2110  
leap_year_count, leap_years = count_leap_years(start_year, end_year)

print(f"Number of leap years from {start_year} to {end_year}: {leap_year_count}")
print("Leap years are:", leap_years)
