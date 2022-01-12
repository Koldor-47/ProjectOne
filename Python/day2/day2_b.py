def get_data(the_Path):
    with open(the_Path, 'r') as data:
        movement_data = [x.strip("\n").split(" ") for x in data.readlines()]
    
    return movement_data


test_data = """forward 5
down 5
forward 8
up 3
down 8
forward 2"""


real_data = get_data(r"Python\Advent_of_code_2021\data\day2.txt")

def planned_course(instructions):
    hoz_dist = 0
    aim = 0
    down = 0
    up = 0
    depth = 0

    for i in instructions:
        if i[0] == "forward":
            hoz_dist += int(i[1])
            depth += int(i[1]) * aim
        elif i[0] == "down":
            aim += int(i[1])
        elif i[0] == "up":
            aim -= int(i[1])
    
    print(f"{depth} X {hoz_dist} = {depth * hoz_dist}")

t1 = get_data(r"Python\Advent_of_code_2021\data\test_data.txt")
planned_course(real_data)