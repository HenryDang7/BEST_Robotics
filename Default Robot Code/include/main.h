/* 
 * In case you are new to the C Programming Language, a "Header" is file with the ".h" extension.
 * It allows for the declaration of multiple functions to be used anywhere within the "src" (Source) folder.
 * However, said functions are NOT defined here; they are defined within a C File (Ending in ".c") in the "src" (Source) folder.
 * Having multiple definitions will result in a compiling error.
*/ 

#ifndef MAIN_H_

#define MAIN_H_

#include <API.h>

void initializeIO();
void initialize();
void autonomous();
void operatorControl();

#endif