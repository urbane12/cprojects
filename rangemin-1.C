//Jamal Galette
//Assignment
//Date
//COP 3223
#include<stdio.h>

// begin increment function and intiliaze values, begin for loop
void increment_range(int array[], int low, int high, int amount){
    int i;
    for(i = low; i <= high; i++){
        array[i] = array[i] + amount;
    }
}
//begin get range function and intialize values
int get_range_min(int array[], int low, int high){
    int i;
    int first = array[low];
    // start for loop
        for(i = low; i <= high; i++){
            if(array[i] < first) {
                first = array[i];
            } // close if
        } // close for loop
        // return first which is is what array funtion for low was saved as
    return first;
}

int main()
{
    // intialize values used and scan in user inputs for N and the character that comes before
    int i;
    int L, H, V, N, first;
    char ch;
        scanf("%d",&N);
        scanf("%c", &ch);
        // start/initialize array for n value. save arrays all set to 0
        int array[N];
            for(i = 0; i < N; i++){
                array[i] = 0;
            }
            // if user doesnt input e as the letter then go through loop and scan in values
        while(ch != 'E' || ch !='e'){
            scanf("%c", &ch);
            // if a is inputted then scan 3 numbers and put into increment func
            if(ch == 'A' || ch =='a'){
                scanf("%d %d %d", &L,&H, &V);
                increment_range(array, L, H, V);
            }
                // else if m pops up scan 2 numbers and save get range into first func while printing values
                else if(ch == 'M' || ch == 'm'){
                    scanf("%d %d", &L, &H);
                    first = get_range_min(array, L, H);
                    printf("The minimum value currently in the range [%d,%d] is %d. \n", L, H, first);
                }
                    // if e pops up break out loop and end program
                    else if(ch == 'E' || ch == 'e'){
                        break;
                    }
        }

return 0;
}
