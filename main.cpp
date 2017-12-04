/**
 * Cashion Penha
 * Lab 1
 * Celsius to fahrenheit
 * 01/10/2017
 */

#include <iostream> /** Preprocessor Directive */

using namespace std;/** Includes commonly used tools, such as cout,cin, To prevent typing "std" */

int main(void)/** Function called main which returns an integer value, while nothing is being passed into function */
{
    double f,c;/** Declaring variable in this case Celsius & Fahrenheit */

    cout << "Lab 1 - Celsius to Fahrenheit Temperature Conversion" << endl;/** Title and purpose of the program */

    cout << "\nPlease enter temperature in degree Celsius:";/** Requesting user for temperature in degrees Celsius */
    cin >> c;/** assigning input by user to c, storing data in to buffer*/

    f=(9.0/5.0)*c+32;/** Applying formula to perform conversion */

    cout << "\nThe corresponding temperature in degrees Fahrenheit is:" << f << endl;/** Displaying results back to the user */

    return 0;/** end of program */
}


