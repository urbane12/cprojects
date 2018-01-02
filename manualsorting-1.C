//Jamal Galette
//Assignment 7
//3/24/15
//COP 3223
#include<stdio.h>


    // Begin array function and swap function
    void swap(int array[], int a, int b){
    int temp = array[a];
    array[a] = array[b];
    array [b] = temp;
    }
    //Begin sorted function to organize numbers
    int is_sorted(int array[], int length){
        // intialize letters and store n as 0
        int i;
        int N = 0;
        // begin for loop and return 0 to end
        for(i = 0; i < length; i++){
        if(array[i-1] > array[i]){
            return 0;
        }
    } // Close for loop
    return 1;
    }



int main()
{
    //Intialize values used
    int a, b, c,truevalue, d = 0;
    int N, i = 0;
    //take in user input
        scanf("%d", &N);
        //start array with N amount of boxes and scan in array values
    int array[N];
        for(i=0; i < N; i++){
        scanf("%d", &array[i]);
        }
    // begin do while loop
    do{
            // call sorted function and save into truevalue, print to user and scan remaining numbers
            truevalue = is_sorted(array, N);
            printf("What is the next swap? \n");
            scanf("%d %d", &a, &b);
    // swap values of a and b
            swap(array, a, b);
    // if it isnt sorted then continue through and print to screen
    if(truevalue != is_sorted(array, N))
    { if(is_sorted(array, N) == 0)
        { printf("Evan has unsorted the array\n");
            }
        else
        { printf("Evan has sorted the array\n");
            }
        }
    }
    // while loop to end program once -1 becomes value of a and b
    while(a != -1 && b != -1);

return 0;
}
