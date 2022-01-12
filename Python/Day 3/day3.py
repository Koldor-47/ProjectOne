

test_data = r"C:\Users\aucnh\Documents\Code\Python\Advent_of_code_2021\data\day3_data.txt"
real_data = r"C:\Users\aucnh\Documents\Code\Python\Advent_of_code_2021\data\day3.txt"

with open(real_data, "r") as data:
    the_data = [x.strip("\n") for x in data.readlines()]


gammaRate = []
epsilonRate = []
lenOfdata = len(the_data[0])
count = 0


while (count < lenOfdata):
    bin_count = {
        "1" : 0,
        "0" : 0
    }
    for num in the_data:
        if num[count] == "1":
            bin_count["1"] += 1
        elif num[count] == "0":
            bin_count["0"] += 1
    
    if bin_count["1"] > bin_count["0"]:
        gammaRate.append("1")
        epsilonRate.append("0")
    else:
        gammaRate.append("0")
        epsilonRate.append("1")
    count += 1
    
g_text = "".join(gammaRate)
bin_g_text = int(g_text, base=2)
print("-=-=" * 10)
r_text = "".join(epsilonRate)
bin_r_text = int(r_text, 2)
print(f"{bin_r_text} -|-  {bin_g_text}")
print(bin_r_text * bin_g_text)