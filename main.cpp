#include <iostream>

using namespace std;

int main()
{
    /*--------------------------------ARRAYS----------------------------------*/
    int arrayName[10]; //initialize arrays like this
    int arr1[5]={1,2,3}; //we can use 'const' for an array too
    cout<<"arr1[] elements: "<<endl;
    for(int i=0; i<9; i++)
    {
        cout<< arr1[i]<<" ";
    }//but when we try to access more element indexes despite of having less array assigned then garbage values
     //will come up
    cout<<endl;
    int arr2[]={1,3,5,7,8,9};//compiler in this case automatically decides how large the array will be and dedicates memory to it accordingly
    cout<<"arr2[] elements: "<<endl;
    for( int i=0;i<6;i++)
    {
        cout<< arr2[i]<<" ";
    }
    cout<<endl;
    int arr3[10]={3,4,5};//rest of the 3rd,4th,5th....9th values are initialized to zero(0) and is outputted as such
    cout<<"arr3[] elements: "<<endl;
    for( int i=0; i<10; i++)
    {
        cout<< arr3[i]<< " ";
    }
    cout<<endl;

    //--------------------------------ARRAYS----------------------------------//

    char isAString[6]={'H','e','l','l','o','\0'};//initialize using C style string array using "null character": \0
    char isNotAString[5]={'H','e','l','l','o'};//used isNotAString[5] instead of [6]. if [6] was put it automatically adds a \0 even if there are at
    //5 characters or less but when lesser array is assigned in the first place then garbage and/or unexpected values are likely to show.

    cout<< isAString<<endl;
    cout<< isNotAString<<endl;//The second(isNotAString) did not terminate(properly?) and outputs the contents of adjacent memory.

    char nextString[6]="Hello";//using string literal to initialize. if any number below [n+1] is used, where n is total no of characters,
    //then it will not compile, saying the array of characters(the total no. of characters) is too long for it. therefore nothing below [n+1]
    cout<<nextString<<endl;

    char nextString2[]="Hello here";//initializing: array size is inferred, here.The second example lets the compiler
    //infer the size( of the array ) from the string literal itself.
    cout<<nextString2<<endl;
    // Note that neither of these two string literals specifies a \0 character. The compiler will implicitly add that for you.

    //we can use the string Class as well(should use string header in the beginning) if you don't wanna work with arrays
    string myString ="Jamie Foxx. "; //great method
    string mynewString ="Less typing here, in this method!\n";
    cout<<myString<<endl;
    cout<<mynewString;
    //--------------------------------STRINGS----------------------------------//

}
