# Libft Project

This is my submission for the Libft project at School 42. The goal of this project was to create our own library of useful C functions, as a way to improve our programming skills and become more familiar with the standard C library.

## Description

The library contains a total of 43 functions, divided into four categories:

### Character_is_x Functions

These functions allow for character identification:

- `ft_isalpha`: checks if a character is alphabetical.
- `ft_isdigit`: checks if a character is a digit.
- `ft_isalnum`: checks if a character is alphanumeric.
- `ft_isascii`: checks if a character is ASCII.
- `ft_isprint`: checks if a character is printable.
- `ft_toupper`: converts a character to uppercase.
- `ft_tolower`: converts a character to lowercase.

### Memory Functions

These functions allow for memory manipulation:

- `ft_memset`: fills a block of memory with a specified value.
- `ft_bzero`: sets a block of memory to zero.
- `ft_memcpy`: copies a block of memory from source to destination.
- `ft_memmove`: copies a block of memory from source to destination, even if they overlap.
- `ft_memchr`: searches a block of memory for a specified character.
- `ft_memcmp`: compares two blocks of memory.
- `ft_calloc`: allocates memory for an array of elements and initializes it to zero.

### String Functions

These functions allow for string manipulation:

- `ft_strlen`: calculates the length of a string.
- `ft_strlcpy`: copies a string up to a specified size.
- `ft_strlcat`: appends a string to another string, up to a specified size.
- `ft_strchr`: finds the first occurrence of a specified character in a string.
- `ft_strrchr`: finds the last occurrence of a specified character in a string.
- `ft_strnstr`: finds a substring in a string, up to a specified length.
- `ft_strncmp`: compares two strings up to a specified length.
- `ft_strdup`: duplicates a string.
- `ft_substr`: extracts a substring from a string.
- `ft_strjoin`: concatenates two strings.
- `ft_strtrim`: trims whitespace characters from the beginning and end of a string.
- `ft_split`: splits a string into substrings based on a delimiter character.
- `ft_itoa`: converts an integer to a string.
- `ft_atoi`: converts a string to an integer.
- `ft_strmapi`: applies a function to each character in a string.
- `ft_striteri`: applies a function to each character of a string.

### Writing Functions to fd

These functions allow for character manipulation:

- `ft_putchar_fd`: outputs a character to a file descriptor.
- `ft_putstr_fd`: outputs a string to a file descriptor.
- `ft_putendl_fd`: outputs a string to a file descriptor, followed by a newline character.
- `ft_putnbr_fd`: outputs an integer to a file descriptor.

### Bonus Functions : Singly Linked List

These functions are not part of the required set, but are included as bonus functions:

- `ft_lstnew`: creates a new linked list node.
- `ft_lstadd_front`: adds a node to the beginning of a linked list.
- `ft_lstsize`: calculates the size of a linked list.
- `ft_lstlast`: returns the last node of a linked list.
- `ft_lstadd_back`: adds a node to the end of a linked list.
- `ft_lstdelone`: deletes a node from a linked list.
- `ft_lstclear`: deletes all nodes from a linked list.
- `ft_lstiter`: applies a function to each node in a linked list.
- `ft_lstmap`: applies a function to each node in a linked list, creating a new list with the results.

## Usage

To use the library, simply include the header file `libft.h` in your C program, and link with the `libft.a` static library.

## Conclusion

Overall, this project was a great way to learn more about the standard C library, and to become more comfortable with programming in C.
Project was validated at 125/100.
