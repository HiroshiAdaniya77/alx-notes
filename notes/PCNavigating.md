
# Navigating through your PC with the Terminal

As we have learned so far, WSL (Windows subystem for Linux) is a way of interacting with a non windows environment on a windows computer. You can easily do this by installing a WSL from the Microsoft store. (follow the instructions in the SystemSetup.md file)

After working with the WSL for some time, I wondered if i could actually navigate through my PC with the WSL and it turns out you can! Not only can you navigate though your PC's system but create files and access them through the terminal! It's really simple!

### Here is how

1. You'll need to navigate to the very beginning of your systems $PATH by either constantly 'cd ..' until you reach the end or 'cd /'
	
	* the forward slash '/' represents the beginning of the PATH.

2. You'll then need to 'cd' into a file named '**mnt**'. From their you can can cd into the **c** directory, and then into the **Users** directory, and then finally into the directory that has your name/ systems name.

	* After following all these steps, my PATH would look like this:

		/mnt/c/Users/hiros/

Here you'll find all the files that are on your windows system pertaining to the user. You can access the Desktop, photos, documents, etc.

3. You can now create files, delete files, move files as you wish.
