# def doubled(num):
#     return num*2

# Structure: function name = parameters : return ja kore sheta

doubled = lambda num: num*2       
squared = lambda num: num*num

# print(doubled(50))
# print(squared(5))

# add = lambda x, y: x + y   
# sum = add(10, 60)
# print(sum) 

numbers = [28, 15, 30, 23, 45, 32, 18]

# doubled_nums = map(doubled, numbers)              # map(je operation korte chai, jar upor korte chai)
doubled_nums = map(lambda x: x*2, numbers)          # ager line er same x
squared_nums = map(lambda x: x*x, numbers)

print(numbers)
print(list(doubled_nums))
print(list(squared_nums))


students = [

    {"Name": "Atik", "Marks": 56},
    {"Name": "Saimun", "Marks": 98},
    {"Name": "Mahin", "Marks": 39},
    {"Name": "Rakib", "Marks": 87},
    {"Name": "Tanvir", "Marks": 23},
    {"Name": "Maruf", "Marks": 40}

]

failed = filter(lambda person: person['Marks'] < 40, students)
A_plus = filter(lambda person: person['Marks'] >= 80, students)

print(list(failed))
print(list(A_plus))