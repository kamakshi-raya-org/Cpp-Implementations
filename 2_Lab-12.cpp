#include<iostream>
#include<string.h>
using namespace std;
class String
{
        public:
                char str[25];
        public:
                void accept_string()
                {
                        cin>>str;
                }
    void display_string()
                {
                        cout<<str;
                }
                String operator+(String x)
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                      
                        return s;
                }
};
int main()
{
        String str1, str2, str3, str4;

        str1.accept_string();
        str2.accept_string();
    str3.accept_string();
        str4=str1+str2+str3;         //String is concatenated. Overloaded '+' operator
        cout<<" The Concatenated String is    :  ";
        str4.display_string();

        return 0;
}
