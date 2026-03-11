# chapter-1 
SIMPLE CASE BASE CODING FOR A BEGINNER's 
  #include<stdio.h>//header file inclusion or Pre-processor Directive

 int main() { //main function or thinks has front door
     char day; //1-mon; 2-tues; 3-wed; //in char m-mon; t-teu; w-wed
     printf("Enter a days(1-7) : "); function call for output
     scanf("%s", &day); //function call for input

     switch (day) {
         case 'm' : printf("monday \n");
                 break;
         case 't' : printf("tuesday \n");
                 break;
         case 'w' : printf("wednesday \n");
                 break;
          case 'T' : printf("thursday \n");
                 break;
         case 'f' : printf("friday \n");
                 break;
         case 'S' : printf("saturday \n");
                 break;
         case 's' : printf("sunday \n");
                 break;
         default : printf("not a valid day! \n");                                        
     }
     return 0;
}




     
