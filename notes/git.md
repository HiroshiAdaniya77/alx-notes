
# Working with GIT

Git is a version control system that is distributor based. AN example of this would be mercurial and git.

This allows each user to save a copy of the project to their system and share changes between one another.

# Configurations

1. The first thing we have to do with git is to configure our username and email


	git config --global user.name "user name"
	git config --global user.email user@email.com

2. You can also check your configuration details

	git config --list

3. To set the default editor: in this case Visual Studio Code
	
	git config --global core.editor "code --wait"

	git comfig --global -e

4. To initilize git for our repository and create a subdirectory called ".git" to keep track of our project history.

	git init

5. To stage changes in our project and save a screenshot of our work

	git add . (or) git add filename

**It is best practice to add the file individually or by pattern e.g git add *.txt or git add file*.txt, than git add . as this increases the file sixe of the repository and sometimes you dont want to add larger files to it**

	git commit -m "commit message"

or if you have a lengthy description for a bug that you might have fixed

	git commit (this will open your default code editor)

You'll write a short discription no longer than 80 char, and then after that your long discription explaining the issue that was solved.

6. To track the status of our project and see any untracked files and commits

	git status

7. 
