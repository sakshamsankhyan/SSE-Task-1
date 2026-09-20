#include<iostream>
using namespace std;
int main()
{
     int age;
  cout<<"tell me your age"<<endl;
    cin>>age;
    // if(age>=18){
    //     cout<<"you are eligible for voting"<<endl;
    // }
    // else if (age<18){
    //     cout<<"you are not eligible for voting"<<endl;
    // }
    // else
    
   switch (age)
   {
   case 18:
    cout<<"you are 18"<<endl;
       break;
    case 22:
    cout<<"you are 22"<<endl;
       break;
       case 30:
    cout<<"you are 30"<<endl;
    break;
   
   default:
   cout<<"you are not 18,22 or 30"<<endl;
    break;
   }


  return 0;
}