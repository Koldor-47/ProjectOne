
test_data = """forward 5
down 5
forward 8
up 3
down 8
forward 2"""

test_data = test_data.split("\n")

def get_data(the_Path):
    with open(the_Path, 'r') as data:
        movement_data = [x.strip("\n") for x in data.readlines()]
    
    return movement_data


real_data = get_data(r"Python\Advent_of_code_2021\data\day2.txt")

down = 0
up = 0
forward = 0

for movement in real_data:
    move = movement.split(' ')
    dir, amount = move[0], int(move[1])
    if dir == "up":
        up += amount
    elif dir == "down":
        down += amount
    elif dir == "forward":
        forward += amount

print(f"down: {down}\nup: {up}\nForward: {forward}")

updwn_dist = down - up
answer = updwn_dist * forward

print(answer)
