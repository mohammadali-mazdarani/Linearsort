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

void getarraynu(int b[],int &c);

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

//Declar array
int a[n];

//Get number of array
getarraynu(a , n); 
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

//Function for get number of array
void getarraynu(int b[],int &c)
{

    for(int i=0; i<c; ++i)
    {

     cout<<"["<<i<<"] = ";

     cin>>b[i];

    }

}
