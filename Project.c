// Car Dealership DS Project
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 6
#define Staff_Pwd 12469
int StfPwd;
int Rate[50];
struct CarQueue
{
    char Name[30];
    int Id;
    char Num[20];
    char address[30];
    int CarCmpy;
    int CarColor;
    int CarModel;
    int CarType;
    int CarFuel;
    int CarPrice;

}CarQ[MAX];
int f=-1,r=-1;
char review[MAX][30];
int top=-1;
char Cmpy[4][10]={"Audi","Mercedes","Tesla","BMW"};
char AudiModel[4][10]={"Q2","Q8","A8 L","e-tron"};
char MercModel[4][10]={" AMG GT"," S-Coupe"," G Class"," C Class"};
char TeslaModel[4][10]={"Model S","Model 3","Model X","Model Y"};
char BMWModel[4][10]={"M8","X5 M","7 Series","8 Series"};
char Typ[4][30]={"Self-Driving","4-Wheel Drive","Custom Model","Default"};
char Fuel[4][10]={"Electric","Diesel","Hybrid","Petrol"};
char AudiClr[4][10]={"Blue","Red","White","Black"};
char MercClr[4][10]={"Red","Brown","Black","White"};
char TeslaClr[3][10]={"White","Black","Red",};
char BMWClr[4][10]={"Black","Blue","Red","White"};
int isempty()
{
    if(f==-1||r==-1)
     return 1;
    else
     return 0;
}
int isfull()
{
    if( (f==0&&r==MAX-1) || (f==r+1) )
       return 1;
    else
      return 0;
}
void push_customer()
{
    char Name[30],c;
    int Id;
    char Num[20];
    if(isfull())
    {
        printf("No Additional Orders Can Be Received :(\n");
        return ;
    }
     printf ("\n Enter Your Details: \n");
      if(r==-1)
    {
        f=0;
        r=0;
    }
    else
     r=(r+1)%MAX;
    printf("\n Name: ");
    c=getchar();
    scanf("%s",CarQ[r].Name);
    printf(" Customer ID.: ");
    scanf("%i",&CarQ[r].Id);
    printf(" Mobile Number: ");
    scanf("%s",CarQ[r].Num);
    printf(" Address: ");
    scanf("%*[\n]%[^\n]",CarQ[r].address);
    printf("\n\t\t >> Customer Details Have Been Saved << \n");
    printf("-\n");
    Option:
    printf(" Select the Car Company You would be Interested in Buying: \n\n (1) Audi\t(2) Mercedes\t(3) Tesla\t(4) BMW\n\n Option: ");
    scanf("%i",&CarQ[r].CarCmpy);
    if(CarQ[r].CarCmpy==1)
    {
        AudiMdl:
        printf("-\n Choose the Model you would like to Purchase: \n\n (1) Audi Q2 (2) Audi Q8 (3) Audi A8 L (4) Audi e-tron\n\n Option: ");
        scanf("%i",&CarQ[r].CarModel);
        if(CarQ[r].CarModel>4 || CarQ[r].CarModel<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto AudiMdl;
        }
        AudiTyp:
        printf("-\n Choose the Type of Car you Would like to Obtain: \n\n (1) Self-Driving (2) 4-Wheel Drive (3) Custom Build (4) None\n\n Option: ");
        scanf("%i",&CarQ[r].CarType);
        if(CarQ[r].CarType>4 || CarQ[r].CarType<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto AudiTyp;
        }
        AudiCol:
        printf("-\n Choose the Color you would like to Purchase the in: \n\n (1) Blue \t (2) Red \t (3) Black \t (4) White\n\n Option: ");
        scanf("%i",&CarQ[r].CarColor);
        if(CarQ[r].CarColor>4 || CarQ[r].CarColor<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto AudiCol;
        }
        AudiFl:
        printf("-\n Choose the Fuel Type for your Vehicle: \n\n (1) Electric - +$3500 (2) Diesel - +$1500 (3) Hybrid - +$5000 (4) Petrol\n\n Option: ");
        scanf("%i",&CarQ[r].CarFuel);
        if(CarQ[r].CarFuel>4 || CarQ[r].CarFuel<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto AudiFl;
        }
    }
    else if(CarQ[r].CarCmpy==2)
    {
        MercMdl:
        printf("-\n Choose the Model you would like to Purchase: \n\n (1)  AMG GT (2)  S-Coupe (3)  G Class (4)  C Class\n\n Option: ");
        scanf("%i",&CarQ[r].CarModel);
        if(CarQ[r].CarModel>4 || CarQ[r].CarModel<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto MercMdl;
        }
        MercTyp:
        printf("-\n Choose the Type of Car you Would like to Obtain: \n\n (1) Self-Driving (2) 4-Wheel Drive (3) Custom Build (4) None\n\n Option: ");
        scanf("%i",&CarQ[r].CarType);
        if(CarQ[r].CarType>4 || CarQ[r].CarType<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto MercTyp;
        }
        MercCol:
        printf("-\n Choose the Color you would like to Purchase the in: \n\n (1) Red \t (2) Brown \t (3) Black \t (4) White\n\n Option: ");
        scanf("%i",&CarQ[r].CarColor);
        if(CarQ[r].CarColor>4 || CarQ[r].CarColor<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto MercCol;
        }
        MercFl:
        printf("-\n Choose the Fuel Type for your Vehicle: \n\n (1) Electric - +$3250 (2) Diesel - +$1250 (3) Hybrid - +$4500 (4) Petrol\n\n Option: ");
        scanf("%i",&CarQ[r].CarFuel);
        if(CarQ[r].CarFuel>4 || CarQ[r].CarFuel<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto MercFl;
        }
    }
    else if (CarQ[r].CarCmpy==3)
    {
        TeslaMdl:
        printf("-\n Choose the Model you would like to Purchase: \n\n (1) Tesla Model S (2) Tesla Model 3 (3) Tesla Model X (4) Tesla Model Y\n\n Option: ");
        scanf("%i",&CarQ[r].CarModel);
        if(CarQ[r].CarModel>4 || CarQ[r].CarModel<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto TeslaMdl;
        }
        TeslaTyp:
        printf("-\n Choose the Type of Car you Would like to Obtain: \n\n (1) Self-Driving (2) 4-Wheel Drive (3) Custom Build (4) None\n\n Option: ");
        scanf("%i",&CarQ[r].CarType);
        if(CarQ[r].CarType>4 || CarQ[r].CarType<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto TeslaTyp;
        }
        TeslaCol:
        printf("-\n Choose the Color you would like to Purchase the in: \n\n (1) White \t (2) Black \t (3) Red\n\n Option: ");
        scanf("%i",&CarQ[r].CarColor);
        if(CarQ[r].CarColor>3 || CarQ[r].CarColor<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto TeslaCol;
        }
        TeslaFl:
        printf("-\n Choose the Fuel Type for your Vehicle: \n\n (1) Electric - +$3750 (2) Diesel - +$1750 (3) Hybrid - +$5500 (4) Petrol\n\n Option: ");
        scanf("%i",&CarQ[r].CarFuel);
        if(CarQ[r].CarFuel>4 || CarQ[r].CarFuel<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto TeslaFl;
        }
    }
    else if(CarQ[r].CarCmpy==4)
    {
        BMWMdl:
        printf("-\n Choose the Model you would like to Purchase: \n\n (1) BMW M8 (2) BMW X5 M (3) BMW 7 Series (4) BMW 8 Series\n\n Option: ");
        scanf("%i",&CarQ[r].CarModel);
        if(CarQ[r].CarModel>4 || CarQ[r].CarModel<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto BMWMdl;
        }
        BMWTyp:
        printf("-\n Choose the Type of Car you Would like to Obtain: \n\n (1) Self-Driving (2) 4-Wheel Drive (3) Custom Build (4) None\n\n Option: ");
        scanf("%i",&CarQ[r].CarType);
        if(CarQ[r].CarType>4 || CarQ[r].CarType<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto BMWTyp;
        }
        BMWCol:
        printf("-\n Choose the Color you would like to Purchase the in: \n\n (1) Black \t (2) Blue \t (3) Red \t (4) White\n\n Option: ");
        scanf("%i",&CarQ[r].CarColor);
        if(CarQ[r].CarColor>4 || CarQ[r].CarColor<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto BMWCol;
        }
        BMWFl:
        printf("-\n Choose the Fuel Type for your Vehicle: \n\n (1) Electric - +$3000 (2) Diesel - +$1750 (3) Hybrid - +$4800 (4) Petrol\n\n Option: ");
        scanf("%i",&CarQ[r].CarFuel);
        if(CarQ[r].CarFuel>4 || CarQ[r].CarFuel<1)
        {
            printf("\n Please Enter the Correct Option!\n\n");
            goto BMWFl;
        }
    }
    else
    {
        printf("\n ERROR! Invalid Option! Please Enter the Correct Option.... \n\n");
        goto Option;
    }
    printf("\n\t\t >> Car Details Have Been Saved << \n");
    printf("\n");
}
void push_feedback()
{
    char rev[30];
    int UserId;
    int Star;
    int i,flag=0;
    if(top==MAX-1)
    {
        printf(" Sorry, No Further Reviews Can Be Taken :(\n");
        return ;
    }
    printf("\n Enter Customer Id.: ");
    scanf("%i",&UserId);
    doi:
    {
    if(f<=r)
     {
       for(i=f;i<=r;i++)
        {
            if(UserId==CarQ[i].Id)
            {
                flag=1;
                break;
            }
        }
     }
    else
    {
        for(i=f;i<=MAX;i++)
        {
            if(UserId==CarQ[i].Id)
            {
                flag=1;
                break;
            }
        }
        for(i=0;i<=r;i++)
        {

            if(UserId==CarQ[i].Id)
            {
                flag=1;
                break;
            }
        }
      }
    if(flag==0)
     {
        printf("\n !! Please, Enter A Pre-Existing Customer Id. !!\n\n Enter Customer Id.: ");
        scanf("%i",&UserId);
        goto doi;
     }
    }
        printf("\n Enter the Review: ");
        scanf("%*[\n]%[^\n]",rev);
        Rte:
        printf(" Rate it Out of 5: ");
        scanf("%i",&Star);
        if(Star>5 || Star<1)
        {
            printf("\n Please Rate it Out of 5! (1-5)\n\n");
            goto Rte;
        }
        top=top+1;
        strcpy(review[top],rev);
        Rate[top]=Star;
        printf("\n");
        printf("\n\t\t >> !!THANK YOU!! The Feedback Has Been Saved <<\n");

    return ;
}
void pop_customer()
{
    int Id,Num;
    char Name[30];
    char address[30];
    printf("\n Enter Staff Password: ");
    scanf("%i",&StfPwd);
    if(StfPwd==Staff_Pwd)
    {
        if(isempty())
    {
        printf("\n There is No Data to be Deleted !\n");
        return ;
    }
    strcpy(Name,CarQ[f].Name);
    Id=CarQ[f].Id;
    Num=CarQ[f].Num;
    strcpy(address,CarQ[f].address);
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
     {
         f=(f+1)%MAX;
     }
    printf("\n    Details of Customer (Id:%i) Have Been Removed from the Database! \n",Id);
    return ;
    }
    else
    {
        printf("\n ~~ Sorry, This Option is Only Available for STAFF !! ~~ \n");
        return;
    }
}
void display_customer()
{
    int i;
    printf("\n Enter Staff Password: ");
    scanf("%i",&StfPwd);
    if(StfPwd==Staff_Pwd)
    {
        if(isempty())
    {
        printf("\n !! Customer Database Is EMPTY :( !!\n");
        return ;
    }
        printf("\n  The Details of Customers are: \n");
        printf(" .....................................................................................\n");
    if(f<=r)
    {
        if(CarQ[r].CarCmpy==1)
        {
            for(i=f;i<=r;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],AudiModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],AudiClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==2)
        {
            for(i=f;i<=r;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],MercModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],MercClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==3)
        {
            for(i=f;i<=r;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],TeslaModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],TeslaClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==4)
        {
            for(i=f;i<=r;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],BMWModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],BMWClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
    }
    else
    {
        if(CarQ[r].CarCmpy==1)
        {
            for(i=f;i<=MAX;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],AudiModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],AudiClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==2)
        {
            for(i=f;i<=MAX;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],MercModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],MercClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==3)
        {
            for(i=f;i<=MAX;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],TeslaModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],TeslaClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==4)
        {
            for(i=f;i<=MAX;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],BMWModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],BMWClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        {
        if(CarQ[r].CarCmpy==1)
        {
            for(i=0;i<=r;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],AudiModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],AudiClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==2)
        {
            for(i=0;i<=r;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],MercModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],MercClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==3)
        {
            for(i=0;i<=r;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],TeslaModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],TeslaClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
        else if(CarQ[r].CarCmpy==4)
        {
            for(i=0;i<=r;i++)
        {
            printf("\n   Name: %s\n   ID: %i\n   Mobile Number: %s\n   Address: %s\n   Car Company: %s\n   Car Model: %s\n   Car Type: %s\n   Car Color: %s\n   Car Fuel: %s\n",CarQ[i].Name,CarQ[i].Id,CarQ[i].Num,CarQ[i].address,Cmpy[(CarQ[i].CarCmpy)-1],BMWModel[(CarQ[i].CarModel)-1],Typ[(CarQ[i].CarType)-1],BMWClr[(CarQ[i].CarColor)-1],Fuel[(CarQ[r].CarFuel)-1]);
            printf("\n");
            printf(" .....................................................................................\n");
        }
        }
    }
    }}
    else
    {
        printf("\n ~~ Sorry, This Option is Only Available for STAFF !! ~~ \n"); 
        return;
    }
}
void pop_feedback()
{
    char r[30];
    printf("\n Enter Staff Password: ");
    scanf("%i",&StfPwd);
    if(StfPwd==Staff_Pwd)
    {
            if(top==-1)
    {
        printf("\n There are No Reviews to Be Deleted !\n");
        return ;
    }
    strcpy(r,review[top]);
    printf("\n ->> DONE! The Oldest Review of \"%s\" has been Removed. <<-\n",r);
    return ;
    }
    else
    {
        printf("\n ~~ Sorry, This Option is Only Available for STAFF !! ~~ \n");
        return;
    }
}
void feedback_count()
{
    int c=0,i;
    printf("\n Enter Staff Password: ");
    scanf("%i",&StfPwd);
    if(StfPwd==Staff_Pwd)
    {
    if(top==-1)
    {
      printf("\n There are No Reviews to Count :( \n");
      return ;
    }
    for(i=top;i>=0;i--)
    {
        c+=1;
    }
    printf("\n ~~>> The Total Count of Reviews Provided are: \"%i\" <<~~\n",c);
    return;
    }
    else
    {
        printf("\n ~~ Sorry, This Option is Only Available for STAFF !! ~~ \n");
        return;
    }
}
void display_feedback()
{
    int i;
    printf("\n Enter Staff Password: ");
    scanf("%i",&StfPwd);
    if(StfPwd==Staff_Pwd)
    {
        if(top==-1)
    {
        printf("\n There are No Reviews Present to Display. :(\n");
        return ;
    }
    printf("\n  The Reviews for the Cars are: \n\n");
    for(i=top;i>=0;i--)
    {
        if(Rate[i]==5)
        {
            printf("  --> %s (*****)\n",review[i]);
        }
        if(Rate[i]==4)
        {
            printf("  --> %s (****)\n",review[i]);
        }
        if(Rate[i]==3)
        {
            printf("  --> %s (***)\n",review[i]);
        }
        if(Rate[i]==2)
        {
            printf("  --> %s (**)\n",review[i]);
        }
        if(Rate[i]==1)
        {
            printf("  --> %s (*)\n",review[i]);
        }
    }
    printf("\n");
    return ;
    }
    else
    {
        printf("\n ~~ Sorry, This Option is Only Available for STAFF !! ~~ \n");
        return;
    }
}
void checkout()
{
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
     {
         f=(f+1)%MAX;
     }
    if(CarQ[r].CarCmpy==1)
    {
        if(CarQ[r].CarFuel==1)
        {
            printf("\n Price: $15000");
        }
        if(CarQ[r].CarFuel==2)
        {
            printf("\n Price: $13250");
        }
        if(CarQ[r].CarFuel==3)
        {
            printf("\n Price: $12500");
        }
        if(CarQ[r].CarFuel==4)
        {
            printf("\n Price: $10000");
        }
    }
    else if(CarQ[r].CarCmpy==2)
    {
        if(CarQ[r].CarFuel==1)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==2)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==3)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==4)
        {
            printf("\n Price: ");
        }
    }
    else if(CarQ[r].CarCmpy==3)
    {
        if(CarQ[r].CarFuel==1)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==2)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==3)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==4)
        {
            printf("\n Price: ");
        }
    }
    else if(CarQ[r].CarCmpy==4)
    {
        if(CarQ[r].CarFuel==1)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==2)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==3)
        {
            printf("\n Price: ");
        }
        if(CarQ[r].CarFuel==4)
        {
            printf("\n Price: ");
        }
    }
}
int main()
{
    int Opt;
     printf ("\n\n\t\t\t\t\t\t  \\o\\o  Welcome!! o/o/ \n\t\t\t\t\t  $$ To Our Online Car Dealership!! $$\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n");
    do
    {
        printf("\n   <----------------------------------------------------------------------------------------------------------->\n");
        printf("\n");
        printf("  Please Select an Option from Below:\n\n   (1): Add New Customer Info\n   (2): Give Feedback\n   (3): Delete Pre-Existing Customer Details (STAFF ONLY)\n   (4): Display Customer Details (STAFF ONLY)\n   (5): Delete Feedback (STAFF ONLY)\n   (6): Feedback Count (STAFF ONLY)\n   (7): Display Customer Feedback (STAFF ONLY)\n   (8): CheckOut\n   (9): Exit\n");
        printf("\n  Option: ");
        scanf("%i",&Opt);
        switch(Opt)
        {
            case 1:push_customer();
                   break;
            case 2:push_feedback();
                   break;
            case 3:pop_customer();
                   break;
            case 4:display_customer();
                   break;
            case 5:pop_feedback();
                   break;
            case 6:feedback_count();
                   break;
            case 7:display_feedback();
                   break;
            case 8:checkout();
                   break;
            case 9:printf("\n\t ~~ Thank You For Visiting! ~~");
                   break;
            default:printf("\n !! Sorry, Invalid Input. Please Try Again !!\n");
        }
    }while(Opt!=9);
return 0;
}
//Line To Make this Code 600 Pages :)
