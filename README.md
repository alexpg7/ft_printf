# :printer: ft_printf ![Static Badge](https://img.shields.io/badge/Barcelona-black?style=for-the-badge&logo=42&logoColor=%23FFFFFF)
![Static Badge](https://img.shields.io/badge/C-grey?style=flat)
![Static Badge](https://img.shields.io/badge/Makefile-green?style=flat)
![Static Badge](https://img.shields.io/badge/status-completed-green?style=flat)

A function to imitate the original `printf`.

## :hammer: Compilation
Firstly, copy the repository into you computer directory:

```bash
git clone https://github.com/alexpg7/ft_printf.git ft_printf 
```

Once copied, just execute the `make` command:

```bash
make
```

The `make`command should output all the object files (`*.o`) and the `libftprintf.a` file.

## :book: How to use it

Add the `libftprintf.h` header at the beggining of your main and use `libftprintf.a` to compile the whole project. Example:

```bash
cc main.c file_1.c ... file_n.c libftprintf.a
```

## :information_source: Functionalities

The prototype is the following one:

```C
int	ft_printf(char const *format, ...);
```

The function accepts a string `format` as a main input and has variable arguments. The secondary arguments have to match the number of _formats_ in `format`. It returns the number of characters printed.

What is a _format_? A key substring that allows us to substitute it with the string transformation of a certain variable. To clarify, let's supose we cast `ft_printf` the following way:

```C
ft_printf("Hello %s\n", "World!");
```

The output of the program would be:

```console
Hello World!
```

For a more complex cast, 

```C
ft_printf("My name is %s, I am a %i %s student.\n", "Alex", 42, "Barcelona");
```

The output of the program would be:

```console
My name is Alex, I am a 42 Barcelona student.
```

The accepted formats are:

* ``%c`` (char)
* ``%s`` (string)
* ``%p`` (pointer)
* ``%d`` (digit)
* ``%i`` (integer)
* ``%u`` (unsigned int)
* ``%x`` (hexadecimal number, base 0123456789abcdef)
* ``%X`` (hexadecimal number, base 0123456789ABCDEF)
* ``%%`` (character `%`)
