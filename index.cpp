#include <iostream>
#include <string.h>
using namespace std;
/*
Questions
1. write a function that accepts an input and then searches myArray for this input. The function should returns true if found and false other wise

2. write a function that returns (or prints) the minimum value among the first n elements of myArray.

3. write a function that returns (or prints) both the maximum and minimum values of myArray. use reference parameters.

4. write a function that returns (or prints) both the largest and second largest values in myArray. use reference parameters. Note: largest and second largest can equal (e.g. a[5] = {3,1,2,3,2}).

5. write a function that returns (or prints) the standard deviation of a data set 

6. write a function that accepts one line of text as input and prints out thesame text with upper case characters.

7. write a function that accepts one line of text as input and prints out the text with the words reversed (e.g. input: Thank god its friday; output: friday its god thank)

8. write a function that reads full names and prints them out in standard telephone directory format (e.g. input: Martin Luther King; output: King, Martin L.)

9. write a function that returns the number of lines, words and letter frequency in its input.

10. write a function that takes an integer as input and return (or prints) its correspnding roman numeral. (e.g. input: 16; output: XVI).

11. write a function that accepts a string as input and returns (or prints) the reversed string. (e.g. input: 'fgbcapo'; output: 'opacbgf' ).

12. Explain the running time of each function you write using big O notation.

*/

/*
Example
1. write a function that accepts myArray and arraySize as input and then prints all the element of myArray.
*/

void printArray(int [], int);
bool searchMyArray(int [], int, int);

int main(){
    int myArray[6] = {11,34,7,8,-2,0};
    int arraySize = 6;
    int myInput = 0;
    bool result;

    //printArray(myArray, arraySize);
    //cout << "enter number"<< endl;
    //cin >> myInput;
    result = searchMyArray(myArray, arraySize, myInput);
    cout << "result = "<<result;
    return 0;
}

//question1 
void printArray(int myArray[], int arraySize){
    for (int i=0; i<arraySize; i++){
        cout << myArray[i] << "," <<endl;
    }
    //O(arraySize)
}
//question 2
bool searchMyArray(int myArray[], int arraySize, int myInput){
    for(int i=0; i<arraySize; i++){
        if (myArray[i] == myInput){
            return true;
        }
    }
    return false;
}
