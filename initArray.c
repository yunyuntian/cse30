/*
 * Filename: initArray.c
 * Author: TODO: Enter your name
 * Userid: TODO: Enter your cse30 login id
 * Description: Initialize an array with perfect squares starting from 0
 * Date: TODO: Enter the date you first modified this file
 * Sources of Help: TODO: List all the people, books, websites, etc. that you
 *                  used to help you write the code in this source file.
 */

/*
 * Function Name: initArray()
 * Function Prototype: void initArray( int array[], int length );
 * Description: Initializes values in an array to be perfect squares starting 
 *              from 0
 * Parameters: array - the array to initialize
 *             length - the length of the array
 * Side Effects: Initializes the values of the array
 * Error Conditions: None
 * Return Value: None
 */
void initArray( int array[], int length ) {
  int i = 0;

  while ( i < length ) {
    array[i] = i * i;
  }
}
