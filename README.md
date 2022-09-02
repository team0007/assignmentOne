# Assignment One
You are responsible for answering every question individually. 
### Questions
1. write a function that accepts an input and then searches myArray for this input. The function should return true if found and false other wise

2. write a function that accepts myArray and n as inputs then returns (or prints) the minimum value among the first n elements of myArray.

3. write a function that returns (or prints) both the maximum and minimum values of myArray. use reference parameters.
```cpp 
void getArrayMaxMin(float& min, float& max, float myArray[], int arraySize)
 ```

4. write a function that returns (or prints) both the largest and second largest values in myArray. use reference parameters. Note: largest and second largest can equal (e.g. a[5] = {3,1,2,3,2}).
```cpp
void twoLargest(float& maxOne, float& maxTwo, float myArray[], int arraySize)
```

5. write a function that returns (or prints) the standard deviation of a data set 

6. write a function that accepts one line of text as input and prints out thesame text with upper case characters.

7. write a function that accepts one line of text as input and prints out the text with the words reversed (e.g. input: Thank god its friday; output: friday its god thank)

8. write a function that reads full names and prints them out in standard telephone directory format (e.g. input: Martin Luther King; output: King, Martin L.)

9. write a function that returns the number of lines, words and letter frequency in its input.

10. write a function that takes an integer as input and return (or prints) its correspnding roman numeral. (e.g. input: 16; output: XVI).

11. write a function that accepts a string as input and returns (or prints) the reversed string. (e.g. input: 'fgbcapo'; output: 'opacbgf' ).

12. Explain the running time of each function you write using big O notation.
### Example

1. write a function that accepts myArray and arraySize as input and then prints all the element of myArray.

```cpp
void printArray(int [], int);

int main(){
    int myArray[6] = {11,34,7,8,-2,0};
    int arraySize = 6;

    printArray(myArray, arraySize);

    return 0;
}

void printArray(int myArray[], int arraySize){
    for (int i=0; i<arraySize; i++){
        cout << myArray[i] << ",";
    }
}
```
2. write a function that accepts an input and then searches myArray for this input. The function should return true if found and false otherwise.

```cpp
void printArray(int [], int);
bool searchArray(int [], int);

int main(){
    int myArray[6] = {11,34,7,8,-2,0};
    int arraySize = 6;

    printArray(myArray, arraySize);
    res = searchArray(myArray, n)

    return 0;
}
//question 1
void printArray(int myArray[], int arraySize){
    for (int i=0; i<arraySize; i++){
        cout << myArray[i] << ",";
    }
}

//question 2
bool searchArray(int myrray[], int n=4){
    for (int i=0; i<n; i++){
        //if ( myArray[i] is minimum)
            return true;

    }
}
```
