# Get_next_line_42

Get next line is one of the trickier beginners' projects at 42. The goal is simple, create a function capable of reading line by line a file. A line being any assortment of characters ending with a Newline or an End of File.

The tricky parts resided in:
1. Understanding how to handle a given number of different File Descriptors while using only ONE static variable. This was the project's bonus task. The function could be done and validated without such complications.
2. Making sure the algorithm was handling the numerous amount of edge cases that come into play when opening a file. (e.g: what if there aren't any newline ? What if the file is filled ONLY with Newlines ? etc etc)

I chose to use a static ```char *buffer[MAX_FD];``` to handle multi File Descriptors. No percular data structure needed for this project. A basic buffer mechanic of filling and flushing does the trick to always return the next line at the address of the variable passed as second parameter to the GNL function.

