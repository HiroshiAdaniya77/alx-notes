
# Scripting in Bash

Scripting is a wonderful way of streamlining your work! Being able to navigate through the terminal with ease and performing tasks at a much quicker rate will always be preferred. Creating files with scripts can speed up our work tremendously.

## Shebang #!

Shebang is a line of text "#!" that allows the compiler to understand what to do. Shebang lets it know that it is a script and it allow it to perform the task that we want. it accept the script as a command and displays the result to the stdout.

A good example of scripting is as follows:

	* Creating a script that will store a result in a file could look something like this
	
	> we create a file ls_script
	
And in it we can put this into it

	#!/bin/bash
	ls -al >> listallfiles.txt

So instead of running this command in the terminal every time and typing it, we have stored this command as script and made it much easier to execute this result.

To run this command all we need to do is:

	> ./ls_script

And the all the files listed in the current directory will be appended to the file listallfiles.txt

To run this script you will have to know either where the script is, or be in the directory that the script is present in.


A more complex script could look like this:

	#!/bin/bash
	echo listallfiles.txt | tail | head -n 3 | >> listallfiles.txt

So what we did here is that we fed the files content to another command which list the last 10 lines of the file, which then fed that result into the following command which listed the top 3 lines, and then appended that to the bottom of the file listallfiles,txt. so in essence we copied the lines in the same file and added it to the bottom of the page.

Cool right?? If this does seem confusing, ill explain in more detail as we go on.

As you saw, there were 4 different commands used in one line. I'll explain them to you.

### Commands 

	* echo

	echo is a command that displays an argument onto the standard output/ screen, or in the example above, it displayed the
