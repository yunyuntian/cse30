/*
 * Filename: findMax.c
 * Author: TODO: Enter your name
 * Userid: TODO: Enter your cse30 login id
 * Description: Print out an array in reverse order
 * Date: TODO: Enter the date you first modified this file
 * Sources of Help: TODO: List all the people, books, websites, etc. that you
 *                  used to help you write the code in this source file.
 */

#include <stdio.h>
#include <limits.h>

/*
 * Function Name: findMax()
 * Function Prototype: int findMax( int array[], int length );
 * Description: Finds the maximum element in the array
 * Parameters: array - the array to find max from
 *             length - the length of the array
 * Error Conditions: None
 * Return Value: the max value of the array
 */
int findMax( int array[], int length ) {
  int max = INT_MIN;

  for (i = 0; i < length; i++ ) {  
    if (array[i] > max) {
        max = array[i];
    }
  }
  return max;
}
