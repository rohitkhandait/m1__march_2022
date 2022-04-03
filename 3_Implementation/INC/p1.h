#ifndef _SYSTEM_H
#define _SYSTEM_H
#include<stdio.h>
#include<stdlib.h>
char name[30];
int userScore=0,countQ=0;
void calculateScore()
{
    if (userScore >= 80&&userScore <= 100)
    {
	printf("\nCongrats! %s You are win the quiz.\n",name);
	printf("you got %d numbers.\n",userScore);
	printf("your %d Question in correct.\n",countQ);
    }
 else if(userScore >= 60&&userScore < 80)
    {
	printf("Congrats! %s You are win the quiz.\n",name);
	printf("you got %d numbers.\n",userScore);
	printf("your %d Question in correct.\n",countQ);
    }
    else if(userScore >= 40&&userScore < 60)
    {
	printf("Congrats! %s You are win the quiz.\n",name);
	printf("you got %d numbers.\n",userScore);
	printf("your %d Question in correct.\n",countQ);
    }
    else if(userScore >= 10&&userScore < 40)
    {
	printf("Sorry! %s You are loose the quiz.\n",name);
	printf("you got %d numbers.\n",userScore);
	printf("your %d Question in correct.\n",countQ);
	printf("*******Better luck lext time*********\n"); 
    }
    exit(0);
}
char result(char choose,char correct)
{
    char next;
    if (choose==correct)
    {
	countQ++;
	userScore=userScore+10;
	printf("Answer is correct!\n");
	printf("Press (Y) to continue Quiz ");
	printf("If you want to end this Quiz then press (N)\n");
	fflush(stdin);
	scanf("%c",&next);
	return(next);
    }else
    {
	printf("Sorry Answer is wrong!\n");
	printf("Press (Y) to continue Quiz ");
	printf("If you want to end this Quiz then press (N)\n");
	fflush(stdin);
	scanf("%c",&next);
	return(next);
    }
}
void question()
{
    char choose,correct;
    printf("1.Q-who won the man of the match award in 2011 world cup final?\n");
    printf("\t(A).Yuvraj Singh\t(B).Gautam Gambhir\n");
    printf("\t(C).MS Dhoni\t(D).Kumar Sangakara\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("2.Q-What is the largest cricket stadium in the world??\n");
    printf("\t(A).Motera\t(B).MCG\n");
    printf("\t(C).Eden Garden\t(D).Lords\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='a';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("3.Q-Who did England beat in the final of the 2019 Cricket World Cup??\n");
    printf("\t(A).India\t(B).New Zealand\n");
    printf("\t(C).South Africa\t(D).Australia\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("4.Q-What is the nickname of Sachin Tendulkar??\n");
    printf("\t(A).Little Manager\t(B).The Little Master\n");
    printf("\t(C).The God of cricket\t(D).Master Blaster\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='d';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("5.Q-Who is the only batsman to record 400 runs in an international Test match?\n");
    printf("\t(A).G Smith\t(B).S Jaysurya\n");
    printf("\t(C).Brian Lara\t(D).Sachin Tendulkar\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("6.Q-Who is the first batsman to cross 10,000 runs in tests?\n");
    printf("\t(A).Sunil Gavsakar\t(B).Sachin Tendulkar\n");
    printf("\t(C).Allen Border\t(D).Brian Lara\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='a';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("7.Q-Who bowled the fastest delivery ever of 100.2mph??\n");
    printf("\t(A).B Lee\t(B).Shoaib Akhtar\n");
    printf("\t(C).Zaheer Khan\t(D).Shaun Tait\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("8.Q-Who is the ICC best Cricketer of the year 2019?\n");
    printf("\t(A).V Kohli\t(B).Ben Stocks\n");
    printf("\t(C).MS Dhoni\t(D).David Warner\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("9.Q-Which batsman started his international cricketing career at the age of 16?\n");
    printf("\t(A).B Lara\t(B).R ponting\n");
    printf("\t(C).Sachin Tendulkar\t(D).Virat Kohli\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    printf("10.Q-Which team Won most number of trophies in IPL?\n");
    printf("\t(A).CSK\t(B).RCB\n");
    printf("\t(C).KKR\t(D).MI\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='d';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
	return;
    }
    calculateScore();
}
void menu()
{
    char ch;
    printf("\nHello! Mister %s\n",name);
    printf("Here are some rules of this Game.\n");
    printf("1. You can choose any option.\n");
    printf("2. You need to answer 10 question\n");
    printf("3. Every question is 10 number\n");
    printf("4.Total number is 100\n");
    printf("5. We decide you win the quiz or not\n");
    printf("Press (Y) for start quiz otherwise press (N)\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
	question();
	calculateScore();
    }else
    {
	exit(0);
    }
}
#endif
