
from sys import argv, exit

def main():
	if len(argv) < 2:
		exit(0)
	while True:
		choice = input("Transform to [p]rint/[s]tring: ")[0]
		if choice == 'p':
			get_numbered_string_printer()
			exit(0)
		elif choice == 's':
			get_ascii_string()
			exit(0)

def get_numbered_string_printer():
	appended_argv = ''
	for arg in argv:
		appended_argv += arg

	for c in argv[1]:
		print(f'\tmov rdi, {ord(c)}')
		print('\tpush rdi')
		print('\tmov rdi, rsp')
		print('\tcall output')
		print('\tpop rdi')

def get_ascii_string():
	if len(argv) == 2:
		to_convert = argv[1]
	elif len(argv) == 4:
		start = int(argv[2])
		stop = int(argv[3])
		with open(argv[1]) as f:
			lines = f.readlines()
		to_convert = ''
		for i in range (max(start, 0), min(stop, len(lines))):
			to_convert += lines[i]
	else:
		exit(0)

	out = ''
	for c in to_convert:
		if out != '':
			out += ', '
		out += f'{ord(c)}'
	out += ', 0'

	print(out)

if __name__ == '__main__':
	main()
