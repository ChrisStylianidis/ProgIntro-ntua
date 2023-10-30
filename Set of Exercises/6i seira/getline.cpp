#include<iostream>
#include<string>
using namespace std;
int main(){
string maintext="",text,lexi[10000],word="";
int i;
bool flag=true;

while(!cin.eof()){
    getline(cin,text);
    maintext+=text+" ";
}
int c=0;
for(i=0;i<maintext.size();i++){
    if(maintext[i]==' '&&flag){
        flag=false;
        lexi[c]=word;
        c++;
        word="";

    }
    if(maintext[i]!=' '){
        flag=true;
        word+=maintext[i];
    }
}
//for(i=0;i<c;i++) cout<<lexi[i]<<" ";
text.clear();
cout<<text.empty();

return 0;}

/*
Once upon a time in China, some believe, around the year one double-ought three,
head priest of the White Lotus Clan, Pai Mei was walking down the road,
contemplating whatever it is that a man of Pai Mei's infinite power contemplates
- which is another way of saying "who knows" - when a Shaolin monk appeared,
traveling in the opposite direction. As the monk and the priest crossed paths,
Pai Mei, in a practically unfathomable display of generosity, gave the monk the
slightest of nods.  The nod was not returned.


The first electronic computers were monstrous contraptions,
 filling several rooms,
 consuming as much electricity as a good-size factory,
 and costing millions of 1940s dollars
 (but with the computing power of a modern hand-held calculator).
The programmers who used these machines believed that the computer's time
 was more valuable than theirs.
They programmed in machine language.
Machine language is the sequence of bits that directly controls a processor,
 causing it to add, compare, move data from one place to another,
 and so forth at appropriate times.
Specifying programs at this level of detail is an enormously tedious task.
The following program calculates the greatest common divisor (GCD)
 of two integers, using Euclid's algorithm.
It is written in machine language,
 expressed here as hexadecimal (base 16) numbers,
 for the MIPS R4000 processor.
*/
