#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/*
GLOBAL VARIABLES
*/

float num1,num2,n1,result,val;
char test[1];
char test1[1];
int numbers;
float a=0,b=0,c=0,d=0,e=0;
int ccount=0;
float arr1[99];
char lol[1];
char c1,ca,cb,operation2,char1,operation,choice;
char ded[1];
//  float num1=0;
//  float num2=0;
 float tot2;
 float tot1;


char main_menu(){


    //outputting welcome message
    printf("Welcome to my Command-Line Calculator (CLC)\n");
    printf("Developer: Wafi Hassan\n");
    printf("Version: 1\n");
    printf("Date: 2021-11-12\n\n");
wow:

    //outputting to the user the choices
    printf("Please select one of the following items:\n");
    printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("A) - Advanced Mathematical Operations, using variables, arrays.\n");
    printf("M) - Access Memory.\n");
    printf("R) - Remove Memory.\n");
    printf("X) Exit\n\n");

    //reading user choice
    scanf(" %c",&choice);
    choice= toupper(choice);//converting to uppercase

    if(choice!='X'&&choice!='B'&&choice!='A'&&choice!='U'&&choice!='V'&&choice!='M'&&choice!='R'){

      printf("\nPlease enter a valid Letter\n");
      goto wow;
       }

    return choice;
}

float choose_b(float num1,float num2,char operation){
              //checking which operation user chose, then excecuting it
            if(operation=='+'){
              tot1=num1+num2;
                printf("\n%.2f is the answer\n",tot1);
                arr1[ccount]+=tot1;
                ccount+=1;

            }

            else if(operation=='-'){
              tot1=num1-num2;
                printf("\n%.2f is the answer\n",tot1);
                arr1[ccount]+=tot1;
                ccount+=1;

            }

            else if(operation=='*'){
              tot1=num1*num2;
              printf("\n%.2f is the answer\n",tot1);
              arr1[ccount]+=tot1;
              ccount+=1;

            }

            else if(operation=='/'){
              if(num2==0){
                return(printf("Invalid"));
              }
              else if(num2!=0){
                tot1=num1/num2;
                printf("\n%.2f is the answer\n",tot1);
                arr1[ccount]+=tot1;
                ccount+=1;

              }
            }

            else if(operation=='%'){
              tot1=remainder(num1,num2);
                printf("\n%.2f is the answer\n",tot1);
                arr1[ccount]+=tot1;
                ccount+=1;

            }

            else if(operation=='^'){
              tot1=pow(num1,num2);
               printf("\n%.2f is the answer\n",tot1);
                arr1[ccount]+=tot1;
                ccount+=1;


            }

          return tot1;
        }

float choose_u(float n1,char operation2){
            if (operation2=='S'|| operation2=='s'){//for Square root

            if(n1<=0){//invalid if number is less than 0
              printf("Enter a proper number");
              }

              else{

              result = sqrt(n1);// formula for square root
              printf("\n%.2f\n",result);
              arr1[ccount]+=result;
              ccount+=1;

              }
          }

          else if(operation2=='L'|| operation2=='l'){// for logarithms

            if(n1<=0){
              printf("\nInvalid Number! Try again...\n");
            }

            result = log(n1);
            printf("\n%.2f\n",result);
            arr1[ccount]+=result;
            ccount+=1;

          }

          else if(operation2=='E'|| operation2=='e'){//for exponentials

            result = exp(n1);
            printf("\n%.2f\n",result);
            arr1[ccount]+=result;
            ccount+=1;
          }

          else if(operation2=='C'|| operation2=='c'){//for ceiling functions

            result = ceil(n1);
            printf("\n%.f\n",result);
            arr1[ccount]+=result;
            ccount+=1;
          }

          else if(operation2=='F'|| operation2=='f'){//for floor function

            result = floor(n1);
            printf("\n%.f\n",result);
            arr1[ccount]+=result;
            ccount+=1;
          }
          return result;
        }


float choose_v(char c1,float val){
  if(c1=='a'){//if they put variables, add the value of the variable onto a new one to use in final calculations
    a=val;
    return a;
    }
  if(c1=='b'){
    b=val;
    return b;
    }
  if(c1=='c'){
    c=val;
    return c;
    }
  if(c1=='d'){
    d=val;
    return d;
    }
  if(c1=='e'){
    e=val;
    return e;
        }



      return c1;

    }

float binary(char1){
  num1=0;
  printf("\nPlease enter the first number or a variable name ('a' to 'e'):");
            if  (scanf( "%f" , &num1)){
            }
            else{
            scanf( "%c", &ca);



            if (ca=='a'){//if variables are called, set their values equal to num1
              printf("\n%f",a);
              num1=a;
            }
            if (ca=='b'){
              printf("\n%f",b);
              num1=b;
            }
            if (ca=='c'){
              printf("\n%f",c);
              num1=c;
            }
            if (ca=='d'){
              printf("\n%f",d);
              num1=d;
            }
            if (ca=='e'){
              printf("\n%f",e);
              num1=e;
            }

            }

             printf("\nPlease enter the second number or a variable name ('a' to 'e'):");

             if  (scanf( "%f" , &num2)){ //if a num is inputted on 2nd


beg2: //checkpoint if proper operation isnt picked

              printf("\nPlease enter the operation ( + , - , / , * , %% ,^):\n");
              scanf("\n%c", &operation);

              if(operation!='+' && operation!='-' && operation!='/' && operation!='*' && operation!='%' && operation!='^'){
                goto beg2;//checkpoint statement if proper operation isnt selected
              }



               if(operation=='+'){//addition
                tot2=num1+num2;
                arr1[ccount]+=tot2;
                ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
            }

            else if(operation=='-'){//subtraction
              tot2=num1-num2;
              arr1[ccount]+=tot2;
              ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
            }

            else if(operation=='*'){//multiplication
              tot2=num1*num2;
              arr1[ccount]+=tot2;
              ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
            }

            else if(operation=='/'){//division
              if(num2==0){
                printf("Invalid");
              }
              else if(num2!=0){
                tot2=num1/num2;
                arr1[ccount]+=tot2;
                ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
              }
            }

            else if(operation=='%'){//mod
              tot2=remainder(num1,num2);
              arr1[ccount]+=tot2;
              ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
            }

            else if(operation=='^'){//power of
              tot2=pow(num1,num2);
              arr1[ccount]+=tot2;
              ccount+=1;
               printf("\n%.2f is the answer\n",tot2);

            }


            }
            else{    //if variable is called
            scanf( "%c", &cb);

            if (cb=='a'){
              printf("\n%f",a);
              num2=a;
            }
            if (cb=='b'){
              printf("\n%f",b);
              num2=b;
            }
            if (cb=='c'){
              printf("\n%f",c);
              num2=c;
            }
            if (cb=='d'){
              printf("\n%f",d);
              num2=d;
            }
            if (cb=='e'){
              printf("\n%f",e);
              num2=e;
            }

beg4:  //checkpoint if proper operation isnt called

            printf("\nPlease enter the operation ( + , - , / , * , %% ,^):\n");
             scanf("\n%c", &operation);

             if(operation=='+'){
              tot2=num1+num2;

              arr1[ccount]+=tot2;
              ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
            }

            else if(operation=='-'){
              tot2=num1-num2;

              arr1[ccount]+=tot2;
              ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
            }

            else if(operation=='*'){
              tot2=num1*num2;

              arr1[ccount]+=tot2;
              ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
            }

            else if(operation=='/'){
              if(num2==0){
                printf("Invalid");
              }
              else if(num2!=0){
                tot2=num1/num2;

              arr1[ccount]+=tot2;
              ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
              }
            }

            else if(operation=='%'){
              tot2=remainder(num1,num2);

              arr1[ccount]+=tot2;
              ccount+=1;
                printf("\n%.2f is the answer\n",tot2);
            }

            else if(operation=='^'){
              tot2=pow(num1,num2);

              arr1[ccount]+=tot2;
              ccount+=1;
               printf("\n%.2f is the answer\n",tot2);

            }
            else
            goto beg4;//checkpoint statement

            }

          return tot2;

          }





float unary(char operation){
  num1=0;
  printf("\nPlease enter the first number or a variable name ('a' to 'e'):");
  if  (scanf( "\n%f" ,&num1)){

beg5:
            printf("\nPlease enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):");
            scanf("\n%c",&operation);

            if(operation!='s'&&operation!='S'&&operation!='l'&&operation!='L'&&operation!='e'&&operation!='E'&&operation!='c'&&operation!='C'&&operation!='f'&&operation!='F'){
              goto beg5;
            }



          }
            if(operation=='S'|| operation=='s'){

              if(num1<=0){
                printf("Enter a proper number");
                }

                else{

                  float squareRoot = sqrt(num1);

                  arr1[ccount]+=squareRoot;
                  ccount+=1;
                  printf("\n%.2f\n",squareRoot);

              }
            }


            else if(operation=='L'||operation=='l'){

            float result = log(num1);
            arr1[ccount]+=result;
            ccount+=1;
            printf("\n%.2f\n",result);
            }

            else if(operation=='E'||operation=='e'){

            float result = exp(num1);
            arr1[ccount]+=result;
            ccount+=1;
            printf("\n%.2f\n",result);
            }

            else if(operation=='C'||operation =='c'){

            float result = ceil(num1);
            arr1[ccount]+=result;
            ccount+=1;
            printf("\n%.f\n",result);
            }

            else if(operation=='F'|| operation=='f'){

            float result = floor(num1);
            arr1[ccount]+=result;
            ccount+=1;
            printf("\n%.f\n",result);
            }



            else{
            scanf( "%c", &ca); //inputting values into the variables respectively

            if (ca=='a'){
              printf("\n%f",a);
              num1+=a;
            }
            if (ca=='b'){
              printf("\n%f",b);
              num1+=b;
            }
            if (ca=='c'){
              printf("\n%f",c);
              num1+=c;
            }
            if (ca=='d'){
              printf("\n%f",d);
              num1+=d;
            }
            if (ca=='e'){
              printf("\n%f",e);
              num1+=e;
            }





          printf("\nPlease enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):");
          scanf("\n%c",&operation);

             if(operation=='S'|| operation=='s'){

            if(num1<=0){
              printf("Enter a proper number");
              }

              else{

              float squareRoot = sqrt(num1);
              arr1[ccount]+=squareRoot;
              ccount+=1;
              printf("\n%.2f\n",squareRoot);

              }
            }


            else if(operation=='L'|| operation=='l'){

            float result1 = log(num1);
            arr1[ccount]+=result1;
            ccount+=1;
            printf("\n%.2f\n",result1);
            }

            else if(operation=='E'){

            float result2 = exp(num1);
            arr1[ccount]+=result2;
            ccount+=1;
            printf("\n%.2f\n",result2);
            }

            else if(operation=='C'||operation=='c'){

            float result3 = ceil(num1);
            arr1[ccount]+=result3;
            ccount+=1;
            printf("\n%.f\n",result3);
            }

            else if(operation=='F'||operation=='f'){

            float result4 = floor(num1);
            arr1[ccount]+=result4;
            ccount+=1;
            printf("\n%.f\n",result4);
            }
          }



            return 0;
        }

float access_memory(int llength2,float array1[]){
            for(int i=0; i<llength2;i++){//for loop to input results into array
            array1[i]=arr1[i];
            }

          if(llength2==0){// if nothing in memory
            printf("\nNothing in Memory yet!\n");

          }
          else{
          printf("%d Items are in the Memory\n",llength2);


new1:

          printf("\nChoose any number between 1 and total items: ");
          scanf("%d",&numbers);

          if(numbers>=1&&numbers<=llength2){// if number in between range
            numbers-=1;
            printf("\nNumber in %d spot is %.2f",numbers+1,array1[numbers]);
          }

          else if(numbers==0){//if they want to see list

            printf("Items in Memory: ");

            for(int j=0;j<llength2;j++){
              printf("%.2f ",array1[j]);
              }

            }
            else if(numbers<1||numbers>llength2){//condition if number out of bounds
              printf("Choose again!");
            goto new1;
            }
          }
          char ch;
rechoose:
          printf("\nDo you want to reselect a number or return to main menu?\n");
          printf("Type M/m for main menu or N/n for number: ");
          scanf(" %c",&ch);

          if(ch=='N'||ch=='n'){
            goto new1;
          }
          else if(ch=='M'||ch=='m'){
          }
          else
            goto rechoose;




  return 0;
}

float remove_memory(int llength2,float array1[]){
  for(int k=0;k<llength2;k++){
    array1[k]=0;//setting all values in memory to 0
  }
  ccount=0;//reset memory storage to 0 length
  printf("\nMemory Erased!");
  return llength2;
}




int main() {
  float array1[ccount];
  int llength2=sizeof(array1)/sizeof(array1[0]);
  printf("Choice is: %c",main_menu());

  while(choice!='X'){

        if(choice=='B' || choice=='b'){

            bool Valid=true;

            //Asking user to enter first number
            printf("\nPlease enter the first number:\n");
            scanf("%s", test);
            num1=atof(test);


            if(!strtof(test,NULL)){//if value isnt a number
              Valid=false;
            }
            while(!Valid){//if the person put invalid number then they go through this process of reinputting a proper value
              printf("Invalid Entry!\n");
              printf("Please enter the first number:\n");
              scanf("%s",test);
              num1=atof(test);
              if(strtof(test,NULL)){
                Valid=true;
              }
            }

strt: //checkpoint for if user enters wrong operation

            //Asking user to enter the operation being used
            printf("Please enter the operation ( + , - , / , * , %% ,^):\n");
            scanf("\n%c", &operation);

            if(operation!='+'&&operation!='-'&&operation!='/'&&operation!='*'&&operation!='%'&&operation!='^'){
              goto strt;//if invalid operations are pressed, go to start and ask again
            }

            //Asking user to enter first number
            printf("Please enter the second number:\n");
            scanf("%s", test1);

            num2=atof(test1);//converting the value in the char array to float

            if(!strtof(test1,NULL)){//same process of checking validity of input
              Valid=false;
            }
            while(!Valid){
              printf("Invalid Entry!\n");
              printf("Please enter the second number:\n");
              scanf("%s",test1);
              num2=atof(test1);
              if(strtof(test1,NULL)){
                Valid=true;
              }
            }
            choose_b(num1,num2,operation);
        }



        else if(choice=='U' || choice=='u'){
          bool Valid=true;
beginning: //checkpoint for if a wrong operation is selected

          printf("Please enter the operation ( S (for square root) , L (for logarithm) , E (for exponential) , C (for ceil) , F (for floor) ):");
          scanf("\n%c",&operation2);

          if(operation2!='s'&&operation2!='S'&&operation2!='L'&&operation2!='l'&&operation2!='e'&&operation2!='E'&&operation2!='C'&&operation2!='c'&&operation2!='f'&&operation2!='F'){//condition to check if invalid operation is selected
            goto beginning;
          }



          printf("Enter a positive value :");
          scanf("%s",lol);

            n1=atof(lol);

            if(!strtof(lol,NULL)){//process of checking whether input was really a number or not
              Valid=false;
            }
            while(!Valid){//if the person got the input wrong first time it goes through this resubmition process
              printf("Invalid Entry!\n");
              printf("Please enter a positive value:\n");
              scanf("%s",lol);
              n1=atof(lol);
              if(strtof(lol,NULL)){//if num is valid
                Valid=true;//valid is true and breaks
              }
            }
            choose_u(n1,operation2);
            printf("Answer is: %.2f",result);
        }



        else if(choice=='V' || choice=='v'){

          bool Valid=true;

beg1: //checkpoint if proper input isnt used

          printf("\nPlease enter the name of the variable ( A single character between 'a' to 'e' ):");
          scanf("\n%c",&c1);

          if(c1!='a'&&c1!='b'&&c1!='c'&&c1!='d'&&c1!='e'){//invalid checker
            goto beg1;//using goto function to go back
          }

          printf("\nPlease enter a value to assign to the variable:");
          scanf("%s",ded);


          val=atof(ded);

            if(!strtof(ded,NULL)){//same process of checking whether num is valid
              Valid=false;
            }
            while(!Valid){
              printf("Invalid Entry!\n");
              printf("Please enter a value to assign to the variable:\n");
              scanf("%s",ded);
              val=atof(ded);
              if(strtof(ded,NULL)){
                Valid=true;
              }

            }
              choose_v(c1,val);
              printf("\n%.2f is assigned to %c\n",val,c1);
        }




  else if(choice=='A' || choice=='a'){//IF ADVANCED MATHEMATICAL OPERATIONS IS CALLED


start2: //checkpoint if proper letter isnt picked

          printf("\nSelect one of the following items:\n");
          printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
          printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
          printf("X) - Exit and back to the main menu\n");

          scanf("\n%c",&char1);

          if(char1!='B'&&char1!='b'&&char1!='u'&&char1!='U'&&char1!='x'&&char1!='X'){
            goto start2;
          }

          if(char1=='B'||char1=='b'){//IF BINARY IS CALLED WITHIN A OPTION
            binary(char1);
          }


/*

IF USER SELECTS U from the 'A' selection

*/

     else if(char1=='U'||char1=='u'){//IF UNARY IS CALLED WITHIN A OPTION
              unary(operation);
        }
  }


        else if(choice=='M' || choice=='m'){//IF MEMORY IS CALLED
          float array1[ccount];

          llength2=sizeof(array1)/sizeof(array1[0]);


          access_memory(llength2,array1);

        }

        else if(choice=='R' || choice=='r'){//IF REMOVE MEMORY IS CALLED

          remove_memory(llength2,array1);

        }


        //if the user enters X, break from loop
        else if(choice=='X' || choice=='x'){
            break;
        }
        //ask user again for their choice
        if(choice!='X'&&choice!='B'&&choice!='A'&&choice!='U'&&choice!='V'&&choice!='x'&&choice!='b'&&choice!='a'&&choice!='u'&&choice!='v'&&choice!='m'&choice!='M'&&choice!='R'&&choice!='r'){

        printf("\nPlease enter a valid Letter\n");
        }
        printf("\nPlease select your option ( B, U , A , X , V , M , R )\n");
        scanf(" %c", &choice);
    }

    //displaying the Goodbye message
    printf("\nThanks for using my Simple Calculator. Hope to see you soon again, Goodbye!");

}
