# printf

##### Description

This project is about creating a printf function that will be able to print any string with the correct format.

#### Formats

| Format | Description | Using | Output |
| ------ | ----------- | ------- | ------ |
| `%c` | Character | ```c printf("%c", 'H');``` | H |
| `%s` | String | ```c printf("%s", "Hello, World!");``` | Hello, World! |
| `%%` | Percent sign | ```c printf("%%");``` | % |
| `%d` | Integer | ```c printf("%d", 100);``` | 100 |
| `%i` | Integer | ```c printf("%i", 100);``` | 100 |

#### Files

| File | Description |
| ---- | ----------- |
| `main.h` | Header file with prototypes |
| `_printf.c` | Main function |
| `printf_char.c` | Function to print a character |
| `printf_str.c` | Function to print a string |
| `printf_int.c` | Function to print an integer |


#### Prototype

```c
int _printf(const char *format, ...);
```

#### Example

```c
#include "holberton.h"

int main(void)
{
	int len;

	len = _printf("Hello, World!\n");
	_printf("Length: %d\n", len);

	return (0);
}
```

#### Compilation

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -I. *.c
```

#### Output

```bash
Hello, World!
Length: 14
```

#### Return

- On success, the total number of characters written is returned.

#### Authors &copy;

- **Martin Clement** - [GitHub Profile](https://github.com/ItsZmainDev)
- **Terence Tengue** - [GitHub Profile](https://github.com/Terencetjt26)