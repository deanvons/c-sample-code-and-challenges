#include <stdio.h>
#include <stdlib.h>

/**
 * === Planetary Alignment === 
 *
 * Context:
 *  - three planets revolving around a star
 *  - each orbit takes x units of time
 *  - unit of time: one day (86,400 seconds)
 * 
 * Goals:
 *  - calculate how many days elapse between planets linear alignment
 *  - calculate how many revolutions each planet makes around the star in this time
 * 
 * Tips:
 *  - orbits duration: a, b, c (days) --> linear alignment every lcm(a, b, c) days
 *  - each planet completes lcm(a, b, c) / x orbits around the star
 * 
 * Trace:
 *  - get the duration (in days) of orbits a, b, c from the user
 *  - calculate lcm(a, b, c):
 *    > store the maximum between a, b, c
 *    > iterate no more than 10,000 times
 *    > check lcm(a, b, c) using the stored max and the modulo operator
 *    > if exceeded the maximum number of iterations: print a warning
 *    > else: print the result and the number of complete revolution for each planet
 * 
 * 
 * Test:
 *  - calculate Earth-Venus-Mercury linear alignment
 *  - calculate Earth-Mars-Jupiter linear alignment
 *  - check orbits duration here: https://spaceplace.nasa.gov/years-on-other-planets/en/
 * 
 */

int main()
{
    
    return EXIT_SUCCESS;
}
