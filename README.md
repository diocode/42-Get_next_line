![so_long_banner-03](https://github.com/diocode/42-So_long/assets/107859177/f2d4d204-c35c-4eef-bb63-09aea6376882)

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-05%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/diocode/philosophers?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/diogo-gsilva' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#norminette">Norminette</a>
</p>

## ABOUT ([Subject](/.github/en.subject.pdf))

In this programming project, the primary objective is to develop a versatile text-reading function named get_next_line(). This function is designed to extract text content, one line at a time, from either a file descriptor or standard input. The project comes with a set of specific requirements and guidelines to ensure its proper functionality and compatibility. Here's an overview of what this project entails:

**Function Purpose:** The core purpose of get_next_line() is to facilitate the extraction of text lines from a file descriptor. It does so while adhering to precise behavior rules.

**Return Values:** The function returns the line it reads, but it can also handle situations where there's nothing more to read or if an error arises, returning NULL accordingly. Additionally, it ensures that lines include the newline (\n) character, except when the end of the file is reached.

**Header File:** A header file, get_next_line.h, is necessary, featuring at least the function prototype for get_next_line().

**Buffer Size:** The buffer size used for the read() function is configurable via the -D BUFFER_SIZE=n compiler option. This allows for flexibility in testing different buffer sizes.

**Compilation:** The code should be compilable with and without the -D BUFFER_SIZE flag, ensuring its versatility in different environments.

**Undefined Behavior:** Special attention must be given to handling cases where the file descriptor changes between calls without reaching the end of the file. Additionally, handling binary files is optional but can be logically managed.

**Bonus Part (Optional):** For those looking to go the extra mile, a bonus challenge is available. It involves implementing get_next_line() using only one static variable and enabling the function to manage multiple file descriptors simultaneously. This advanced feature allows for seamless switching between different file descriptors during calls.

In summary, this project presents an opportunity to create a robust text-reading function with specific behaviors and optional advanced features. Adherence to the outlined requirements ensures a reliable and versatile utility for reading text from file descriptors or standard input.

<a href="/.github/en.subject.pdf">Click here</a> for the subject of this project.

<br>

## HOW TO USE
#### 1º - Clone the repository
```bash
$ git clone git@github.com:diocode/42-Get_next_line.git
```
#### 2º - Use the function
To use the get_next_line() function, you will need to compile it with your code or add it to your library.
<br>

## NORMINETTE
At 42 School, projects are generally expected to adhere to the Norm, the school's coding standard:

```
- No for, do while, switch, case or goto are allowed
- No more than 25 lines per function and 5 functions per file
- No assigns and declarations in the same line (unless static)
- No more than 5 variables in 1 function
... 
```

* [Norminette](https://github.com/42School/norminette) - Tool by 42, to respect the code norm. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`
