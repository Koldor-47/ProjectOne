
test_depth_measurments = [
    199,
    200,
    208,
    210,
    200,
    207,
    240,
    269,
    260,
    263
]

def get_data(the_Path):
    with open(the_Path, 'r') as data:
        depth_measurments = []
        for line in data.readlines():
            depth_measurments.append(int(line.rstrip("\n")))
    
    print(len(depth_measurments))
    return depth_measurments
    

def increaseCount(depth_measurments):
    increase_count = 0
    for i in range(1, len(depth_measurments)):
        last_number = depth_measurments[i-1]
        current_number = depth_measurments[i]
        if current_number > last_number:
            increase_count += 1
            



    return increase_count

def Three_sliding_rule(depth_data):
    three_slide_list = [] 
    for num in range(2, len(depth_data)):
        number = depth_data[num -2] + depth_data[num -1] + depth_data[num]
        three_slide_list.append(number)
    print(f"threes: {len(three_slide_list)}")
    print(three_slide_list)
    return three_slide_list

real_data = get_data(r"C:\Users\aucnh\Documents\Code\Python\Advent_of_code_2021\data\day1_test_data.txt")


#print(increaseCount(real_data))

y = (Three_sliding_rule(real_data))


print(increaseCount(y))