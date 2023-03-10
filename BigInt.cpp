#include "functions.h"
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // string str1;
    // string str2;

    // cin>>str1>>str2;
    // cout<< "Difference between "<<str1 << " and "<<str2<<" :\n"; 
    // cout << Bigint(str1, str2, "sub")<< endl;
    // cout<<"\n";

    // cout<< "Addition of "<<str1 << " and "<<str2<<" :\n"; 
    // cout << Bigint(str1, str2, "sum")<< endl;
    // cout<<"\n";
    
    //-----------------------OR-------------------------//


    cout << Bigint("211123456789234567890123", "121234567892345678932", "sum") << endl;
    cout << Bigint("-211123456789234567890123", "121234567892345678932", "sum") << endl;
    cout << Bigint("211123456789234567890123", "-121234567892345678932", "sub") << endl;
    cout << Bigint("-211123456789234567890123", "-121234567892345678932", "sub") << endl;
    
    //-----------------------OR-------------------------//

    // // Cases for positive and negative numbers

    // cout << Bigint("-21", "-12", "sum") << endl;
    // cout << Bigint("-12", "-21", "sum") << endl;
    // cout << Bigint("-21", "-12", "sub") << endl;
    // cout << Bigint("-12", "-21", "sub") << endl;

    // cout<<"\n";

    // cout << Bigint("21", "-12", "sum") << endl;
    // cout << Bigint("12", "-21", "sum") << endl;
    // cout << Bigint("21", "-12", "sub") << endl;
    // cout << Bigint("12", "-21", "sub") << endl;
    
    // cout<<"\n";

    // cout << Bigint("-21", "12", "sum") << endl;
    // cout << Bigint("-12", "21", "sum") << endl;
    // cout << Bigint("-21", "12", "sub") << endl;
    // cout << Bigint("-12", "21", "sub") << endl;
    
    // cout<<"\n";

    // cout << Bigint("21", "12", "sum") << endl;
    // cout << Bigint("12", "21", "sum") << endl;
    // cout << Bigint("21", "12", "sub") << endl;
    // cout << Bigint("12", "21", "sub") << endl;

    // cout<<"\n";

    return 0;
}