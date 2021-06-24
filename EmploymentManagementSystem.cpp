#include<iostream>
#include<cstring>
#include<cstdlib>
#include<iomanip>
#include<conio.h>
#include<cstdio>
#define max 50
using namespace std;

struct employee
{
 char name[20];
 long int code;
 char designation[20];
 int exp;
 int age;
};

int num;

employee emp[max],tempemp[max],sortemp[max],sortemp1[max];

int main()
{
 system("cls");
 void build();
 void list();
 void insert();
 void deletes();
 void edit();
 void search();
 void sort();
 char option;
 void menu();
 menu();
 while((option=cin.get())!='q')
 {
    switch(option)
    {
        case 'b':
             build();
             break;
        case 'l':
             list();
             break;
        case 'i':
             insert();
             break;
        case 'd':
             deletes();
             break;
        case 'e':
           edit();
            break;
        case 's':
            search();
            break;
        case 'o':
             sort();
             break;
    } 
    menu();
 }
  return 0;
 }

void menu()
{
  system("cls");
  cout<<"          ";

  cout<<"\nEmployees Management System";
  
  cout<<endl;
  cout<<"Choose from the following options:";
  cout<<"             ";
  cout<<"\nb---->To Enter The Employee Table ";
  cout<<"             ";
  cout<<"\nl---->To List The Employee Table  ";
  cout<<"             ";
  cout<<"\ni---->To Insert A New Entry        ";
  cout<<"             ";
  cout<<"\nd---->To Delete An Entry         ";
  cout<<"             ";
  cout<<"\ne---->To Edit An Entry           ";
  cout<<"             ";
  cout<<"\ns---->To Search A Record          ";
  cout<<"             ";
  cout<<"\no---->To Sort The Table          ";
  cout<<"             ";
  cout<<"\nq---->To Quit The Program              ";
  cout<<"             ";
  cout<<"\n\nEnter Your Option: ";
}

void build()
{
 system("cls");
 printf("Build The Table:");

 cout<<endl;
 cout<<"Max number of entries: 50"<<endl;
 cout<<"How many entries do you need to insert: ";
 cin>>num;
 cout<<"Enter The Details of the Employees:"<<endl;

 for(int i=0;i<=num-1;i++)
 {
  cout<<i+1<<"."<<endl;   
  cout<<"  Name: ";
  cin>>emp[i].name;
  cout<<"  Code: ";
  cin>>emp[i].code;
  cout<<"  Designation: ";
  cin>>emp[i].designation;
  cout<<"  Years of Experience: ";
  cin>>emp[i].exp;
  cout<<"  Age: ";
  cin>>emp[i].age;
  cout<<endl<<"  ----------------------------"<<endl;
 }
  cout<<"Returning to Main menu."<<endl;
}

void  list()
{
 system("cls");

 printf("Listing The Table:");
 cout<<endl<<endl;
 cout<<"       Name     Code     Designation     Years(EXP)     Age "<<endl;
 cout<<"       ------------------------------------------------------"<<endl;

 for(int i=0;i<=num-1;i++)
   {
     cout<<setw(13)<<emp[i].name;
     cout<<setw(6)<<emp[i].code;
     cout<<setw(15)<<emp[i].designation;
     cout<<setw(10)<<emp[i].exp;
     cout<<setw(15)<<emp[i].age;
     cout<<endl;
   }
  cout<<"Returning to Main menu.";
  getch();
  }

  void insert()
  {
  system("cls");
  int i=num;
  num+=1;
  printf("Insert A New Record:\n");
  cout<<"Enter The Details of the Employees:"<<endl;
  cout<<i+1<<"."<<endl;
  cout<<"  Name: ";
  cin>>emp[i].name;
  cout<<"  Code: ";
  cin>>emp[i].code;
  cout<<"  Designation: ";
  cin>>emp[i].designation;
  cout<<"  Years of Experience: ";
  cin>>emp[i].exp;
  cout<<"  Age: ";
  cin>>emp[i].age;
  cout<<endl<<endl;
  cout<<"Returning to Main menu.";
  }

  void deletes()
  {
   system("cls");
   int code;
   int check;
   printf("Delete An Entry");
   cout<<endl;
   cout<<"Enter An JobCode To Delete That Entry  ";
   cin>>code;
   int i;

   for(i=0;i<=num-1;i++)
   {
    if(emp[i].code==code)
    {
      check=i;
    }
   }
   for(i=0;i<=num-1;i++)
   {
    if(i==check)
    {
      continue;
    }
    else
    {
      if(i>check)
      {
        tempemp[i-1]=emp[i];
      }
      else
      {
        tempemp[i]=emp[i];
      }
    }
   }

  num--;

  for(i=0;i<=num-1;i++)
  {
   emp[i]=tempemp[i];
  }
 }

void edit()
{
 system("cls");
 int jobcode;
 printf("Edit An Entry:");

 cout<<endl;
 cout<<endl;
 int i;
 void editmenu();
 void editname(int);
 void editcode(int);
 void editdes(int);
 void editexp(int);
 void editage(int);
 char option;
 
 cout<<"Enter the employee code To Edit the Entry: ";
 cin>>jobcode;
  editmenu();

 for(i=0;i<=num-1;i++)
   {
    if(emp[i].code==jobcode)
    {
while((option=cin.get())!='q')
{
      switch(option)
      {
       case 'n':
            editname(i);
            break;
       case 'c':
            editcode(i);
            break;
       case 'd':
            editdes(i);
            break;
       case 'e':
            editexp(i);
            break;
       case 'a':
           editage(i);
           break;
     }
   editmenu();
  }}}}

  void editmenu()
  {
   system("cls");
   cout<<endl;
   cout<<"What Do You Want To edit"<<endl;
   cout<<"n----->Name"<<endl;
   cout<<"c----->Code"<<endl;
   cout<<"d----->Designation"<<endl;
   cout<<"e----->Experience"<<endl;
   cout<<"a----->Age"<<endl;
   cout<<"q----->QUIT"<<endl;
   cout<<"\n\nEnter your option: ";
  }

  void editname(int i)
  {
     cout<<"Enter the New Name: ";
     cin>>emp[i].name;
  }

  void editcode(int i)
  {
   cout<<"Enter the New Job Code: ";
   cin>>emp[i].code;
  }

  void editdes(int i)
  {
   cout<<"Enter the new designation: ";
   cin>>emp[i].designation;
  }

  void editexp(int i)
  {
   cout<<"Enter the new Years of Experience";
   cin>>emp[i].exp;
  }

  void editage(int i)
  {
   cout<<"Enter the new Age: ";
   cin>>emp[i].age;
  }

void search()
{
 system("cls");
  printf("Search Of Employee Database:");

  cout<<endl;
  cout<<endl;

  int jobcode;
  cout<<"Enter Code Of An Employee to Search for it:";
  cin>>jobcode;
  cout<<endl;  
 for(int i=0;i<=num-1;i++)
   {
    if(emp[i].code==jobcode)
    {
    cout<<"       Name     Code     Designation     Years(EXP)     Age "<<endl;
    cout<<"     --------------------------------------------------------"<<endl;
  cout<<setw(13)<<emp[i].name;
  cout<<setw(6)<<emp[i].code;
  cout<<setw(15)<<emp[i].designation;
  cout<<setw(10)<<emp[i].exp;
  cout<<setw(15)<<emp[i].age;
  cout<<endl;
   }}
    cout<<"Returning to Main menu.";
 getch();
}

void sort()
{
 system("cls");

 printf("Sort The Databse By the employee Code:\n");

 void sortmenu();
 void sortname();
 void sortcode();
 void sortdes();
 void sortexp();
 char option;
 void sortage();
 cout<<endl;
 cout<<endl;
 sortmenu();

 while((option=cin.get())!='q')
 {
  switch(option)
  {
   case 'n':
          sortname();
          break;
   case 'c':
          sortcode();
          break;
   case 'd':
          sortdes();
          break;
   case 'e':
          sortexp();
          break;
   case 'a':
          sortage();
          break;
   }
   sortmenu();
  }
 }

 void sortmenu()
 {
    system("cls");
   cout<<"What to Sort by"<<endl;
   cout<<"n---->Name         "<<endl;
   cout<<"c---->Code         "<<endl;
   cout<<"d---->Designation  "<<endl;
   cout<<"e---->Experience   "<<endl;
   cout<<"a---->Age          "<<endl;
   cout<<"q---->QUIT         "<<endl;
   cout<<"Enter your option: ";  
 }

void sortname()
{
 system("cls");
 int i,j;
 struct employee temp[max];

 for(i=0;i<=num-1;i++)
 {
  sortemp1[i]=emp[i];
 }

 for(i=0;i<=num-1;i++)
  {
   for(j=0;j<=num-1;j++)
   {
    if(strcmp(sortemp1[i].name,sortemp1[j].name)<=0)
    {
     temp[i]=sortemp1[i];
     sortemp1[i]=sortemp1[j];
     sortemp1[j]=temp[i];
    }
   }
 }

 for( i=0;i<=num-1;i++)
   {
    cout<<"      Name     Code     Designation     Years(EXP)     Age "<<endl;
    cout<<"     -------------------------------------------------------"<<endl;

 for( i=0;i<=num-1;i++)
 {
  cout<<setw(13)<<sortemp1[i].name;
  cout<<setw(6)<<sortemp1[i].code;
  cout<<setw(15)<<sortemp1[i].designation;
  cout<<setw(10)<<sortemp1[i].exp;
  cout<<setw(15)<<sortemp1[i].age;
  cout<<endl;
 }
  cout<<"Enter Any Key To Go Back.";
 getch();
} }

void sortcode()
{
 system("cls");
 int i,j;
 struct employee temp[max];
 for(i=0;i<=num-1;i++)
 {
  sortemp1[i]=emp[i];
 }
 for(i=0;i<=num-1;i++)
  {
   for(j=0;j<=num-1;j++)
   {
    if(sortemp1[i].code<sortemp1[j].code)
    {
     temp[i]=sortemp1[i];
     sortemp1[i]=sortemp1[j];
     sortemp1[j]=temp[i];
    }
   }
 }

 for( i=0;i<=num-1;i++)
   {
    cout<<"     Name     Code     Designation     Years(EXP)     Age "<<endl;
    cout<<"     ------------------------------------------------------"<<endl;

 for( i=0;i<=num-1;i++)
 {
  cout<<setw(13)<<sortemp1[i].name;
  cout<<setw(6)<<sortemp1[i].code;
  cout<<setw(15)<<sortemp1[i].designation;
  cout<<setw(10)<<sortemp1[i].exp;
  cout<<setw(15)<<sortemp1[i].age;
  cout<<endl;
 }
  cout<<"Enter Any Key To Go Back.";
 getch();
} }

void sortdes()

{
 system("cls");
 int i,j;
 struct employee temp[max];

 for(i=0;i<=num-1;i++)
 {
  sortemp1[i]=emp[i];
 }
 for(i=0;i<=num-1;i++)
  {
   for(j=0;j<=num-1;j++)
   {
    if(strcmp(sortemp1[i].designation,sortemp1[j].designation)<=0)
    {
     temp[i]=sortemp1[i];
     sortemp1[i]=sortemp1[j];
     sortemp1[j]=temp[i];
    }
   }
 }

 for( i=0;i<=num-1;i++)
   {
    cout<<"     Name     Code     Designation     Years(EXP)     Age"<<endl;
    cout<<"     ------------------------------------------------------"<<endl;

 for( i=0;i<=num-1;i++)
 {
  cout<<setw(13)<<sortemp1[i].name;
  cout<<setw(6)<<sortemp1[i].code;
  cout<<setw(15)<<sortemp1[i].designation;
  cout<<setw(10)<<sortemp1[i].exp;
  cout<<setw(15)<<sortemp1[i].age;
  cout<<endl;
 }
  cout<<"Enter Any Key To Go Back.";
 getch();
} }

void sortage()

{
 system("cls");
 int i,j;
 struct employee temp[max];

 for(i=0;i<=num-1;i++)
 {
  sortemp1[i]=emp[i];
 }

 for(i=0;i<=num-1;i++)
  {
   for(j=0;j<=num-1;j++)
   {
    if(sortemp1[i].age<sortemp1[j].age)
    {
     temp[i]=sortemp1[i];
     sortemp1[i]=sortemp1[j];
     sortemp1[j]=temp[i];
    }
   }
 }

 for( i=0;i<=num-1;i++)
   {
    cout<<"      Name     Code     Designation     Years(EXP)     Age"<<endl;
    cout<<"     ------------------------------------------------------"<<endl;

 for( i=0;i<=num-1;i++)
 {
  cout<<setw(13)<<sortemp1[i].name;
  cout<<setw(6)<<sortemp1[i].code;
  cout<<setw(15)<<sortemp1[i].designation;
  cout<<setw(10)<<sortemp1[i].exp;
  cout<<setw(15)<<sortemp1[i].age;
  cout<<endl;
 }
  cout<<"Enter Any Key To Go Back.";
 getch();
} }

void sortexp()
{
 system("cls");
 int i,j;
 struct employee temp[max];
 for(i=0;i<=num-1;i++)
 {
  sortemp1[i]=emp[i];
 }
 for(i=0;i<=num-1;i++)
  {
   for(j=0;j<=num-1;j++)
   {
    if(sortemp1[i].exp<sortemp1[j].exp)
    {
     temp[i]=sortemp1[i];
     sortemp1[i]=sortemp1[j];
     sortemp1[j]=temp[i];
    }
   }
 }
 for( i=0;i<=num-1;i++)
   {
    cout<<"     Name     Code     Designation     Years(EXP)     Age "<<endl;
    cout<<"    ------------------------------------------------------ "<<endl;
 for( i=0;i<=num-1;i++)

 {
  cout<<setw(13)<<sortemp1[i].name;
  cout<<setw(6)<<sortemp1[i].code;
  cout<<setw(15)<<sortemp1[i].designation;
  cout<<setw(10)<<sortemp1[i].exp;
  cout<<setw(15)<<sortemp1[i].age;
  cout<<endl;
 }
  cout<<"Enter Any Key To Go Back.";
 getch();
} }

