# Libft

This documentation covers the Libft project from the 42 curriculum.

## Overview
The Libft project involves creating a library of over 40 functions from scratch, many of which mimic existing C standard library functions. This project is designed to help master the basics of C while introducing more advanced concepts such as linked lists.

## Part 1 — C Standard Library Functions
These functions replicate existing C standard library functions, adhering closely to their original behavior.

### Character Checks
- **`ft_isalpha`**: Checks if a character is alphabetic.
- **`ft_isdigit`**: Checks if a character is a digit.
- **`ft_isalnum`**: Checks if a character is alphanumeric.
- **`ft_isascii`**: Checks if a character is an ASCII value.
- **`ft_isprint`**: Checks if a character is printable.

### String and Memory Manipulation
- **`ft_strlen`**: Returns the length of a string.
- **`ft_memset`**: Sets a block of memory to a specified value.
- **`ft_bzero`**: Sets a block of memory to zero.
- **`ft_memcpy`**: Copies memory from one location to another.
- **`ft_memmove`**: Similar to `ft_memcpy`, but handles overlapping memory areas safely.
- **`ft_strlcpy`**: Copies a string to a destination buffer, ensuring null-termination.
- **`ft_strlcat`**: Appends a string to the end of another string, ensuring null-termination.
- **`ft_toupper`**: Converts a character to uppercase.
- **`ft_tolower`**: Converts a character to lowercase.

### Searching and Comparing
- **`ft_strchr`**: Locates the first occurrence of a character in a string.
- **`ft_strrchr`**: Locates the last occurrence of a character in a string.
- **`ft_strncmp`**: Compares two strings up to a specified number of characters.
- **`ft_memchr`**: Locates a byte in a block of memory.
- **`ft_memcmp`**: Compares two blocks of memory.
- **`ft_strnstr`**: Locates a substring in a string, up to a specified length.

### Conversion
- **`ft_atoi`**: Converts a string to an integer.
- **`ft_calloc`**: Allocates memory for an array and initializes it to zero.
- **`ft_strdup`**: Duplicates a string, allocating memory for the new string.

## Part 2 — Additional Functions
These functions extend beyond the standard library, offering additional utility.

### String Operations
- **`ft_substr`**: Extracts a substring from a string.
- **`ft_strjoin`**: Concatenates two strings into a new string.
- **`ft_strtrim`**: Trims specified characters from the beginning and end of a string.
- **`ft_split`**: Splits a string into an array of strings based on a delimiter.
- **`ft_itoa`**: Converts an integer to a string.
- **`ft_strmapi`**: Applies a function to each character of a string to create a new string.
- **`ft_striteri`**: Applies a function to each character of a string in place.

### File Descriptor Operations
- **`ft_putchar_fd`**: Writes a character to a file descriptor.
- **`ft_putstr_fd`**: Writes a string to a file descriptor.
- **`ft_putendl_fd`**: Writes a string followed by a newline to a file descriptor.
- **`ft_putnbr_fd`**: Writes an integer to a file descriptor.

## Part 3 — Bonus Functions
These functions introduce structures and linked lists, providing more complex data manipulation.

### Linked List Operations
- **`ft_lstnew`**: Creates a new list element.
- **`ft_lstadd_front`**: Adds an element to the beginning of a list.
- **`ft_lstsize`**: Returns the number of elements in a list.
- **`ft_lstlast`**: Returns the last element of a list.
- **`ft_lstadd_back`**: Adds an element to the end of a list.
- **`ft_lstdelone`**: Deletes a list element using a specified function.
- **`ft_lstclear`**: Deletes and frees an entire list.
- **`ft_lstiter`**: Iterates over a list and applies a function to each element.
- **`ft_lstmap`**: Applies a function to each element of a list, creating a new list.

## Conclusion
The Libft project is a foundational part of the 42 curriculum, reinforcing core C programming skills and introducing essential concepts such as memory management, string manipulation, and linked lists. The completion of this project lays the groundwork for more advanced topics and projects in the future.
