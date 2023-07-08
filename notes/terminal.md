
# Terminal issues

I ran into some terminal issues and i was able to solve them. Here are the solutions i found to my problems.

<sub>NB!! : Remember that for any changes to take affect you have to restart your system/terminal. Meaning log out and log back in.</sub>

## 1. Coloring issue with the terminal

Usually on the left hand side of the cursor the terminal shows you the path you are currently on, in color. Your directories, executable files, symbolic links etc. are in color too but my WSL were not displaying these colors.

I found that i had to keep running this code to see the colors

	> source /etc/skel/.bashrc

This would only change the color for the time period i was logged in.

### **Solution**

I discovered that the file that controlled these color displayed was not in the correct directory/ path and the bash couldn't pick it up.

I solved this by copying the .bashrc file to the directory /root. 
Upon login, bash reads these files in sequence to set the variable in your system

> 1. /etc/profile (if this file exists, it moves to the next one in the list)
> 2. ~/.bash_profile 
> 3. ~/.bash_login
> 4. ~/.profile

Since i had moved the .bashrc file to ~/ it can now be read and executed. I renamed .bashrc to .bash_profile so that every time i login, bash can read the file in sequence and it is now located where it can be read and no longer in the /etc/skel/ directory.

---

## 2. Color of directories

I chose to change the color of the appearance of the directories too, and added this code at the bottom of my <u>~/.bash_profile</u> code

	> LS_COLORS=$LS_COLORS:'di=0;96:' ; export LS_COLORS

The 'di=0;96 changed the color to a cyan blue, you can search the internet for other color codes of your choice.

This website helped me: 

https://askubuntu.com/questions/596538/shouldnt-bashrc-run-every-time-i-log-in

---

## 3. Changing the colors in Vim/Vi

An issue i had with vim is that when i was editing my code or writing scripts, some of the coloring of the text wasn't reflecting well off the terminal black background. 

To change the color
	
	> :color desert

This is a specific code for a certain color scheme that seems to have worked well, you can search the internet for other color schemes that best suit you.

To permanently station this color scheme make sure you have a <u>~/.vimrc</u> file in your root directory and add the code above to your code.

---

## 4. Turning on Autocorrect and grammar in Vim/Vi

To turn on autocorrect in vim/vi, within the editor, enter command mode and use this code

<sub>NB!! : Note that this will only work with files with an extension specified such as .md files and .c files</sub>

	> :set spell!

To set the language

	> :set spelllang=en 	specifies the english language
	> :set spelllang=en_us 	specifies which english language grammar 


