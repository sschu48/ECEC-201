/* ECE-C201
 * Lab 1
 *
 * In this lab you will learn:
 * 1. How to edit, compile, and run a simple C program
 * 2. How to upload an assignment to BBLearn
 *
 * STEP 1
 *  Edit the printf() statement on Line 79.
 *  Change my name to yours.  Also, replace my favorite
 *  food with your favorite food.
 *
 * 
 * STEP 2
 *  Now, in the terminal window, type 'ls' and hit enter.
 *  This will display all the files in your working directory.
 *  You should only see this C source file that you are currently
 *  reading (named lab1.c)
 *
 *  Tip: For more detailed information try typing 'ls -l'
 *      This will produce a "long listing" that contains more
 *      information about each file, like its size in bytes.
 *
 *
 * STEP 3
 *  Compile your program manually by typing 'gcc -o lab1 lab1.c'
 *  in the terminal window and hitting enter.
 *
 *  Now, if you list the files in your directory using 'ls' you
 *  will see a new file named 'lab1' -- this is your compiled program!
 *
 *
 * STEP 4
 *  Run your compiled program by typing './lab1' into the terminal
 *  window and hitting enter!
 *
 *  Congratulations!  You compiled and ran a simple C program!
 *
 *
 * STEP 5
 *  Download your project workspace by clicking the three dots next to
 *  the Add Folder icon found at the top of the panel to the left.
 *   
 *  Select "Download as zip" and save the zip file to your computer.
 *
 *
 * STEP 6
 *  Rename your downloaded zip file to 'lab1-abc123.zip'
 *
 *  Use your Drexel username instead of abc123! :)
 *
 *
 * STEP 7
 *  Upload your zip file to BBLearn for Lab 1.
 *
 *
 * STEP 8
 *  Have the TA check off that you have done everything correctly to
 *  receive credit.
 *  
 *  You have completed Lab 1!
 * 
 *  You now know how to use replit to compile and run a C program AND
 *  how to submit homework assignments for this class!
 */

#include <stdio.h>

int main()
{
    /* This printf() statement will display 'Hello World!' 
       Notice how you must manually specify a newline by using
       the escape code '\n' A newline moves the cursor to the start
       of the next line. */
    printf("Hello World!\n");

    /* Notice how you may specify a newline anywhere in the string!
       This will print 'I like sushi!' on its own line. */      
    printf("My name is Shack.\nI like sushi!\n");

    return 0;
}