#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/*branch name
*
*
*
*/
//prototype

int getindexnu();


//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declare number of index of array
int n;

//Get number index of array 
n = getindexnu();

getch();
}
//function variable
//--------------------------
//Functions

//Function for get number index of array
int getindexnu()
{
    int a;
    cout<<"Enter number of array = ";
    cin>>a;

    return a;
}
