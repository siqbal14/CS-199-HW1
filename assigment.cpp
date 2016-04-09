#include <iostream>
#include <string>

using namespace std;

/**
*
*This function should take two integer paramters and return the sum of the two numbers
*
**/
int sum(int param, int param2)
{
return param+param2;
}

/**
*
*This function should take two integer paramters and return the product of the two numbers
*
**/
int multiply(int param, int param2)
{
return param*param2;
}
/**
*
*This function should take two integer pointer as paramters and return the sum of the two numbers that the pointers are pointing to.
*
**/

int pointerSum(int *param, int * param2)
{
return *param + *param2;
}

/**
*
*This function should take two integer pointer as paramters and return the PRODUCT of the two numbers that the pointers are pointing to.
*
**/

int pointerMultiply(int *param, int * param2)
{
return *param * *param2;
}
/**
*
*This function creates an array of size 15. You will initiliaze the array with whatever elements you want. You will then print out the contents of the array.
*
*Make sure you free all the meomory once you are done printing.
**/
int create1dArray()
{
for(int i=0; i<=15;i++){
  arr[i]= new arr [i];
  cout<<arr[i]<<" ";
}
}
void create1dArray::clear(){
  for(int i=0; i<=15 ; i++){
    delete arr[i];
    arr[i]=NULL;
  }
}
/**
*
*This function creates a 2-d array on the heap of size 5 X 5. You will initiliaze the array with whatever elements you want. You will then print out the
*contents of the 3-d array.
*
*Make sure you free all the meomory once you are done printing.
*
**/

int create2dArray()
{
int arr2 [6][6];
for(int i=0; i<6; i++)	{
		for(int j=0; j<6; j++) {
			cout << arr2[i][j]  << "  ";
		}
		cout << endl;
	}
}
void create2dArray::clear(){
  for(int i=0; i<6 ; i++){
    for(int j=0; j<6; j++){
    delete arr2[i][j];
    arr[i][j]=NULL;
  }
  }
/*
*This is where you the program execution starts and you will be calling the functions you implemented from the  main function.
*/
int main()
{
int sumInt;
int product;
int pointSum;
int pointerProduct;
int param;
int param1;
int *param;
int *param1;
int arr[i];
int arr2[i][j];
sumInt= sum(param,param1);
product=multiply(param,param1);
pointSum= pointerSum(*param, *param1);
pointerProduct= pointerMultiply(*param,*param1);
}
