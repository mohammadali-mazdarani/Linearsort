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

int getnu();

void findnu(int d[],int a,int c);

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

//Seperator
cout<<endl<<endl<<"----------------------------------"<<endl<<endl;

//Declar array
int a[n];

//Get number of array
getarraynu(a , n); 

//Seperator
cout<<endl<<endl<<"----------------------------------"<<endl<<endl;

//Declare variable for get a number to find in array
int m;

m = getnu();

//Seperator
cout<<endl<<endl<<"----------------------------------"<<endl<<endl;


//find number
findnu(a,n,m);


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

//Function for get number to find in array
int getnu()
{
    int c;
    cout<<"Enter number of array = ";
    cin>>c;

    return c;
}

//Function for find number in array
//a number of index array 
//c number for find on array

void findnu(int d[],int a,int c)
{
    int counter=0;

    for(int i=0; i<a; ++i)
    {
        if (d[i] == c)
        {
            cout<<"["<<i<<"] = "<<d[i]<<endl;
        }
        else
        {
            ++counter;
        }
    }

    if (counter == a)
    cout<<c<<" not found";
}


