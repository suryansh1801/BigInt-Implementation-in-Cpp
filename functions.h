#include <bits/stdc++.h>
using namespace std;

// Function to check string lengths
bool IS_smaller(string str1, string str2)
{
    int s1 = str1.length(), s2 = str2.length();
    if (s1 < s2)
        return true;
    if (s2 < s1)
        return false;
    for (int i = 0; i < s1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    return false;
}
 
// Function to find subtraction
string LargeNo_Diff(string str1, string str2)
{
    int flag = 0;
    if (IS_smaller(str1, str2)){
        swap(str1, str2); 
        flag = 1;
    }
    string temp = "";

    int n1 = str1.length(), n2 = str2.length();
 
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int borrow = 0;
 
    for (int i = 0; i < n2; i++) {
        int diff = ((str1[i] - '0') - (str2[i] - '0') - borrow);
        if (diff < 0) {
            diff = diff + 10;
            borrow = 1;
        }
        else
            borrow = 0;
        temp.push_back(diff + '0');
    }
 
    for (int i = n2; i < n1; i++) {
        int diff= ((str1[i] - '0') - borrow);
        if (diff < 0) {
            diff = diff + 10;
            borrow = 1;
        }
        else
            borrow = 0;
        temp.push_back(diff + '0');
    }
    reverse(temp.begin(), temp.end());
 
    if(flag){
        temp = "-" + temp;
        return temp;
    }
    else
        return temp;
    
}
 
// Function to find addition
string LargeNo_Sum(string str1, string str2)
{
    if (IS_smaller(str1, str2))
        swap(str1, str2);
    string temp = "";
 
    int s1 = str1.length(), s2 = str2.length();
    
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i = 0; i < s2; i++) {

        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
        if (sum >= 10) {
            sum = sum - 10;
            carry = 1;
        }
        else
            carry = 0;
        temp.push_back(sum + '0');
    }
 

    for (int i = s2; i < s1; i++) {
        int sum = ((str1[i] - '0') + carry);
        if (sum >= 10) {
            sum = sum - 10;
            carry = 1;
        }
        else
            carry = 0;
        temp.push_back(sum + '0');
    }

    reverse(temp.begin(),temp.end());
    
    return temp;
}

// Function to perform operations such as addition and subtraction on positive and negative numbers
string Bigint(string str1, string str2, string func){
    int temp = 0;
    string ans;
    if(str1[0] == '-' && str2[0] == '-'){
        str1 = &str1[1];    
        str2 = &str2[1];
        temp = 1;
    }
    else if(str1[0] != '-' && str2[0] == '-'){
        str2 = &str2[1]; 
        temp = 2;
    }
    else if(str1[0] == '-' && str2[0] != '-'){
        str1 = &str1[1];
        temp = 3;
    }
    else if(str1[0] != '-' && str2[0] != '-'){
        temp = 4;
    }

    switch(temp){
        case 1:
            if(func == "sum"){
                ans = LargeNo_Sum(str1, str2);
                ans = "-" + ans;
            }
            else if(func == "sub"){
                ans = LargeNo_Diff(str1, str2);
                if(ans[0] == '-'){
                    ans = &ans[1];  
                }
                else{   
                    ans = '-' + ans;
                }
            }
            break;

        case 2:
            if(func == "sum"){
                ans = LargeNo_Diff(str1, str2);
            }
            else if(func == "sub"){
                ans = LargeNo_Sum(str1, str2);
            }
            break;

         case 3:
            if(func == "sum"){
                ans = LargeNo_Diff(str1, str2);
                if(ans[0] == '-'){
                    ans = &ans[1];
                }
                else{
                    ans = '-' + ans;
                }
            }
            else if(func == "sub"){
                ans = LargeNo_Sum(str1, str2);
                ans = "-" + ans;
            }
            break;

         case 4:
            if(func == "sum"){
                ans = LargeNo_Sum(str1, str2);
            }
            else if(func == "sub"){
                ans = LargeNo_Diff(str1, str2);
            } 
            break;

        default:
            ans = "Error...Check your Inputs";
            break;
    }
    return ans;
}

