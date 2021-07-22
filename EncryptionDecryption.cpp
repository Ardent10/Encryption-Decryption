#include<bits/stdc++.h>
using namespace std;

int main()
{
      char str[100];
            
      cout<<"Enter your string: ";
      cin.getline(str,100);
      
      cout<<endl<<"Encrypted string is: ";

      for (int i = 0; i<100 && str[i]!='\0'; i++)
      {
         str[i] +=5;
      }
      
      cout<<str;

      char D;
      cout<<endl<<"Press 'D' or 'd' to decrypt it: ";
      cin>>D;
      
      switch (D)
      {
      case 'D': 
      case 'd':
               for (int i = 0; i<100 && str[i]!='\0'; i++) { str[i] -=5; } cout<<endl<<str;
               break;
        default:  cout<<"Error";  break;
      }

return 0;
}