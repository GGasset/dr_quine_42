#include <stdio.h>
void print_line(char *s)
{
	printf("		%c", 34);
	for (int i = 0; s && s[i]; i++)
	{
		char c = s[i];
		if (c == 34) printf("%c%c", 92, 34);
		else if (c == 92) printf("%c%c", 92, 92);
		else printf("%c", c);
	}
	printf("%c,", 34);
	printf("\n");
}
//Outer comment!
int main()
{
	// Inner comment!
	char *code[] = {
		"#include <stdio.h>",
		"void print_cmnt_line(char *s)",
		"{",
		"	printf(\"		%c\", 34);",
		"	for (int i = 0; s && s[i]; i++)",
		"	{",
		"		char c = s[i];",
		"		if (c == 34) printf(\"%c%c\", 92, 34);",
		"		else if (c == 92) printf(\"%c%c\", 92, 92);",
		"		else printf(\"%c\", c);",
		"	}",
		"	printf(\"%c,\", 34);",
		"	printf(\"\\n\");",
		"}",
		"//Outer comment!",
		"int main()",
		"{",
		"	// Inner comment!",
		"	char *code[] = {",
		"		0,",
		"	};",
		"	for (int i = 0; i < 17; i++) printf(\"%s\\n\", code[i]);",
		"	for (int i = 0; code[i]; i++) print_line(code[i])",
		"	for (int i = 0; code[i]; i++) printf(\"%s\\n\", code[i]);",
		"}",
		0,
	};
	for (int i = 0; i < 19; i++) printf("%s\n", code[i]);
	for (int i = 0; code[i]; i++) print_line(code[i]);
	for (int i = 19; code[i]; i++) printf("%s\n", code[i]);
}