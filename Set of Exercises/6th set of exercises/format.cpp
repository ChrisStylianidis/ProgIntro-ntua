// format.cpp
#include <fstream>
#include <iostream>
#include <string>
#define megethos 60
using namespace std;
bool gramma(char a)
{
    //    fout<<a<<endl;
    return (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z');
}
void ftiaksimo(string &a)
{
    string ans = "";
    int keno = megethos - a.size(), c = 0, i, position, times = 1;
    bool flag = true, enable;
    i = a.size() - 1;
    while (flag)
    {
        if (i == 0)
        {
            times++;
            i = a.size() - 1;
        }
        if (a[i] == ' ')
            c++;
        if (c == keno)
        {
            position = i;
            flag = false;
        }
        i--;
    }
    enable = false;
    c = 0;
    for (i = 0; i < a.size(); i++)
    {
        if (i == position)
            enable = true;
        if (enable && a[i] == ' ')
        {
            ans += ' ';
        }
        if (a[i] == ' ')
            for (int z = 0; z < times - 1; z++)
                ans += ' ';
        ans += a[i];
    }
    a = ans;
}
int main()
{
    ofstream fout("spitme.txt");
    ofstream fin("takeme.txt");
    string line, letmebe, mazefka = "", fillme = "", lekseis[10000];
    int i, sum, j, words = 0;
    bool flag = true;

    while (!fin.eof())
    {
        getline(fin, letmebe);
        fillme += letmebe;
        fillme += ' ';
    }
    for (i = 0; i < fillme.size(); i++)
    {

        if (fillme[i] == ' ' && flag)
        {
            flag = false;
            lekseis[words] = mazefka;
            mazefka.clear();
            words++;
        }
        if (fillme[i] != ' ')
        {
            flag = true;
            mazefka += fillme[i];
        }
    }
    int arxi = 0;
    sum = 0;

    line.clear();

    for (i = 0; i < words; i++)
    {
        sum += lekseis[i].size();
        if (sum == megethos)
        {
            for (j = arxi; j < i; j++)
            {
                line += lekseis[j] + " ";
            }
            line += lekseis[j];
            fout << line << endl;
            line.clear();
            arxi = i + 1;
            sum = -1; // molis vgei apo afto to if tha ginei 0 epd exw ena ++
        }
        if (sum > megethos)
        {
            for (j = arxi; j < i - 1; j++)
            {

                line += lekseis[j] + " ";
            }
            line += lekseis[j];
            if (lekseis[i].size() + sum <= megethos)
            {
                line += lekseis[i];
                ftiaksimo(line);
                fout << line << endl;
                line.clear();
                sum = 0;
            }
            else
            {
                ftiaksimo(line);
                fout << line << endl;
                line = lekseis[i]; // here my boy
                if (!(lekseis[i][line.size() - 1] == '.' && (lekseis[i + 1].size() == 0)))
                    line += ' ';

                sum = lekseis[i].size();
            }
            arxi = i + 1;
        }
        sum++; // einai to keno pou prpei na exei toulaxisto ena
    }

    for (i = arxi; i < words - 1; i++)
    {
        line += lekseis[i] + " ";
    }
    line += lekseis[i];
    fout << line << endl;
    return 0;
}
/*

Once upon a time in China, some believe, around the year one double-ought three,
head priest of the White Lotus Clan, Pai Mei was walking down the road,
contemplating whatever it is that a man of Pai Mei's infinite power contemplates
- which is another way of saying "who knows" - when a Shaolin monk appeared,
traveling in the opposite direction. As the monk and the priest crossed paths,
Pai Mei, in a practically unfathomable display of generosity, gave the monk the
slightest of nods. The nod was not returned.


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
