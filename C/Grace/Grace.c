#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define this_is_not_a_function_print_line(line_str, fd) \
dprintf(fd, "		%c", 34);\
for (int it = 0; line_str && line_str[it]; it++)\
{\
	char c = line_str[it];\
	if (c == 34) dprintf(fd, "%c%c", 92, 34);\
	else if (c == 92) dprintf(fd, "%c%c", 92, 92);\
	else dprintf(fd, "%c", c);\
}\
dprintf(fd, "%c,%c", 34, 92);\
dprintf(fd, "\n");
#define opening_code_len 17
#define why_I_need_to_do_this_clearly_this_is_not_a_main(X) /*This is not a main because the subject says so*/ int main() { \
	char *code[] = {\
		"#include <stdio.h>",\
		"#include <unistd.h>",\
		"#include <fcntl.h>",\
		"#define this_is_not_a_function_print_line(line_str, fd) \\",\
		"dprintf(fd, \"		%c\", 34);\\",\
		"for (int it = 0; line_str && line_str[it]; it++)\\",\
		"{\\",\
		"	char c = line_str[it];\\",\
		"	if (c == 34) dprintf(fd, \"%c%c\", 92, 34);\\",\
		"	else if (c == 92) dprintf(fd, \"%c%c\", 92, 92);\\",\
		"	else dprintf(fd, \"%c\", c);\\",\
		"}\\",\
		"dprintf(fd, \"%c,%c\", 34, 92);\\",\
		"dprintf(fd, \"\\n\");",\
		"#define opening_code_len 17",\
		"#define why_I_need_to_do_this_clearly_this_is_not_a_main(X) /*This is not a main because the subject says so*/ int main() { \\",\
		"	char *code[] = {\\",\
		"		0,\\",\
		"	};\\",\
		"	int file_fd = open(\"./Grace_kid.c\", O_WRONLY | O_CREAT | O_TRUNC, 0644);\\",\
		"	if (file_fd == -1) return 0;\\",\
		"	for (int i = 0; i < opening_code_len; i++) dprintf(file_fd, \"%s\\n\", code[i]);\\",\
		"	for (int i = 0; code[i]; i++) {char *l = code[i]; this_is_not_a_function_print_line(l, file_fd);}\\",\
		"	for (int i = opening_code_len; code[i]; i++) dprintf(file_fd, \"%s\\n\", code[i]);\\",\
		"	close(file_fd);\\",\
		"}",\
		"why_I_need_to_do_this_clearly_this_is_not_a_main()",\
		0,\
	};\
	int file_fd = open("./Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, 0644);\
	if (file_fd == -1) return 0;\
	for (int i = 0; i < opening_code_len; i++) dprintf(file_fd, "%s\n", code[i]);\
	for (int i = 0; code[i]; i++) {char *l = code[i]; this_is_not_a_function_print_line(l, file_fd);}\
	for (int i = opening_code_len; code[i]; i++) dprintf(file_fd, "%s\n", code[i]);\
	close(file_fd);\
}
why_I_need_to_do_this_clearly_this_is_not_a_main()
