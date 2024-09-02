#!/bin/bash

# Read function names from libft.h and create .c files
grep -oP 'ft_\w+(?=\()' libft.h | while read -r func_name; do
    touch "$func_name.c"
done

