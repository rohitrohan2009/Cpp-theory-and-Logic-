#include <iostream>
#include <string>
using namespace std;

int main()
{
    //here we discuss structures and unions(two useful concepts)
    //Structures help store multiple pieces of data in one type, very contradictory to arrays.(but can structures store arrays too?)
    //NOTE: must use string header file

    struct milkShake
    {
        string shakeName;
        string shakeOrigins;
        int shakeCalories;
    };

    milkShake method1={"MangoShake", "Italy", 500};//For method1, we assign values in the curly braces
    milkShake method2;//For method2, we assign values in the form of dot notations
    method2.shakeName="Robert Shake";
    method2.shakeOrigins="America";
    method2.shakeCalories=498;
    cout<<"Name of the shake: "+method2.shakeName+" is from "+method2.shakeOrigins+" with "<< method2.shakeCalories <<" calories."<<endl;//before any
    //numeric representation data type, we can't use the + sign before or during it's initialization, even in the front or back due to
    //operand issues, that '+' can't be used before(or after) the numeric types are in the code, out to be outputted.

    //--------------------------------------------STRUCTURES(STRUCT)-------------------------------------------------//

    //unions represent and allow one data type at a time to be printed except for multiple of the
    //same type, slightly differing with structures. This is to help with computers/devices with/running on limited memory
    union numericUnion
    {
        int intValue;
        long longValue;
        double doubleValue;
    };
    numericUnion myUnion;
    myUnion.intValue = 3;

    cout<< myUnion.intValue<<endl;

    myUnion.doubleValue = 4.5;

    cout<< myUnion.doubleValue<<endl;
    cout<< myUnion.intValue<<endl;//The union can only store a value in one of its fields at a time. therefore the int value is lost the
    //second time we try to output it thereby outputting 0 the second time it is called to o/p.
    //Limited memory explanation for devices: For example, part numbers for components in manufacturing where the part number may be a number
    //or perhaps a string, dependingon the manufacturer of the part. In this case, you could use the union to represent a numeric and
    //a string data type internally but only assign the proper data type based on the part number.

    //-----------------------------------------------UNIONS----------------------------------------------------------//

}
/*output: '
Name of the shake: Robert Shake is from America with 498 calories.
3
4.5
0

'
*/
