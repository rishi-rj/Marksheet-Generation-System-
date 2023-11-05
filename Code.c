#include <stdio.h>
#include <stdlib.h>
char my_name[20], fa_name[20], mo_name[20], dob[15], 
section[20],reg_number[40];
int chem_marks, pps_marks, poe_marks, math_marks, bio_marks, lang_marks;
void generate_marksheet()
{
 int grand_total;
 float presentage;
 grand_total = chem_marks + pps_marks + poe_marks + math_marks + 
bio_marks + lang_marks;
 presentage = grand_total / 6;
 printf("\n------------------------------------------------------------------------------------
\n");
 printf("| SRM UNIVERSITY KATTANKULATHUR CHENNAI 
\n");
 printf("| SCHOOL OF COMPUTING \n");
 printf("|------------------------------------------------------------------------------------\n");
 printf("|Your name: %s\tSECTION: %sth\tREG. Number: %s\n", my_name, 
section, reg_number);
 printf("|Father name: %s\n", fa_name);
 printf("|Mother name: %s\n", mo_name);
 printf("|Date of birth: %s\n", dob);
 
 printf("|------------------------------------------------------------------------------------\n");
 printf("|\tSUBJECTS \tMAX MARKS\tMIN MARKS\tTHEORY MARKS\n");
 printf("|------------------------------------------------------------------------------------\n");
 printf("|\tChemistry \t 100 \t 33 \t %d\n", chem_marks);
 printf("|\tPPS \t 100 \t 33 \t %d\n", pps_marks);
 printf("|\tPOE \t 100 \t 33 \t %d\n", poe_marks);
 printf("|\tMATHEMATICS \t 100 \t 33 \t %d\n", math_marks);
 printf("|\tBIOLOGY \t 100 \t 33 \t %d\n", bio_marks);
 printf("|\tLANGUAGE \t 100 \t 33 \t %d\n", lang_marks);
 printf("|------------------------------------------------------------------------------------\n");
 printf("|\t \t 600 | GRAND TOTAL\t %d\n", grand_total);
 printf("|------------------------------------------------------------------------------------\n");
 if (presentage >= 81 && presentage <= 100)
 {
 printf("|RESULT : PASS IN FIRST DIVISION\n");
 printf("|GRADE : A+\n");
 }
 if (presentage >= 60 && presentage <= 80)
 {
 printf("|RESULT : PASS IN FIRST DIVISION\n");
 printf("|GRADE : A\n");
 }
 else if (presentage >= 41 && presentage <= 59)
 {
 printf("|RESULT : PASS IN SECOND DIVISION\n");
 printf("|GRADE : B\n");
 }
 else if (presentage >= 31 && presentage <= 40)
 {
 printf("|RESULT : PASS IN THIRD DIVISION\n");
 printf("|GRADE : C\n");
 }
 else if (presentage >= 1 && presentage <= 30)
 {
 printf("\n|RESULT : Fail\n");
 printf("|GRADE : D\n");
 }
 printf("|------------------------------------------------------------------------------------
\n\n");
}
void take_user_info()
{
 char yesNo;
 printf("");
 fflush(stdin);
 gets(my_name);
 printf("Enter your name: ");
 fflush(stdin);
 gets(my_name);
 printf("\nEnter father name: ");
 fflush(stdin);
 gets(fa_name);
 printf("Enter mother name: ");
 fflush(stdin);
 gets(mo_name);
 
 printf("Enter date of birth(dd/mm/yy): ");
 fflush(stdin);
 gets(dob);
 printf("Enter section: ");
 scanf("%s",&section);
 printf("Enter Reg. No.: ");
 scanf("%s", &reg_number);
 printf("Enter subject marks\n");
repeate:
 printf("Chemistry marks: ");
 scanf("%d", &chem_marks);
 if (chem_marks > 100 || chem_marks < 1)
 {
 printf("invalid marks enter valid marks\n");
 goto repeate;
 }
repeate1:
 printf("PPS marks: ");
 scanf("%d", &pps_marks);
 if (pps_marks > 100 || pps_marks < 1)
 {
 printf("invalid marks enter valid marks\n");
 goto repeate1;
 }
repeate2:
 printf(" POE marks: ");
 scanf("%d", &poe_marks);
 if (poe_marks > 100 || poe_marks < 1)
 {
 printf("invalid marks enter valid marks\n");
 goto repeate2;
 }
repeate3:
 printf("Mathematics marks: ");
 scanf("%d", &math_marks);
 if (math_marks > 100 || math_marks < 1)
 {
 printf("invalid marks enter valid marks\n");
 goto repeate3;
 }
repeate4:
 printf("Biology marks: ");
 scanf("%d", &bio_marks);
 if (bio_marks > 100 || bio_marks < 1)
 {
 printf("invalid marks enter valid marks\n");
 goto repeate4;
 }
repeate5:
 printf("Language marks: ");
 scanf("%d", &lang_marks);
 if (lang_marks > 100 || lang_marks < 1)
 {
 printf("invalid marks enter valid marks\n");
 goto repeate5;
 }
 
 generate_marksheet();
 
}
void main()
{
 
 char yesNo;
 
 printf("\n Welcome to marsheet generation project \n\n");
 printf("If you want to generate your marsheet ");
 printf("then you have to provide some information\n");
 printf("If you want to provide information then press 'Y' otherwise 'N': ");
 scanf("%c", &yesNo);
 if (yesNo == 'y' || yesNo == 'Y')
 {
 take_user_info();
 }
 else
 {
 exit(0);
 }
}
