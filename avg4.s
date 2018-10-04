/*
 * Filename: avg4.s
 * Author: Yuren Dong
 * Userid: cs30fiy
 * Description: Average four numbers and return the integer result
 * Date: Oct.3
 * Sources of Help: None
 */

 @ Raspberry Pi directives
        .cpu    cortex-a53      @ Version of our Pis
        .syntax unified         @ Modern ARM syntax

        .equ    FP_OFFSET, 4    @ Offset from sp to set fp

        .global avg4            @ Specicfy avg4 as a global symbol

        .text                   @ Switch to Text segment
        .align 2                @ Align on evenly divisible by 4 byte address;
                                @ .align n where 2^n determines alignment

/*
 * Function Name: avg4()
 * Function Prototype: int avg4( int a, int b, int c, int d );
 * Description: Returns the integer average of the four formal parameters
 * Parameters: a - the first value
 *             b - the second value
 *             c - the third value
 *             d - the fourth value
 * Side Effects: None
 * Error Conditions: None
 * Return Value: The integer average of the four formal parameters
 *
 * Registers used:
 *      r0 - arg 1 -- a, also used as an intermediary
 *      r1 - arg 2 -- b
 *      r2 - arg 3 -- c
 *      r3 - arg 4 -- d
 */
avg4:
@ Standard prologue
        push    {fp, lr}               @ Save registers: fp, lr
        add     fp, sp, FP_OFFSET      @ Set fp to base of saved registers

        @ Incomming parameters in r0, r1, r2, r3
        add     r0, r0, r1             @ a = a + b;
        add     r0, r0, r2             @ a = a + c;
        add     r0, r0, r3             @ a = a + d;

        asr     r0, r0, 2              @ Shift the sum right 2
                                       @ (same as dividing by 4)

@ Standard epilogue
        sub     sp, fp, FP_OFFSET      @ Set sp to top of saed registers
        pop     {fp, pc}               @Restore fp; restore lr into pc for
                                       @return
