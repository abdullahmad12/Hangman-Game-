#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
double game;
//1. hangman Game start//
int hangman ()
{
int letterFill (char, string, string&);
int tries=3;
char letter;
2
int wrong_guesses=0;
string word;
string words[] =
{"punjab", "balochistan", "sindh", "KPK", "NWFP"};
//select random word from array and replace all of it's characters with *
srand(time(NULL));
int n=rand()% 5;
word=words[n];
string unknown(word.length(),'*');
//game body that will show in output
cout <<endl;
cout << "Hangman Game";
cout << "\n\nYou have " << tries << " tries to try and guess the word."<<endl;
// Loop until the guesses are used up
while (wrong_guesses < tries)
{
cout << unknown;
cout << "\n\nGuess a letter: ";
cin >> letter;
// Fill secret word with letter if the guess is correct, otherwise increment the number of wrong 
guesses.
if (letterFill(letter, word, unknown)==0)
{
cout << endl << "wrong guess" << endl;
wrong_guesses++;
}
else
{
cout << endl << "letter found. Find other letters." << endl;
}
// Tell user how many guesses has left.
cout << "You have " << tries - wrong_guesses;
cout << " guesses left." << endl;
// Check if user guessed the word.
if (word==unknown)
{
cout << word << endl;
cout << "Congrats! You won the Game";
break;
3
}
}
if(wrong_guesses == tries)
{
cout << "\nSorry, you lose...you've been hanged." << endl;
cout << "The word was : " << word << endl;
}
}
/* Take a one character guess and the secret word, and fill in the
unfinished guessword. Returns number of characters matched.
Also, returns zero if the character is already guessed. */
int letterFill (char guess, string secretword, string &guessword)
{
int i;
int matches=0;
int len=secretword.length();
for (i = 0; i< len; i++)
{
// Did we already match this letter in a previous guess?
if (guess == guessword[i])
return 0;
// Is the guess in the secret word?
if (guess == secretword[i])
{
guessword[i] = guess;
matches++;
}
}
return matches;
}
//hangman Game end//
//price is right start
float a;
void priceisright()
4
{ int guessprice,num;
 cout<<"press 1 to guess price of Food items"<<endl;
 cout<<"press 2 to guess price of Furniture items"<<endl;
 cout<<"press 3 to guess price of Transport items"<<endl;
 cout<<"press 4 to guess price of lifstyle items"<<endl;
 cout<<"Press 5 to guess price of Electronics items"<<endl;
 cout<<"press 6 to guess price of Antiques items"<<endl;
 cin>>num;
 if(num==1)
 { cout<<" press 1 to guess price of Oatmeal"<<endl;
 cout<<" press 2 to guess price of Coffy Beans"<<endl;
 cout<<" press 3 to guess price of Tea Leaves"<<endl;
 cin>>guessprice;
 switch(guessprice) 
 { case 1:
 cout<<"enter price"<<endl;
 cin>>a;
 if (a>=20.96 && a<=30.96)
 { cout<<"You are winner "<<endl;
 } 
 else
 { cout<<"sorry you lost"<<endl;
 } 
 break;
 case 2:
 cout<<"enter price"<<endl;
 cin>>a;
 if (a>=33 && a<=43)
{ cout<<"you are winner"<<endl;
} 
else
{ cout<<"sorry you lost"<<endl;
}
break;
case 3:
cout<<"enter price"<<endl;
 cin>>a;
if (a>=40 && a<=50)
{ cout<<"you are winner"<<endl;
5
} 
else
{ cout<<"sorry you lost"<<endl;
} 
break;
default:
cout<<"wrong entry try again";
 }
 }
else if(num==2)
{ cout<<" press 1 to guess price of Sofa"<<endl;
 cin>>guessprice;
 switch(guessprice)
 { case 1:
 cout<<"enter price"<<endl;
 cin>>a;
 if (a>=144.2 && a<=159.6)
 { cout<<"you are winner"<<endl;
 }
 else 
 { cout<<"sorry you lost"<<endl;
 }
 break;
 default:
cout<<"wrong entry try again";
 }
} 
else if(num==3)
{ cout<<" press 1 to guess price of Car "<<endl;
cin>>guessprice;
 switch(guessprice)
 { case 1:
 cout<<"enter price"<<endl;
 cin>>a;
 if (a>=5915.582 && a<=6055.582)
 { cout<<"you are winner"<<endl;
}
else
{ cout<<"sorry you lost"<<endl;
6
} 
break;
default:
cout<<"wrong entry try again";
 }
}
else if (num==4)
{ cout<<" press 1 to guess price of Watch"<<endl;
 cin>>guessprice;
 switch(guessprice)
 { case 1:
 cout<<"enter price"<<endl;
 cin>>a;
 if (a>=162.242 && a<=510.50)
{ cout<<"Conrats you are winner"<<endl;
} 
else
{ cout<<"bad luck mate you lost"<<endl;
} 
break;
default:
cout<<"wrong entry try again";
 }
} 
else if(num==5)
{ cout<<" press 1 to guess price of Smart Tv"<<endl;
cout<<" press 2 to guess price of Laptop"<<endl;
cin>>guessprice;
 switch(guessprice)
 { case 1:
 cout<<"enter price"<<endl;
 cin>>a;
 if(a>=3673.039 && a<=4680.848)
{ cout<<"congratulations you are winner"<<endl;
}
 else
 { cout<<"sorry you lost "<<endl;
 }
 break;
7
 case 2:
 cout<<"enter price"<<endl;
 cin>>a;
if (a>=4374.65 && a<=5382.459)
{ cout<<"congrats you won "<<endl;
}
 else 
 { cout<<"sorry you lost "<<endl;
} 
break;
default:
cout<<"wrong entry try again";
 }
} 
else if (num==6)
{ cout<<" press 1 to guess price of Grandfather Clock"<<endl;
cin>>guessprice;
 switch(guessprice)
 { case 1:
 cout<<"enter price"<<endl;
 cin>>a;
 if (a>=2536.742 && a<=8500.689)
 { cout<<"you are winner"<<endl;
} 
else
{ cout<<"You lost"<<endl;
}
break;
default:
cout<<"wrong entry try again";
} 
} else 
{ cout<<"enter correct number "<<endl;
}
}
8
//price is right ends
//quiz show starts
int i;
string answer;
void English() {
cout<<"What is a comma used after the penultimate item in a list of three or "
more items, (before \'and\' or \'or\') is called?"<<endl;
cin >> ws;
getline(cin, answer);
if(answer == "Oxford comma"){
cout<<"You are the Winner"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
else{
cout<<"You lose"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
}
void Sports(){
cout<<"Where will the 2024 Olympics take place?"<<endl;
cin >> ws;
getline(cin, answer);
if(answer == "Paris"){
cout<<"You are the Winner"<<endl;
9
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
else{
cout<<"You lose"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
}
void Maths(){
cout<<"Which theorem represents the fundamental relation in Euclidean 
geometry among the three sides of a right triangle?"<<endl;
cin >> ws;
getline(cin, answer);
if(answer == "Pythagorean-theorem"){
cout<<"You are the Winner"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
else{
cout<<"You lose"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
}
void Science(){
cout<<"What is the scientific name given to humans?"<<endl;
cin >> ws;
getline(cin, answer);
if(answer == "Homo-sapiens"){
cout<<"You are the Winner"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
else{
10
cout<<"You lose"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
}
void History(){
cout<<"When did Pakistan came into being? "<<endl;
cin >> ws;
getline(cin, answer);
if(answer == "14-August-1947"){
cout<<"You are the Winner"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
else{
cout<<"You lose"<<endl;
cout<<"Remaining turns ----------";
cout<<(i*-1)+2<<endl<<endl;
}
}
void quizgame(){
for(i=0 ; i<3 ; i++){
char category;
cout<<"--------This is the Quiz Game--------"<<endl;
cout<<"Choose From the given category"<<endl;
cout<<"\t A. English"<<endl;
cout<<"\t B. Sports"<<endl;
cout<<"\t C. Mathematics"<<endl;
cout<<"\t D. Science"<<endl;
cout<<"\t E. History"<<endl;
cout<<"Choose one option: ";
11
cin>>category;
if( category=='a'||category=='A'){
English();
}
else if( category=='b'||category=='B'){
Sports();
}
else if( category=='c'||category=='C'){
Maths();
}
else if( category=='d'||category=='D'){
Science();
}
else if( category=='e'||category=='E'){
History();
}
}
}
//quiz show ends
//spin the wheel starts
int spinthewheel()
{
 
 srand((unsigned)time(0)); 
 int number;
12
 
 number = (rand()%9); 
 
 cout <<"your lucky number is:" <<number << "\n"; 
 switch (number) {
 case 1:
 cout <<"Congratulations you won Watch. \n";
 break;
 case 2:
 cout <<"Congratulations you won Mobile phone. \n";
 break;
 case 3:
 cout <<"Congratulations you won Electric kettle. \n";
 break;
 case 4:
 cout <<"Congratulations you won Heater \n";
 break;
 case 5:
 cout <<"Congratulations you won Iron. \n";
 break;
 case 6:
 cout <<"Congratulations you won Backpack. \n";
 break;
 case 7:
 cout <<"Congratulations you won Suitcase set. \n";
 break;
 case 8:
 cout <<"Congratulations you won Camera. \n";
 break;
 case 0:
 cout <<"Congratulations you won Travel mug \n";
 break;
 
 
}
13
//spin the wheel ends
}
int mainmenu()
{
cout <<"\n\nPress 1 to Play Hangman Game \nPress 2 to play price is right Game \nPress 3 to 
play quizshow Game \nPress 4 to play Spin the wheel \nPress 5 to quit the programe" <<endl; 
cin >> game;
return game;
}
int main()
{
string leader;
cout <<"\nWelcome to Group 2's Game console ";
cout <<"\n \nPlease Provide Group's leader name" <<endl;
cin>>leader;
cout <<"\n \nLeader's Name is "<<leader<<endl;
int length = leader.length();
cout <<"\n\nThe Group leader has " << length <<" characters in his name therefore you get to 
play each game " << length-2 << " instead of spin the wheel Game\nwhose ascii value of first letter 
is equal to ascii value of first letter of leaders Name" <<endl;
length = length-2;
cout <<"\n\nLet's Go and Start the Games" <<endl;
14
int count=0, hangmancount=0,priceisrightcount=0 , quizgamecount=0;
while (game!=5)
{
mainmenu();
if (game>=1 && game<=4)
{
if (game==1)
{
if (hangmancount<length)
{
hangman();
hangmancount++;
}
else
cout<<"You have already played this game max times"<<endl;
}
else if(game==2)
{
if (priceisrightcount<length)
{
priceisright ();
priceisrightcount++;
}
else
cout<<"You have already played this game max times"<<endl; 
}
else if(game==3)
{
15
if (quizgamecount<length)
{
quizgame();
quizgamecount++;
}
else
cout<<"You have already played this game max times"<<endl;
}
else if(game==4)
spinthewheel();
}
}
cout <<"Program ended . Thank you for playing";
}
