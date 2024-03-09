# Works with key-value pair

# Structure ---> {"key": "value", "key": "value", "key": "value",......}

person = {"Name": "Muhammad Sayem", "Address": "Dhaka", "Age": 23, "Occupation": "Student"}

# print(person['Name'])
# print(person['Occupation'])

# print(person.keys())
# print(person.values())

person['language'] = "Bangla"       # new key-value assign kora hoise
#print(person)

for key, value in person.items():
    print(key, "-->", value)