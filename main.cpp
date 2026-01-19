#include<iostream>
#include "script.h"
using namespace std;
int main(){
   clsString string1;
   string1.setValue("RAFYQ 2005 ");
   clsString string2("yas |2 sine");
   cout<<--------------------------<<endl;
   cout<<string1.getValue()<<endl;
   cout<<string2.getValue()<<endl;
   cout<<--------------------------<<endl;
   cout<<string1.CountWord()<<endl;
   cout<<string2.CountWord()<<endl;
   cout<<--------------------------<<endl;
   cout<<string2.Upercase()<<endl;
   cout<<string1.LowerCse()<<endl;
   cout<<--------------------------<<endl;
   cout<<string1.Size()<<endl;
   cout<<string2.Size()<<endl;
   cout<<--------------------------<<endl;
   cout<<string1.Puch_First(2005)<<endl;
   cout<<string2.Puch_Last("yassine")<<endl;
   cout<<--------------------------<<endl;
   cout<<string1.Size()<<endl;
   cout<<string2.Size()<<endl;
   cout<<--------------------------<<endl;
   cout<<string1.IndexOfChar('s')<<endl;
   cout<<string2.At(3)<<endl;
   cout<<--------------------------<<endl;
   cout<<string1.PopValue(3,2)<<endl;
   cout<<string2.PopValue(0)<<endl;
   cout<<--------------------------<<endl;
   cout<<string1.Size()<<endl;
   cout<<string2.Size()<<endl;
   cout<<--------------------------<<endl;
   cout<<string1.getValue()<<endl;
   cout<<string2.getValue()<<endl;
   return 0;
}
