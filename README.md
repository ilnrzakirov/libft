# libft
libft (all func 2021) 

A library of standard C language functions. It is started by the make command

For detailed information, refer to the **[subject of this project](https://github.com/ilnrzakirov/libft/blob/main/en.subject.pdf)**

<br> • Your project must be written in C. </br>
<br> • Your project must be written in accordance with the Norm. If you have bonus
files/functions, they are included in the norm check and you will receive a 0 if there
is a norm error inside. </br>
<br> • Your functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors. If this happens, your project will be
considered non functional and will receive a 0 during the evaluation. </br>
<br> • All heap allocated memory space must be properly freed when necessary. No leaks
will be tolerated. </br>
<br> • If the subject requires it, you must submit a Makefile which will compile your
source files to the required output with the flags -Wall, -Wextra and -Werror, use
cc, and your Makefile must not relink. </br>
<br> • Your Makefile must at least contain the rules $(NAME), all, clean, fclean and
re. </br>
<br> • To turn in bonuses to your project, you must include a rule bonus to your Makefile,
which will add all the various headers, librairies or functions that are forbidden on
the main part of the project. Bonuses must be in a different file _bonus.{c/h} if
the subject does not specify anything else. Mandatory and bonus part evaluation
is done separately. </br>
<br> • If your project allows you to use your libft, you must copy its sources and its
associated Makefile in a libft folder with its associated Makefile. Your project’s
Makefile must compile the library by using its Makefile, then compile the project. </br>
<br> • We encourage you to create test programs for your project even though this work
won’t have to be submitted and won’t be graded. It will give you a chance
to easily test your work and your peers’ work. You will find those tests especially
useful during your defence. Indeed, during defence, you are free to use your tests
and/or the tests of the peer you are evaluating. </br>

| Func name      | Description                | Tools |
| ------------- |:------------------------:| ------------------------:|
| ft_atoi.c  |  Interprets an integer value in a byte string pointed to by str    | C <unistd.h> |
|  ft_bzero.c    |  The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (byte containing '\0') to that area. |   C <unistd.h> |
|   ft_calloc.c   | Allocates a block of memory for an array of num elements, each of them size bytes long, and initializes all its bits to zero. |C <unistd.h>, malloc  |
|   ft_itoa.c   | Converts an integer value to a null-terminated string using the specified base and stores the result in the array given by str parameter. |   C <unistd.h>, malloc |
|  ft_lstadd_back.c, ft_lst_new.c, ft_lst_last...   | Functions for working with sheets |   C <unistd.h>, malloc |
|   ft_memcmp.c, ft_strncmp.c,    | Functions for comparison |   C <unistd.h>|
|   ft_strjoin.c   | This function is used to combine elements of a dyn_string to one string. |   C <unistd.h>, malloc |
|  ft_strlcpy.c, ft_memcpy.c    | Copies count bytes from the object pointed to by src to the object pointed to by dest. |   C <unistd.h> |
|   ft_strdup.c   | he strdup() function returns a pointer to a new string which is a duplicate of the string s |   C <unistd.h> |
|   ft_strnstr.c, ft_strrchr.c, ft_strchr.c, ft_memchr.c   | Search functions |   C <unistd.h> |
|   ft_substr.c   | The function copies the specified number of characters from the string index |   C <unistd.h>, malloc |
|   ft_split.c   | Divides the string by separator |   C <unistd.h> |
|   ft_putnbr_fd.c   | Converts int to str |   C <unistd.h> |
|    ft_memset.c  | Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char). |   C <unistd.h> |
