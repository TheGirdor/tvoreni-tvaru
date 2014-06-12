#include <iostream>
using namespace std;

int main()
{
   int a,b;                                                                             //promene
       int i,j,k;                                                                       //promene
   cout << "Zadej velikost strany a [1-35]: ";                                          //zadani stran s podminkami >>                                
   cin >> a;
   if ((a<1) || (a>35))
{
      cout << " Rekl jsem [1-35], neumis cist?!";
      system("PAUSE > NUL");
      return 0;
}
   cout << "Zadej velikost strany b [1-20]: ";
   cin >> b;
   if ((b<1) || (b>20))
{
      cout << " Rekl jsem [1-20], neumis cist?!";
      system("PAUSE > NUL");
      return 0;
}                                                                                       // << az sem
      cout << endl;                                                                                                                                                                                   
   for (i=1;i<=a;i++)                                                                   //udela horni stranu (v tomto pripade 'a')
      cout << " *";
      cout << endl;                                                                     // odradkuje
   for (j=1;j<=b-2;j++)                                                                 // udela krajni strany (v tomto pripade 'b')('b'-2 je tam proto, ze 'a' uz byly udelany.)
{
       cout<<" *";
       for(k=0;k<=(a*2-5);k++)                                                          // udela cyklus,ktery udela ve tvru mezery,takze bude to tvar bez vyplne
            cout << " ";                                                                //('a'*2-5 je tam proto, ze*2 vynahradi '*' a -5 k odecteni prebytecnych mezer)
       cout << " *";
       cout << endl;
}
for (i=1;i<=a;i++)                                                                      // //udela dolni stranu (v tomto pripade 'a')
      cout << " *";
   system("PAUSE > NUL");
   return 0;
}

