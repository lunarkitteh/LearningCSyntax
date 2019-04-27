//
//  main.c
//  C language
//
//  Created by calista on 6/20/16.
//  Copyright © 2016 Calista Lee. All rights reserved.
//  PLAYGROUND

#include <stdio.h>  // header file to use main,functions,variables,etc.
#include <stdlib.h>
#include <stdbool.h> // used to use booleans.

//Define Variables
#define INSTRUMENT "Violin" // writing variables name in capitals is a good idea :)
#define WHO "you"

//PROTOTYPES
void Ageconf(int);

// using struct
struct People{
    char *Name;
    int Age;
};

struct BloodType{
    char *FullName;
    char Types[20];
    char Gender;
};


int main()
{
    
    printf("*********** C PLAYGROUND **********\n");
    printf("please enter your first name\n");
    char name [500];
    fgets(name,sizeof(name),stdin); // Example of getting user input using fgets.
    
    printf("Please enter your last name\n");
    char Lname [500];
    scanf("%s",Lname);
    printf("Hello,%s\n",name);
    // use %s to call a string eventhough you use char variable
    
    // Example of calling #define vars
    printf("So %s play %s ?\n",INSTRUMENT,WHO);
    
    // CALL FUNCTIONS HERE...
    printf("please enter your age\n");
    int age;
    scanf("%d",&age);
    Ageconf(age);
    
    // CALL STRUCTS HERE...
    struct People Obj;
    Obj.Name = "Calista";
    Obj.Age = 14;
    printf("Hello again %s , I see that you're %d years old\n",Obj.Name,Obj.Age);
    
    struct BloodType obj2;
    char FullNameGet[200];
    char getBlood[20];
    char getGender;
    printf("Full name : ");
    scanf("%s",getFullName);
    printf("\n");
    printf("Bloodtype : ");
    for (int i=0;i<=9;i++){
    scanf("%c",getBlood);
    if(getBlood!='a'||getBlood!='A'||getBlood!='b'||getBlood!='B'||getBlood!='ab'||getBlood!='AB'||getBlood!='o'||getBlood!='O');{
        printf("You're ridiculous\n");
    }
    else{
        printf("What is your blood rhesus <-/+>\n");
        char Rhesus;
        scanf("%c",Rhesus);
        break;
    }
    }
    printf("\n");
    printf("Gender : ");
    scanf("%c",getGender);
    obj2.FullName = getFullName;
    obj2.Types = getBlood;
    obj2.Gender = getGender;
    
    
    // EXAMPLE OF BOOLEANS IN C//
    bool haveMoney = true;
    bool wantCoffee = true;
    
    if (haveMoney && wantCoffee){printf("we will buy a coffee\n");} // NOTE & IS CALLED AMPERSAND
    else if (haveMoney || wantCoffee){printf("maybe get a coffee\n");}// || MEANS OR (ONE OF THE STATEMENT IS APPLIED OR TRUE//
    else if (haveMoney && wantCoffee){printf("we will not get a coffee\n");} // ! means false (not the same as...)
    
    // POINTERS AND USER INPUT //
    printf("Please enter your name to be assign to pointerOfName");
    char getName[300];
    scanf("%s",getName);
    char *pointerOfName = &getName;
    printf("The memory address variable getName is %lu\n",*pointerOfName);
    printf("Your name is %s right?\n",pointerOfName);
    
    
    
    // USING getchar() and putchar()
    int X;
    printf("Please enter a value : ");
    X = getchar();
    printf("You just entered : ");
    putchar(X);
    printf("\n");
    

return 0;
}
// functions //
void Ageconf(int age){
    if (age > 17){printf("you are allowed to drive\n");}
    else if (age <= 17) {printf("you are too young to drive\n");}
    else if (age >=85){printf("you are too old to drive\n");}
    else {printf("invalid input\n");}
}

void BloodConfig(Rhesus,getBlood){
    while(Rhesus=='-'){
    if(getBlood=="A"||getBlood=="a"){
        printf("You can donor your blood to people with blood type of : \n");
        printf("A+,A-,AB+,AB-\n");
        printf("And you can receive blood donor from people with blood type of : \n");
        printf("A- and O-\n");
        break;
    }
    else if(getBlood=="B"||getBlood=="b"){
        printf("You can donor your blood to people with blood type of : \n");
        printf("B+,B-,AB+,AB-\n");
        printf("And you can receive blood donor from people with blood type of :\n");
        printf("B- and O-\n");
        break;
        
    }
    else if(getBlood=="AB"||getBlood=="ab"){
        pritnf("You can donor your blood to people with blood type of : \n");
        printf("AB+ and AB-\n");
        printf("And you can recieve blood donor from poeple with blood type of :\n");
        printf("AB-,A-,B-,O-\n");
        break;
        
    }
    else if(getBlood=="O"||getBlood=="o"){
        printf("You can donor your blood to people with blood type of : \n");
        printf("Evveryone\n");
        printf("And you can receive blood donor from people with blood type of :\n");
        printf("O-\n");
        break;
             
    }
    }
    while(Rhesus=='+'){
        if(getBlood=="A"||getBlood=="a"){
            
        }
    }
}
