//Jamal Galette
//Assignment 7
//3/24/15
//COP 3223
#include<stdio.h>

int main()
{
    // Initialize ID value and N to 0 so that gibberish isnt generated.
    int ID=0;
    int N = 0;
    //Scan in user input and store to value of N to give program a limit of N-1 because of how array locations start at 0.
        scanf("%d",&N);
    // Initialize and characterize remainging values used
    int i;
    char A, B, C, D, vote;
    //Set up vote counters for letters
    int Acount, Bcount, Ccount, Dcount =0;
    //Start array and begin the required loop for arrays
    int IDarray[N];
    //Loop has limit of N and accounts for each time ran
        for(i=0; i<N; i++){
            IDarray[i] = 0;
        } //close array loop
            //Loop checks while ID is never -1 then account for votes
            while(ID != -1){
                printf("What is your ID?\n");
                scanf("%d", &ID);
                //Once ID does become -1 sort out greatest value of votes and declare winner
                if(ID == -1){
                    if(Acount > Bcount && Acount > Ccount && Acount > Dcount){
                            printf("%c wins with %d votes! \n", 'A', Acount);
                        }
                        if(Bcount > Acount && Bcount > Ccount && Bcount > Dcount){
                            printf("%c wins with %d votes! \n", 'B', Bcount);
                        }
                        if(Ccount > Acount && Ccount > Bcount && Ccount > Dcount){
                            printf("%c wins with %d votes! \n", 'C', Ccount);
                        }
                        if(Dcount > Acount && Dcount > Bcount && Dcount > Ccount){
                            printf("%c wins with %d votes! \n", 'D', Dcount);
                        }

                        break;
                } // close if -1
                        // If their ID was used dont allow them to vote under that ID and continue
                        if(IDarray[ID] != 0){
                            printf("You have already voted. You cannot vote again.\n");
                            continue;
                        } // close array !0
                                // Ask for vote using correct ID and add one to ID array to show each ID has voted
                                printf("Welcome %d, which vote would you like to place?\n", ID);
                                scanf(" %c",&vote);
                                IDarray[ID] +=1;
                        // Count vote for letters and show it has been processed
                        if(vote == 'A' || 'a'){
                            Acount++;
                            printf("You have successfully voted for %c \n", 'A');
                        } // close if A
                        else if(vote == 'B' || 'b'){
                            Bcount++;
                            printf("You have successfully voted for %c \n", 'B');
                        } // close if B
                        else if(vote == 'C' || 'c'){
                            Ccount++;
                            printf("You have successfully voted for %c \n", 'C');
                        } // close if C
                        else if(vote == 'D' || 'd'){
                            Dcount++;
                            printf("You have successfully voted for %c \n", 'D');
                        } //close if D
                    } // close while != -1


return 0;
}
