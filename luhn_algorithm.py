import sys

if len(sys.argv) != 2:
	print('Usage: python luhn_algorithm.py <number>')
	sys.exit(1)

number = sys.argv[1]

# Converting input to a list
try:
	number_list = [int(i) for i in number]
except ValueError:
	print('Usage: python luhn_algorithm.py <number>')
	sys.exit(2)

# Doubling numbers in odd positions
for i in range(0, len(number_list), 2):
	number_list[i] *= 2

# Adding two digit numbers
temp_list = []
for i in range(len(number_list)):
	if number_list[i] > 9:
		double_number_string = str(number_list[i])
		for j in double_number_string:
			temp_list.append(int(j))
		number_list[i] = sum(temp_list)
		temp_list.clear()

# Checking if the sum of numbers in the list is divisible by 10
if sum(number_list) % 10 == 0:
	print('Valid')
else:
	print('Invalid')