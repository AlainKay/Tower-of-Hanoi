
/*
 Alain_Kay
 
 Project: Resolving the Tower of hanoi using recursion
 
 
 
A. How the game is played: All the disks on the origin tower (A) have to me moved to the final tower(c) by movng only one disk at a time and by also making sure to place a larger on top of a smaller one.
 
B. The objective of the program: is to design an executable program that solves the tower of Hanoi puzzle (step by step)and record the execution time (in seconds) with different number of disks.
 
C. Algorithm and strategy: here is how i plan to reolve the puzzle:

    0. Record pre-execution time
    1. Move a tower of Num_Disks-1 to an auxilliary pole, using the final pole.
    2. Move the remaining disk to the final pole (C).
    3. Move the tower of Num_Disks-1 from the intermediate pole to the final pole using the original pole
    4. Record post-execution time
 
D. Pseudocode:
 
 If Num_Disks == 1 : Move disk from origin (A) to finalDestination (B)
 
    else if (Num_Disks > 1)
 
 Tower_Hanoi (Num_Disks-1, origin, finalDestination, aux)
 Move disk from origin to finalDestination
 Tower_Of_Hanoi (Num_Disks-1, aux, finalDestination, origin)
 
 */


#include<iostream> //header to use the i/0 stream
#include <ctime>//header to use time function

using namespace std;

void Tower_Hanoi(int, char, char, char); // function to identify  variables

int main()


{
                    
                    long int time1, time2; //variables to keep track of the execution time
                    
                    
                    int Num_Disks; //variable to represent the number of disks
                    
                    cout<<"Enter the number of disks : "; //output to ask the user to ender number of disks
                    cin>>Num_Disks; // number of disks input
                    
                     time1 = time(0); // time before execution
                    cout<<"The sequence of moves involved in the Tower of Hanoi are :\n";
                    
                    Tower_Hanoi(Num_Disks, 'A', 'C', 'B'); //assigning an identify to previosusly declared data of towers function
                    
                    time2 = time(0); // time after execution
                    cout<<endl;
                    
                    cout << "Execution time: " << time2 - time1 <<" seconds"<< endl; // function to calculate  execution time in seconds
                    return 0;
}



void Tower_Hanoi(int num, char origin, char finalDestination, char aux) // //assigning names to previosusly declared data of towers function
{
                   if (num == 1)
                    {
                                        //following output is retuned when the input is one disk
                                        cout<<"\n Move disk 1 from towerr "<<origin<<" to towerr "<< finalDestination;
                                        return;
                                        
                                        
                                        }
                    else if (num>1)
                                        
                    Tower_Hanoi(num - 1, origin, aux, finalDestination); //funtion to move the num-1 disks from origin tower to auxilliary tower using the finalDestination tower
                    
                    cout<<"\n Move disk "<<num<<" from tower "<<origin<<" to tower "<<finalDestination;
                    
                    Tower_Hanoi(num - 1, aux, finalDestination, origin); //funtion to move the num-1 disks from aux tower to finalDestination tower using the origin tower
                    
}


