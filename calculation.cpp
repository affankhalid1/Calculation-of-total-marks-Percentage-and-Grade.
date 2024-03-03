#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    HANDLE h = GetStdHandle(  STD_OUTPUT_HANDLE  );
    // Subjects
    // Total and percentage
    int chemistry,physics,computer,english,mathematics,pst,sindhi,total;
    float percentage;

    //individual subjects percentage
    int chemistryper,physicsper,computerper,englishper,mathematicsper,pstper,sindhiper;
    
    // Subjects Practicals
    int chemistryprac,physicsprac,computerprac;

    //individual subject practical percentage 
    int chemistrypracper,physicspracper,computerpracper;
    
    SetConsoleTextAttribute(h,14);
    cout<<"\n \n \t \t  \t CALCULATION OF TOTAL MARKS, PERCENTAGE, AND GRADE\n";
    cout<<"\t \t ================================================================ \n";


    SetConsoleTextAttribute(h,2);
// physics theory

    cout<<"\n\nEnter Physics Theory marks : ";
    cin>>physics;

    cout<<"\n\nIndividual Subject Result\n";
    
    if (physics>=20)
    {
    physicsper = (physics*100)/60;
    cout<<"\n\nPhysics Theory Percentage : "<<physicsper<<" %";
    cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are Failed in Physics\n";
    }



// physics practical
    cout<<"\n\nEnter Physics Practical marks : ";
    cin>>physicsprac;
    
    cout<<"\n\nIndividual Subject Result\n";

    if(physicsprac>=5)
    {
        physicspracper = (physicsprac*100)/15;
    cout<<"\n\nPhysics Practical Percentage : "<<physicspracper<<" %";
    cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"You are Failed in Physics Practical\n";
    }





    // Chemistry Theory
    cout<<"\n\nEnter Chemistry Theory marks : ";
    cin>>chemistry;
    
    cout<<"\n\nIndividual Subject Result\n";

    if(chemistry>=20)
    {
        chemistryper = (chemistry*100)/60;
        cout<<"\n\nChemistry Theory Percentage : "<<chemistryper<<" %";
        cout<<"\n\n Remarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are Failed in chemistry Theory\n";
    }


    // Chemistry Practical
    cout<<"\n\n Enter Chemistry Practical marks : ";
    cin>>chemistryprac;
    
    cout<<"\n\nIndividual Subject Result\n";

    if(chemistryprac>=5)
    {
        chemistrypracper = (chemistryprac*100)/15;
        cout<<"\n\nYour Chemistry Practical Percentage : "<<chemistrypracper<<" %";
        cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are Failed in Chemistry Practical\n";
    }




    // Computer Theory

    cout<<"\n\nEnter Computer Theory marks : ";
    cin>>computer;
    
    cout<<"\n\nIndividual Subject Result\n";

    if(computer>=20)
    {
        computerper = (computer*100)/60;
        cout<<"\n\nYour Computer Theory Percentage : "<<computerper<<" %";
        cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are Failed in Computer Theory\n";
    }




    // Computer Practical

    cout<<"\n\nEnter Computer Practical marks : ";
    cin>>computerprac;
    
    cout<<"\n\nIndividual Subject Result\n";

    if(computerprac>=5)
    {
        computerpracper = (computerprac*100)/15;
        cout<<"\n\nYour Computer Practical Percentage : "<<computerpracper<<" %";
        cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are Failed in Computer Practical\n";
    }



    // PST
    cout<<"\n\nEnter PST marks : ";
    cin>>pst;
  
    cout<<"\n\nIndividual Subject Result\n";

    if(pst>=25)
    {
        pstper = (pst*100)/75;
        cout<<"\n\nYour PST Percentage : "<<pstper<<" %";
        cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are Failed in PST\n";
    }




    // English
    cout<<"\n\nEnter English marks : ";
    cin>>english;
    
    cout<<"\n\nIndividual Subject Result\n";

    if(english>=33)
    {
        englishper = (english*100)/100;
        cout<<"\n\nYour English Percentage : "<<englishper<<" %";
        cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are failed in English\n";
    }




    // Mathematics
    cout<<"\n\nEnter Mathematics marks : ";
    cin>>mathematics;

    cout<<"\n\nIndividual Subject Result\n";

    if(mathematics>=25)
    {
        mathematicsper = (mathematics*100)/75;
        cout<<"\n\nYour Mathematics Percentage : "<<mathematicsper<<" %";
        cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are Failed in Matheatics\n";
    }




    // Sindhi
    cout<<"\n\nEnter Sindhi marks : ";
    cin>>sindhi;

    cout<<"\n\nIndividual Subject Result\n";

    if(sindhi>=25)
    {
        sindhiper = (sindhi*100)/75;
        cout<<"\n\nYour Sindhi Percentage : "<<sindhiper<<" %";
        cout<<"\n\nRemarks : Pass\n";
    }
    else
    {
        cout<<"\n\nYou are Failed in Sindhi\n";
    }


    SetConsoleTextAttribute(h,4);
    total = physics+chemistry+computer+english+pst+mathematics+sindhi+computerprac+chemistryprac+physicsprac;
    cout<<"\n\nTotal Marks of All Subjects : "<<total<<" / 550\n";
    
    SetConsoleTextAttribute(h,13);
    percentage = (total*100)/550;
    cout<<"\n\nPercentage of All Subject : "<<percentage<<" %\n";


    SetConsoleTextAttribute(h,3);
    if(percentage>=80 && percentage<=100)
    {
        cout<<"\n\nGrade is : A1\n";
        cout<<"\n\nExcellent Performance\n";
    }

    else if(percentage>=70 && percentage<=79)
    {
        cout<<"\n\nGrade is : A\n";
        cout<<"\n\nBest Performance\n";
    }

    else if(percentage>=60 && percentage<=69)
    {
        cout<<"\n\nGrade is : B\n";
        cout<<"\n\nGood Performance\n";
    }

    else if(percentage>=50 && percentage<=59)
    {
        cout<<"\n\nGrade is : C\n";
    }

    else if(percentage>=40 && percentage<=49)
    {
        cout<<"\n\nGrade is : D\n";
    }

    else if(percentage>=33 && percentage<=39)
    {
        cout<<"\n\nGrade is : E\n";
    }

    else if(percentage>=10 && percentage<=32)
    {
        cout<<"\n\nFailed\n";
    }

    else 
    {
        cout<<"\n\nOut of range\n";
    }



// Check in How many Subjects You are pass out of 10 subjects
// All Subjects Passing Status
// Physics
    if (physics>=20)
    {
       physics=1;
    }
    else
    {
        physics=0;
    }
    
    if (physicsprac>=5)
    {
        physicsprac=1;
    }
    else
    {
        physicsprac=0;
    }


    // Chemistry
    if(chemistry>=20)
    {
        chemistry=1;
    }
    else
    {
        chemistry=0;
    }

    if(chemistryprac>=5)
    {
        chemistryprac=1;
    }
    else
    {
        chemistryprac=0;
    }



    // Computer
    if(computer>=20)
    {
        computer=1;
    }
    else
    {
        computer=0;
    }


    if(computerprac>=5)
    {
        computerprac=1;
    }
    else
    {
        computerprac=0;
    }



    // Mathematics
    if(mathematics>=25)
    {
        mathematics=1;
    }
    else
    {
        mathematics=0;
    }


    // PST
    if(pst>=25)
    {
        pst=1;
    }
    else
    {
        pst=0;
    }


    // Sindhi
    if(sindhi>=25)
    {
        sindhi=1;
    }
    else
    {
        sindhi=0;
    }



    // English
    if(english>=33)
    {
        english=1;
    }
    else
    {
        english=0;
    }

    
    //Declaring variable for the value of Passing subjects 
    int Numberofpassingsubjects; 
    int physicswhole;
    int computerwhole;
    int chemistrywhole;

    
    
    // physics whole means physics theory + Practical
    if(physics=1)
    {
        if (physicsprac=1)
        {
            physicswhole=1;
        }
        else
        {
            physicswhole=0;
        }
    }


    // Computer whole means computer theory + Practical
    if(computer=1)
    {
        if(computerprac=1)
        {
            computerwhole=1;
        }
        else
        {
            computerwhole=0;
        }
    }
    


    //Chemisty whole means chemistry Theory + Practical
    if(chemistry=1)
    {
        if(chemistryprac=1)
        {
            chemistrywhole=1;
        }
        else
        {
            chemistrywhole=0;
        }
    } 



    // Make the function to check, In how many Subjects You are passed through calculating
    Numberofpassingsubjects = physicswhole + chemistrywhole + computerwhole + mathematics + pst + sindhi + english;
    

    SetConsoleTextAttribute(h,5);
    // Give the output of , In how many Subjects are passed
    cout<<"\n\nPassing Status : "<<Numberofpassingsubjects<<" / 7\n";



    return 0;

}