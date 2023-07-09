
# Permissions

Most operating systems such as Linux are multitasking and multi-user, which means that more than one user can access the computer at the same time. You can do this by
remote access and a user can log in via ssh (secure shell) and operate the system via a secure internet connection. 

Shell permissions is a way of controlling not only access to file and directories in your computer but also a way of interacting with them. So it is important to protect the users from each other and the access they have to each others files/directories.

### su / sudo

These two initial commands allows the user to become temporarily the superuser which can give them access to more administrative tasks

We can view permissions of a file with a simple command in our terminal:

    > ls -l
    
Result:

    -rwx-wxr-x 1 root root 1113504 Jun 6 2019  /bin/queen
    drwx-wx-r- 1 root root 1111123 July 6 2023 /bin/werk
    lrwd-wxrwx 1 root root 9182892 July 6 2022 /bin/slay

This indicates what kind of file it is, the permission of the file, the owner, group owner and other users of the file, the date it was created and the path you can find this specific file. 

    '-' at the start of the permission file indecates a **normal file**
    'd' at the start of the permission file indecates a **direcotry**
    'l' indecates a **symbolic link**, and usually points to the path linked file

To better understand the values of these permissions

    r - read    value of 4
    w - write   value of 2
    x - execute value of 1

And a combination of these can make up a sum of **7** or less. To use a previous example above:

    > drwx-wxr-x 1 root root 1111123 July 6 2023 /bin/werk
    
    we can tell that this is a:
    
    * Directory because of the 'd'
    * Read, write, executable permission for the **owner    7**
    * write and executable permission for the **group       3**
    * Read and executable permissions for **others          5**
    * we can tell the owner and group owner is **root**
    * The file was created on July 6 2023
    * The path is /bin/werk

---

## Changing the permissions

There are a few ways to change the permission of a file and the ownership of them

1. chown - changes changes the owner of a file

This requires you to be the superuser in order to use this command. su / sudo.

2. chngrp - changes the group owner of the files

3. chmod - this modifies the access rights of the file

<sub>NB!!These command can also be used with extended flags! man these commands to see a list of them</sub>

Lets dissect each command:

### **chown**

As we said before, this requires superuser privileges so the command we will use will be..

    > sudo chown NewOwner filename

    * sudo          allows us to make the changes we need
    * chown         allows us to switch owners of the file
    * NewOwner      the name of the new owner/user you are switching the file to (they should already exit on the system, if not create the new user)
    * filename      and of course, the name of the file you will be changing owners of

### **chngrp**

Changing groups are quite easy

    chgrp NewGroup filename

    * chgrp      allows you to change the group owner
    * NewGroup   The name of the new group
    * filename   The name of the file you will be affecting

### **chmod**

Chmod is a bit special as there are two ways we can affect the file we want to change the mode of

We can use the rwx: read, write, execute, method or the octal method where we use the number variables of these values

rwx method:

This is usually to ADD/SUBTRACT certain permissions to the files existing permissions

    > chmod ugo+rwx filename
    
    * chmod         Allows us to change the permission of the file
    * ugo           This indicates the u - user/owner, g - group owner, o - other users
    * arithmetic    we can +, -, or =, the value to take affect
    * rwx           read, write, execute
    * filename      The file we will affect

Octal method:

This usually overrides previous permissions of a file and ignores it

    > chmod 777 filename

    * chmod     Allows us to change the permission
    * 777       the 7 is a sum of read, write, execute for the owner, the second 7 is read,write,execute for the group owner, and the third 7 is read,write,execute for the other users
    * filename  the file being affected


---

other helpful tips with flags!

if you want to create a new file/directory with set permissions you can use the mkdir  with a flag and the octal code you'd like

    > mkdir -m 700 filename

    * mkdir     creates a directory
    * -m        the flag that would set the permission
    * 700       7 would be read,write,execute for owner, and nothing for groups and other users
    * filename  The name of the file you will create

we can also use copy permissions

    > chmod --reference=Rfilename theFile
    > sudo chown --reference=Rfilename theFile

    * chmod / chown     Can be used with chown or chmod
    * --reference=      This will reference the files permission you want to copy
    * Rfilename         This being the file you are referencing
    * theFile           The file you are copying the permissions to

You can also be specific with your files and chose to only change files with owner of a specific file

    > sudo chown --from=owner:group_owner(optional) newOwner filename

    * sudo                  chown needs superuser privileges
    * chown                 changes owner
    * --from=               changes from
    * owner:group_owner     the pervious owner && || previous group owner
    * newOwner              Name of the new owner, group owner
    * filename              the file specified


