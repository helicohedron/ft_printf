# ft_printf

*This project has been created as part of the 42 curriculum by jrosette.*

## Description
The project recreates the printf() function found in standard C library. It handles the following format specifiers:

| Format specifier  | Description                                                                   |
| ----------------- | ----------------------------------------------------------------------------- |
| `%c`              | Prints a single character.                                                    |
| `%s`              | Prints a string.                                                              |
| `%p`              | Prints a void pointer in hexadecimal format.                                  |
| `%d`              | Prints a decimal number (base 10).                                            |
| `%i`              | Prints an integer in base 10.                                                 |
| `%u`              | Prints an unsigned decimal number (base 10).                                  |
| `%x`              | Prints a hexadecimal number (base 16) in lowercase.                           |
| `%X`              | Prints a hexadecimal number (base 16) in uppercase.                           |
| `%%`              | Prints a percent sign.                                                        |


## Instructions

### Compilation

The library can be compiled using the provided `Makefile`.

```bash
make
```

This creates the static library:

```text
libftprintf.a
```

The following Makefile rules are available:

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile the library from scratch
```


## Resources

* **Variadic Functions**, *Sumi Garden*
  https://notes.devnyxie.com/0-Notes/c/variadic_functions

* **ft_print**, *42 Cursus Gitbook*
  https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf

* **Variadic Functions in C**, *GeeksforGeeks* 
  https://www.geeksforgeeks.org/c/variadic-functions-in-c/

* **25 Variadic Functions**, *Beej.us* 
  https://beej.us/guide/bgc/html/split-wide/variadic-functions.html 


## Notes

This project was developed as part of the 42 curriculum and was used to strengthen my understanding of:

* Variadic Functions