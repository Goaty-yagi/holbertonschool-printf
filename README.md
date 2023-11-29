# Holbertonschool printf project

## Description

This project recreates the standard library **printf** function that prints out strings and returns the length of the strings according to the format specifier.
This `_printf` function has been tested on Ubuntu 20.04.
<br>

## Table of Contents

- [Format specifiers](#Format-specifiers)
- [Requirements](#Requirements)
- [Installation](#Installation)
- [Compile with Makefile](#Compile-with-Makefile)
- [ManPage](#Manpage)
- [Example](#example)
- [Flowchart](#Flowchart)
- [Authors](#Authors)

## Format specifiers

| **Specifier** | **Output**                    |
| ------------- | ----------------------------- |
| %c            | prints a single character     |
| %s            | prints a string of characters |
| %%            | prints a single percent sign  |
| %i            | prints an integer             |
| %d            | prints a decimal number       |
| %b            | prints a binary number        |

## Requirements

- [Ubuntu 20.04 LTS](https://ubuntu.com/download/desktop)
- Follows the [betty](https://github.com/alx-tools/Betty/wiki) linter [style](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [documentation](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- No global variables can be used
- No more than five functions per file

## Installation

To install this function yourself you are going to be cloning our repository
by using the command `git clone`.

## Compile with Makefile

Our repository contains a makefile, and with makefile it allows you to compile all of the our code to your own main.c with simple command `make`.

## ManPage

Call the manual to read how `_printf` works:

```
man ./man_3_printf
```

## Example

To print "Hello World" and a new line:

```
#include "main.h"

int main(void)
{
	char str;

	str = "Hello World"

	_printf("%s\n", str);

	return (0);
}

```

## Flowchart

Below is a flowchart showing the ideation and implementation of how our function works and the steps the function goes through to return the desired result.

##

![alt text](https://github.com/Goaty-yagi/holbertonschool-printf/blob/a0364b6a845b1194623e484f68bcd1cac68796fc/flowchart_README.jpg)

## AUTHORS

To contact the authors of this page and to review the \_printf code or submit pull requests, please visit:

- [Nobuhiro](https://github.com/Goaty-yagi)
- [Yichen Cao](https://github.com/yichehnc)
- DanielColoradoL
