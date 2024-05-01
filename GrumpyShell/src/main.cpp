#include <iostream>
#include <string>
using namespace std; 

void List(int length , char** chars)
{
     for(int arg = 0; arg < length; arg++)
    {
        cout << chars[arg] << endl; 
    }
}
void List(string* text)
{
    int length = sizeof(*text)/sizeof(text); 
    cout << "Length: " << length << endl;   
    for(int arg = 0; arg < length; arg++)
    {
        cout << text[arg] << endl; 
    }
}
int main(int argc ,char** argv)
{
    //List(argc,argv);
    string colors[] = {"Blue","Green","Cyan","Yellow"}; 
    List(colors); 
    return 0;
}