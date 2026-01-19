#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class clsString
{
   private:
      string _Value_string;
      char _LetreSmall[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      char _LetreLarge[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
      char _SymboleCarctersAndNumbres[33]={' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@'};
   

      bool isLetterSmale(char caractres)
      {
         for (int i = 0; i < 26; i++)
         {
            if (caractres==_LetreSmall[i])
            {
               return true;
            }
            
         }
         
      }

      char retuneCharUper(int asciLetre)
      {
         int changeAsciSmalToAsciLarge=asciLetre-32;
            return char(changeAsciSmalToAsciLarge);

      };

      char checkCractres(char Symbole)
      {
         for (int i = 0; i < 33; i++)
            {
               if (Symbole==_SymboleCarctersAndNumbres[i])
                  {
                     return Symbole;
                  }
            }
            return Symbole;
      };

      char retuneCharLower(int asciLetre)
      {
         int changeAsciSmalToAsciLarge=asciLetre+32;
            return char(changeAsciSmalToAsciLarge);

      };

   public:

      clsString()
      {
         this->_Value_string="";
      }

      clsString(string Value_string)
      {
         this->_Value_string=Value_string;
      }

      void setValue(string Value_string)
      {
         this->_Value_string=Value_string;
      }

      string getValue()
      {
         return this->_Value_string;
      }

      int Size()
      {
         int length=0;
         for(char finString:_Value_string){
            if (finString!='\0')
            {
               length++;
            }else{
               break;
            }
            
         }
         return length;
         
      }

      string Upercase()
      {
         string value_Uper;
         for(char finString:_Value_string){
            int asciLettre;
            if (finString!='\0')
            {
               char asciCaracters=char(finString);
                  if((asciCaracters>=97 && asciCaracters<=122) || (asciCaracters>=65 && asciCaracters<=90))
                  {
                     for (int i = 0; i < 26; i++)
                     {
                        if (finString==_LetreSmall[i])
                        {
                           asciLettre=char(finString);
                           value_Uper+=retuneCharUper(asciLettre);
                           break;
                        }else if (finString==_LetreLarge[i])
                        {
                           value_Uper+=finString;
                           break;
                        }
                        
                     }
                        
                  }else 
                  {
                     value_Uper += checkCractres(finString);
                  }
            }
         }
         return value_Uper;
      }

      string LowerCse()
      {
         string value_Lawer;
         for(char finString:_Value_string){
            int asciLettre;
            if (finString!='\0')
            {
               char asciCaracters=char(finString);
                  if((asciCaracters>=97 && asciCaracters<=122) || (asciCaracters>=65 && asciCaracters<=90))
                  {
                     for (int i = 0; i < 26; i++)
                     {
                        if (finString==_LetreSmall[i])
                        {
                           value_Lawer+=finString;
                            break;
                           
                        }else if (finString==_LetreLarge[i])
                        {
                           asciLettre=char(finString);
                           value_Lawer+=retuneCharLower(asciLettre);
                           break;
                        }
                        
                     }
                        
                  }else 
                  {
                     value_Lawer += checkCractres(finString);
                  }
            }
         }
         return value_Lawer;
      };

   char At(int index)
   {
      int lengh=this->Size();
      if (index>0 && index<=lengh) return _Value_string[index];
      return '\0';
   }

   int IndexOfChar(char caractre)
   {
      int length=this->Size();
      for (int i=0;i<length;i++)
      {
         if (_Value_string[i]==caractre)
         {
            return i;
         }
         
      }
      return -1;
   }

   string trim()
   {
      string trimValue;
      int length=this->Size();
          for (int i = 0; i < length; i++)
          {
            if (_Value_string[i]!=' ')
            {
               trimValue+=_Value_string[i];
            }
          }
          
      return trimValue;
   }

   template <typename T>
   string Puch_Last(T AddToString)
   {
      stringstream ss;
      ss<<this->_Value_string << ' '<<AddToString ;
      this->_Value_string=ss.str();
      return _Value_string;
      
   }

   template <typename T>
   string Puch_First(T AddToString)
   {
      stringstream ss;
      ss<<AddToString<< ' ' <<this->_Value_string  ;
      this->_Value_string=ss.str();
      return _Value_string;
   }

   int CountWord()
   {
      int length=this->Size();
      int numbres=1;
      for (int i = 0; i < length; i++)
      {
         if (this->_Value_string[i]==' ')
         {
            numbres++;
         }
         
      }
      return numbres;
      
   }

   void clear()
   {
      this->_Value_string="";
   }

   string PopValue(int indexFirst, int countPop=0)
   {
      string newValue=this->_Value_string;
      int length=this->Size();
      int countNmb=indexFirst+countPop;
      this->clear();
      for (int i = 0; i < length; i++)
      {
         if (countNmb>length)return "the mot short";
         if (countNmb==length) this->clear();
         if (length>countNmb)
         {
            if (i!=indexFirst)
            {
               _Value_string+=newValue[i];
            }else{
               i+=countPop;
            }
         }  
      }
      return _Value_string;
   }
      
};