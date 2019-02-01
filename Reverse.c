#include<iostream>
#include<bits/stdc++.h>

/**
 * Reverses a given long long integer.
 */
long long reverseNumber(long long input) {

    long long reversed = 0;

    // Reverse a given integer.
    while(input) {
        reversed = reversed * 10 + (input % 10);
        input /= 10;
    }

    return reversed;

}



static char resultString[16];
bool isPalindrome(long long sum) {

    int  i = 0;

    // Convert integer to String.
    while(sum) {
        resultString[i++] = sum % 10;
        sum /= 10;
    }

    // Check if the String is palindrome.
    for(int j = 0, k = i - 1; j < k; ++j, --k) {
        if(resultString[j] != resultString[k])
            return false;
    }

    return true;
}


int main() {

    long long input;
    unsigned times, iterations;

    scanf("%u", &times);

    while( times-- ) {

        scanf("%lld", &input);

        iterations = 0;


        while( true ) {
            // Add input with reversed of the input.
            input += reverseNumber(input);
            ++iterations;

            // Check if the sum is palindrome then print and break.
            if( isPalindrome(input) ){
                printf("%u %lld\n", iterations, input);
                break;
            }

        }

    }


    return 0;
}
