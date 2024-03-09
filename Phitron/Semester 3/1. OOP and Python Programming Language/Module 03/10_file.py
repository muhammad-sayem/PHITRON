# .csv (Comma Separated File)
# .txt file

# with open("Message.txt", 'w') as file:
#     file.write("My name is Muhammad Sayem")

# with open("Message.txt", 'a') as file:
#     file.write("My name is Muhammad Sayem")

with open("Message.txt", 'r') as file:
    text = file.read()
    print(text)