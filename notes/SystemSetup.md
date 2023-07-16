# How to set up your environment

## wsl (windows subsystem for Linux

WSL is a subsystem on windows that allows a user to interact with a virtual machine similar to a linux one. You can directly install this though your Microsoft store. I personally chose the Ubuntu 20.04.6 LTS wsl as it is required to do my projects

### Installing

The first step is to install the wsl through the Microsoft store. You will notice that if you want to start using it the ubuntu terminal will send through errors as you have not fully equipped your pc to run the subsystem.

	* The next step is to enable the windows features on your pc to run the windows subsystem

	> press the windows key + R  to call up the run menue
	> next enter " optionalfeatures.exe " and press okay
	> make sure "windows subsystem for linux" is ticked (you will need to restart your pc)
	> you will also need " windows Hypervisor platform " and " Virtual Machine platform " to be ticked (this varies on different PC's)

You'll restart your pc one again.

	* next you will be required to install a wsl package at
	
	> [[https://wslstorestorage.blob.core.windows.net/wslblob/wsl_update_x64.msi]]
	> follow the prompts and install the package

With this you should be done. If you do however run into any further errors it is best to search the error message on google to find the best possible solution.

<sub> NB!! These steps my change due to windows updates</sub>

# REMEBER your steps for setting GIT! Setting up git is most important before you go any further on with this document! Please refer to the " git.md " file

Have you done it?? Okay, GOOD! Now we can move on

----

## Betty

Betty is a Holberton School style of C coding. It is a personal way of coding and is suggested to make coding not only easier but uniform and more legible. It also helps reduce any possible bugs that could arise in your code.

In my own personal words, Betty is like the grammarly of programming.

To read more about it and learn the ways of betty style check out this link: [[https://github.com/alx-tools/Betty/wiki]]

Now to set up Betty in your wsl:

### Installing betty 

The first step to installing/ setting betty up on our wsl environment, we would need to clone the repository to our system

	> git init

then 

	> git clone https://github.com/alx-tools/Betty.git

and then we change into the Betty directory with

	> cd Betty

next we install the linter

	> sudo ./install.sh

next we create a file called **betty** and add this script into it:

	#!/bin/bash
	# Simply a wrapper script to keep you from having to use betty-style
	# and betty-doc separately on every item.
	# Originally by Tim Britton (@wintermanc3r), multiargument added by
	# Larry Madeo (@hillmonkey)

	BIN_PATH="/usr/local/bin"
	BETTY_STYLE="betty-style"
	BETTY_DOC="betty-doc"

	if [ "$#" = "0" ]; then
    	echo "No arguments passed."
    	exit 1
	fi

	for argument in "$@" ; do
    	echo -e "\n========== $argument =========="
    	${BIN_PATH}/${BETTY_STYLE} "$argument"
    	${BIN_PATH}/${BETTY_DOC} "$argument"
	done

Once that is done we can mv this file in our $PATH

	> sudo mv betty /bin/

and you should be done. Now all you need to do to use betty is

	> betty filename

Any issues that might be come in your code will be shown.

----

## Compiler / gcc

A compiler is a program that compiles your source code into something that the PC can understand, such as binary code.

You will need to install gcc into your subsystem with these commands

	> sudo apt install gcc

you might run into some error messages that requires you to update your system, do this this and then run the same code  again.

you should be done and ready to compile any source code you'd like.
