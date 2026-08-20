const int i = 5;
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
void print_line(char *s, int fd)
{
	dprintf(fd, "		%c", 34);
	for (int i = 0; s && s[i]; i++)
	{
		char c = s[i];
		if (c == 34) dprintf(fd, "%c%c", 92, 34);
		else if (c == 92) dprintf(fd, "%c%c", 92, 92);
		else dprintf(fd, "%c", c);
	}
	dprintf(fd, "%c,", 34);
	dprintf(fd, "\n");
}
//Outer comment!
int main()
{
	// Inner comment!
	char *code[] = {
		"#include <stdio.h>",
		"#include <unistd.h>",
		"#include <fcntl.h>",
		"void print_line(char *s, int fd)",
		"{",
		"	dprintf(fd, \"		%c\", 34);",
		"	for (int i = 0; s && s[i]; i++)",
		"	{",
		"		char c = s[i];",
		"		if (c == 34) dprintf(fd, \"%c%c\", 92, 34);",
		"		else if (c == 92) dprintf(fd, \"%c%c\", 92, 92);",
		"		else dprintf(fd, \"%c\", c);",
		"	}",
		"	dprintf(fd, \"%c,\", 34);",
		"	dprintf(fd, \"\\n\");",
		"}",
		"//Outer comment!",
		"int main()",
		"{",
		"	// Inner comment!",
		"	char *code[] = {",
		"		0,",
		"	};",
		"	char file_name[42];",
		"	sprintf(file_name, \"Sully_%i.c\", i - 1);",
		"	int file_fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0644);",
		"	if (file_fd == -1) return 0;",
		"	dprintf(file_fd, \"const int i = %i\\n\", i - 1);",
		"	for (int i = 0; i < 21; i++) dprintf(file_fd, \"%s\\n\", code[i]);",
		"	for (int i = 0; code[i]; i++) print_line(code[i], file_fd);",
		"	for (int i = 21; code[i]; i++) dprintf(file_fd, \"%s\\n\", code[i]);",
		"}",
		0,
	};
	char file_name[42];
	sprintf(file_name, "Sully_%i.c", i - 1);
	int file_fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_fd == -1) return 0;
	dprintf(file_fd, "const int i = %i\n", i - 1);
	for (int i = 0; i < 21; i++) dprintf(file_fd, "%s\n", code[i]);
	for (int i = 0; code[i]; i++) print_line(code[i], file_fd);
	for (int i = 21; code[i]; i++) dprintf(file_fd, "%s\n", code[i]);
}
