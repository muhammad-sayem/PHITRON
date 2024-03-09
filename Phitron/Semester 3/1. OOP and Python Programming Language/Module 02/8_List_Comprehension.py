numbers = [32, 85, 15, 80, 65, 79, 90, 46]

"""
odds = []

for val in numbers:
    if val%2 != 0 and val%5 == 0:
        odds.append(val)

print(odds)


odd_nums = [val for val in numbers if val%2 != 0 and val%5 == 0]
print(odd_nums)

"""

players = ["Riyad", "Shakib", "Tamim"]
ages = [39, 37, 36]

player_comb = []

for player in players:
    # print(player)
    
    for age in ages:
        # print(age)
        player_comb.append([player, age])

print(player_comb)

player_comb2 = [[player, age] for player in players for age in ages]
print(player_comb2)

