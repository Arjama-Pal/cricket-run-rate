#include<iostream>
using namespace std;

int ch;
float n,r,tar,n1,o,rr,rrr,netrr;
float current_runrate()
{
 cout<<"Enter the number of balls played (use .0 in case of integer value): \n";
 cin>>r;
 cout<<"Enter the runs scored (use .0 in case of integer value): \n";
 cin>>n;
 o=r/6;
 rr=n/o;
 return rr;
}
float required_runrate()
{
    cout<<"Enter the target to win (use .0 in case of integer value): ";
    cin>>tar;
    cout<<"\nENTER THE CURRENT STATUS OF MATCH->\n";
    cout<<"Runs and remaining overs: ";
    cin>>n>>r;
    n1=tar-n;
    if(r<0)
    cout<<"MATCH IS OVER NO REQUIRED RATE RATE\n";
    else
    rrr=n1/r;
    return rrr;
}
float net_runrate()
{
    int nm,run,opprun,trun=0,opptrun=0;
    float trr, opprr,tov,oppov,tover=0.0,opptover=0.0;
    cout<<"\nHow many matches have been played in total?: ";
    cin>>nm;
    for(int i=1; i<=nm; i++)
    {
        cout<<"Enter the runs scored by the team in match "<<i<<": ";
        cin>>run;
        trun+=run;
        cout<<"Enter the runs scored by the opponent in match "<<i<<": ";
        cin>>opprun;
        opptrun+=opprun;
        cout<<"Enter the overs played by team in match "<<i<<": ";
        cin>>tov;
        tover+=tov;
        cout<<"Enter the overs played by opponent in match "<<i<<": ";
        cin>>oppov;
        opptover+=oppov;
    }
    trr=trun/tover;
    opprr=opptrun/opptover;
    netrr=trr-opprr;
    return netrr;
}
int main()
{
 cout<<"\nPress->\n1: To calculate current runrate\n2: To calculate required runrate per over to win\n";
 cout<<"3: To calculate the net runrate in the tournament\n";
 cin>>ch;
 switch(ch)
 {
    case 1: current_runrate();
            cout<<"RUN RATE: "<<rr<<"/over"<<"\n";
            break;
    case 2: required_runrate();
            cout<<"REQUIRED RUNRATE: "<<rrr;
            break;
    case 3: net_runrate();
            cout<<"NET RUNRATE: "<<netrr;
            break;
 }
 return 0;
}
