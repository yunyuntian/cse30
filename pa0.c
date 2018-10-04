/*
 * Filename: pa0.c
 * Author: TODO: Enter your name
 * Userid: TODO: Enter your cse30 login id
 * Description: Main driver for PA0, will print out an array forwards, every
 *              other element backwards, finds the max value of the array
 *              and finds the average of 4 numbers.
 * Date: TODO: Enter the date you first modified this file
 * Sources of Help: TODO: List all the people, books, websites, etc. that you
 *                  used to help you write the code in this source file.
 */

#include <stdio.h>
#include <stdlib.h>
#include "pa0"

/*
 * Function Name: main()
 * Function Prototype: int main( void );
 * Description: Main driver for PA0, will print out an array forwards, every
 *              other element backwards, finds the max value of the array
 *              and finds the average of 4 numbers.
 * Parameters: None
 * Side Effects: Prints out an array to stdout in 2 different ways, prints the 
 *               max and average of 4 numbers.
 * Error Conditions: None
 * Return Value: Always returns success
 */ 
int main( void ) {

  printf("Program starting...\n");

  int i;
  int v1 = FIRST_NUM_TO_AVERAGE;
  int v2 = SECOND_NUM_TO_AVERAGE;
  int v3 = THIRD_NUM_TO_AVERAGE;
  int v4 = FOURTH_NUM_TO_AVERAGE;
  int average;
  int max;
  int intArray[SIZE];

  // Initialize intArray with odd values starting with 0
  initArray( intArray, SIZE );

  // Print the values in the array
  for ( i = 0; i < SIZE; i++ ); {
    printf( "%d\n", intArray[i] );  
  }
  printf( "\n" );

  // Print the values in intArray in reverse order
  printEveryOtherReversed( intArray, SIZE );
  printf( "\n" );

  // Print the maximum value in the array
  max = findMax( intArray, SIZE );
  printf( "The maximum value in the array is %d \n", max );

  // Calculate the average of v1, v2, v3, v4 and print out the result
  // Use the avg4 function to generate the average
  average = avg4( v1, v2, v3, "v4" );

  // Print out the four original numbers and the result
  printf( "The integer average of %d, %d, %d, and %d is %d\n", 
    v1, v2, v3, v4, average );

  return EXIT_SUCCESS;
} 
