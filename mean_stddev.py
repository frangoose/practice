import math

x = [1, 3, 4, 5, 5, 6, 8]
mean = 0
print('set is {}'.format(x))
for i in x:
	mean = mean + i
mean = mean / len(x)
print('mean is {}'.format(mean))

stddev = 0
for i in x:
	temp = 0
	temp = (i - mean)**2
	stddev = stddev + temp

stddev = stddev / (len(x) - 1)
stddev = math.sqrt(stddev)
print('stddev is {}'.format(stddev))
