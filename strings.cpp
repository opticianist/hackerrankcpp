#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1;
    cin>>s2;
    
    string result =s1+s2;
    
    cout<< s1.length() << " " <<s2.length() <<endl;
    cout<<result <<endl;
    
    char c=s1[0];
    char d=s2[0];
    s1[0]=d;
    s2[0]=c;
    cout<<s1 <<" " <<s2 <<endl;
    
    
    
    return 0;
}