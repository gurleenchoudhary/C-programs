//to check weird or not//
#include<stdio.h>
int main()
{
    /*int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0 && n>=2 && n<=5)
        printf("\n not weird");
    else if(n%2!=0)
        printf("\n weird");
    else if(n%2==0 && n>=6 && n<=20)
        printf("\n not weird");
    else
    printf("not weird");
    */

    //to find maximum betwwen two numbers//
    /*int a,b;
    printf("enter 1st number to find maximum:");
    scanf("%d",&a);
    printf("\nenter 2nd number to find maximum:");
    scanf("%d",&b);
    if(a>b)
        printf("\n %d the greatest number is:",a);
    else
        printf("\n %d the greatest number is:",b);
    */

    //to find maximum between three numbers//
    /*int a,b,c;
    printf("enter 1st number to find maximum:");
    scanf("%d",&a);
    printf("\nenter 2nd number to find maximum:");
    scanf("%d",&b);
    printf("\nenter 3rd number to find maximum:");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("\n %d the greatest number is:",a);
    else if(b>a && b>c)
        printf("\n %d the greatest number is:",b);
    else
        printf("\n %d the greatest number is:",c);
    */

    //to check whether number is negative, positive or zero//
    /*int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0)
        printf("the given number is positive");
    else if(a==0)
        printf("the given number is zero");
    else
        printf("the given number is negative");
    */

    //to check whether a number is divisible by 5 and 11 or not//
    /*int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
        printf("the given number is divisible by 5 and 11 both");
    else
        printf("the given number is not divisible by 5 and 11 both");
    */

    //to check whether a number is even or odd//
    /*int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("the given number is even");
    else
        printf("the given number is odd");
    */

    //to check whether a year is leap or not//
    /*int a;
    printf("enter the year:");
    scanf("%d",&a);
    if(a%4==0)
        printf("the given number is a leap year");
    else
        printf("the given year is not a leap year");
    */

    //to check whether a character is alphabet or not//
    /*char a;
    printf("enter the character:");
    scanf("%c",&a);
    if(a>='a' && a<='z')
        printf("the given character is an albhabet");
    else if(a>='A' && a<='Z')
        printf("the given character is an albhabet");
    else
        printf("it is not an aplhabet");
    */

    // to check whether an alphabet is vowel or consonant//
    /*char a;
    printf("enter any alphabet:");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':{printf("the given alphabet is a vowel");}

    break;
    case 'e':{printf("the given alphabet is a vowel");}
    break;
    case 'i':{printf("the given alphabet is a vowel");}
    break;
    case 'o':{printf("the given alphabet is a vowel");}
    break;
    case 'u':{printf("the given alphabet is a vowel");}
    break;
    case 'A':{printf("the given alphabet is a vowel");}
    break;
    case 'E':{printf("the given alphabet is a vowel");}
    break;
    case 'I':{printf("the given alphabet is a vowel");}
    break;
    case 'O':{printf("the given alphabet is a vowel");}
    break;
    case 'U':{printf("the given alphabet is a vowel");}
    break;
    default:
        printf("the given alphabet is a consonant");
    }
    */

    //to check whether it is alphabet, digit or special character//
    /*char a;
    printf("enter a character:");
    scanf("%c",&a);
    if(a>='a' && a<='z')
        printf("the character is an alphabet");
    else if(a>='A' && a<='Z')
        printf("the character is an alphabet");
    else if(a>=0 || a<=0)
        printf("the character is a digit");
    else
    printf("the character is a special character");
    */


    //to check whether character is uppercase or lowercase alphabet//
    /*char a;
    printf("enter the character:");
    scanf("%c", &a);
    if(a>='a' && a<='z')
        printf("the given character is a lowercase alphabet");
    else if(a>='A' && a<='Z')
        printf("the given character is an uppercase alpbhabet");
    else
        printf("the given character is not an alphabet");
    */

    //to input week number and print week day//
    /*int a;
    printf("enter week number:");
    scanf("%d",&a);
    if(a==1)
        printf("the week day is monday");
    else if(a==2)
        printf("the week day is tuesday");
    else if(a==3)
        printf("the week day is wednesday");
    else if(a==4)
        printf("the week day is thrusday");
    else if(a==5)
        printf("the week day is friday");
    else if(a==6)
        printf("the week day is saturday");
    else if(a==7)
        printf("the week day is sunday");
    else
        printf("wrong input");
    */

    //to input month number and print number of days in that month//
    /*int a;
    printf("enter the month number:");
    scanf("%d",&a);
    if(a==1)
        printf("the month is january and has 31 days in it");
    else if(a==2)
        printf("the month is feburary and has 28 days in it");
    else if(a==3)
        printf("the month is march and has 31 days in it");
    else if(a==4)
        printf("the month is april and has 30 days in it");
    else if(a==5)
        printf("the month is may and has 31 days in it");
    else if(a==6)
        printf("the month is june and has 30 days in it");
    else if(a==7)
        printf("the month is july and has 31 days in it");
    else if(a==8)
        printf("the month is august and has 31 days in it");
    else if(a==9)
        printf("the month is september and has 30 days in it");
    else if(a==10)
        printf("the month is october and has 31 days in it");
    else if(a==11)
        printf("the month is november and has 30 days in it");
    else if(a==12)
        printf("the month is december and has 31 days in it");
    */

    //to count total number of notes in given amount//
    /*
    int a,b,c,d,e,f,g,h,i,j,k;
    b=c=d=e=f=g=h=i=j=k=0;
    printf("enter the amount");
    scanf("%d",&a);
    if(a>=2000)
    {
        b=a/2000;
        a=a-(b*2000);

    }
    if(a>=500)
    {
        c=a/500;
        a=a-(c*500);
    }
    if(a>=200)
    {
        d=a/200;
        a=a-(d*200);
    }
    if(a>=100)
    {
        e=a/100;
        a=a-(e*100);
    }
    if(a>=50)
    {
        f=a/50;
        a=a-(f*50);
    }
    if(g>=20)
    {
        c=a/20;
        a=a-(g*20);
    }
    if(a>=10)
    {
        h=a/10;
        a=a-(h*10);
    }
    if(a>=5)
    {
        i=a/5;
        a=a-(i*5);
    }
    if(a>=2)
    {
        j=a/2;
        a=a-(j*2);
    }
    if(a>=1)
    {
        k=a/1;
        a=a-(k);
    }
    printf("\nnumber of 2000 rupee notes= %d",b);
    printf("\nnumber of 500 rupee notes= %d",c);
    printf("\nnumber of 200 rupee notes= %d",d);
    printf("\nnumber of 100 rupee notes= %d",e);
    printf("\nnumber of 50 rupee notes= %d",f);
    printf("\nnumber of 20 rupee notes= %d",g);
    printf("\nnumber of 10 rupee notes= %d",h);
    printf("\nnumber of 5 rupee notes= %d",i);
    printf("\nnumber of 2 rupee notes= %d",j);
    printf("\nnumber of 1 rupee notes= %d",k);


    //to input angles of triangle in and check whether triangle is valid or not//
    int a,b,c;
    printf("enter the first angle:");
    scanf("%d",&a);
    printf("enter the second angle:");
    scanf("%d",&b);
    printf("enter the third angle:");
    scanf("%d",&c);
    if(a+b+c==180)
        printf("the angles are vadlid to form a triangle");
    else
        printf("the angles are not valid to form a triangle");


    //to input all sides of triangle and check whether the triangle is valid or not//
    int a,b,c,a1,b1,c1;

    printf("\nEnter 3 side of the triangle  :");
    scanf("%d %d %d",&a,&b,&c);

    if ( (a+b>c) && (a+c>b) && (c+b>a) )
        {
            if(a==b && b==c && a==c)
                {
                    printf("\nTringle formed is an Equilateral triangle");
                }
            else if(a==b && b!=c)
                {
                    printf("\nTrinangle in Isoceles triangle");
                }
            else if(a!=b && b!=c && a!=c)
                {
                    printf("\n Triangle is Scalene triangle.");
                }
        }
    else
        {
            printf("\nTriangle is not valid");
        }


    //to find root of given eq..
    int a,b,c;

    printf("\nEnter coefficient of X^2  :");
    scanf("%d",&a);
    printf("\nEnter coefficient of X  :");
    scanf("%d",&b);
    printf("\nEnter the constant :");
    scanf("%d",&c);
    printf("\n1st root is  :%f",(-b+sqrt((b*b)-(4*a*c)))/2*a);
    printf("\n2nd root is  :%f",(-b-sqrt((b*b)-(4*a*c)))/2*a);


    //find profit or loss
    float i,f,p,l;
    printf("Enter the initial capital:");
    scanf("%f",&i);
    printf("\n Enter the final capital:");
    scanf("%f",&f);
    if(i<f)
        {
            printf("\n Profit:");
            p=(f-i);
            printf("%f",p);
        }
    else if(i==f)
        {
            printf("\n No Profit,No Loss.");
        }
    else
        {
            printf("\n Loss:");
            l=(i-f);
            printf("%f",l);
        }


    //input basic salary and find gross salary
    int bs,hra,da,gs;
    printf("\n Enter the basic salary of the Employee:");
    scanf(("%u",&bs));
    if(bs<=10000)
    {
        hra=(0.2*bs);
        da=(0.8*bs);
    }
    else if(bs>=10000 && bs<=20000)
    {
        hra=(0.25*bs);
        da=(0.9*bs);
    }
   else
    {
        hra=(0.3*bs);
        da=(0.95*bs);
    }
    gs=(bs+hra+da);
    printf("\n The grioss Salary of the employee is: %u",gs);

    //find electricity bill
    int a,amt;
    printf("\n Enter no. of Electricity Units consumed:");
    scanf("%d",&a);
    if(a<=50)
       amt=(a*0.5);
    else if(a>50 && a<=150)
        amt=(a*0.75);
    else if(a>50 && a<=250)
        amt=(a*1.2);
    else
        amt=(a*1.5);
    amt=(amt*0.2);
    printf("\n The total Electricity Bill is: %d",amt);

    //find the value of flag
    int flag;
    printf("\n Enter the value of tbe Flag:");
    scanf("%d",&flag);
    switch(flag)
    {
        case 1 : printf("\n HOT");
                 break;
        case 2 : printf("\n LUKE WARM");
                 break;
        case 3 : printf("\n COLD");
                 break;
        default : printf("\n OUT OF RANGE");
                  break;
    }


    //to find the state of H20
    float temp;
    printf("\n Enter the value of temp:");
    scanf("%f",&temp);
    if(temp<0)
        printf("\n ICE");
    else if(temp>=0 && temp<=100)
        printf("\n WATER");
    else
        printf("\n STEAM");


    //find colour from character
    char color;
    printf("\n Enter character in color:");
    scanf("%c",&color);
    switch(color)
    {
    case 'r'  or 'R' :print:("\n RED");
                      break;

        case 'g' or 'G' : print:("\n GREEN");
                          break;
        case 'b' or 'B' : printf("\n BLUE");
                          break;
        default : printf("\n BLACK");
                  break;
    }
    
    
    //to check whether the number is a krishnamurty or not
    int i,q,a=0,d,t,z=1; 
    printf("enter the number:"); 
    scanf("%d",&q); 
    t=q; 
    while(q>0) 
    {
        d=q%10;
        z=1; 
        for( i=1;i<=d;i++) 
        {
            z=z*i;
        } 
        a=a+z; 
        q=q/10;
    }
    if(a==t) 
        printf("krishnamurti number");
    else 
        printf("not a krishnamurti number");



    //find odd and even in a given array
    int x[100],i,n;
    printf("enter the range of array:");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        {
            printf("%d is even number\n",x[i]);
        }
        else
            printf("%d is odd number\n",x[i]);
    }


    //to find sum and avg of 10 int
    int x[10],a,b;
    printf("enter the array:");
    for(a=0;a<10;a++)
    {
        scanf("%d",&x[a]);
        b=b+x[a];
    }
    printf("the sum is %d\n",b);
    printf("the average is %d\n",b/10);



    //to find whether number entered exist and how many times
    int x[100],i,n,c=0,a;
    printf("enter the range of array:");
    scanf("%d",&n);
    printf("enter the value:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("enter the number to be searched:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(x[i]==a)
        {
            c=c+1;
        }
    }
    printf("the number of time is:%d",c);


    //to copy the elements of one array into another
    int x[100],y[100],n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        y[i]=x[i];
    }
    printf("\nthe elements of second array are:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",y[i]);
    }



    //to count number of duplicate elements in array
    int x[100],y[100],i,j,n,duplicate = 0;
    printf("enter the range:");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        y[i]=x[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]==y[j])
            {
                duplicate=duplicate+1;
                break;
            }
        }
    }
    printf("total number of duplicates: %d ",duplicate);



    //to print array in ascending order
    int x[100],i,n, minimum, temp;
    printf("enter the range:");
    scanf("%d",&n);
    printf("enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        x[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[i] > x[j] )
            {
                temp=x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(int k =0; k<n; k++)
    {
        printf("%d", x[k]);
    }


    //to print array in decending order
    int x[100],i,n, maximum, temp;
    printf("enter the range");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        x[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[i] < x[j] )
            {
                temp=x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(int k =0; k<n; k++)
    {
        printf("%d", x[k]);
    }

    //to find maximum number in an array
    int x[100],a,b,n,d=0;
    printf("enter the range of array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(a=0;a<n;a++)
    {
        scanf("%d",&x[a]);
        if(d<x[a])
        {
            d=x[a];
            printf("the maximum number is:%d",d);
        }
    }

    //to pint minimum number in an array
    int x[100],a,b,n,d;
    printf("enter the range of array:");
    scanf("%d",&n);
    printf("enter the array:");
    d=x[0];
    for(a=0;a<n;a++)
    {
        scanf("%d",&x[a]);
        if(d>x[a])
        {
            d=x[a];
            printf("the minimum number is:%d",d);
        }
    }


    //input a string and print same string
    char str[100];
    printf("enter the string:");
    gets(str);
    printf("%s",str);

    //to find length of string
    char str[100];
    int i=0,length=0;
    printf("enter the string:");
    gets(str);
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("%d",length);



    //to input a string and print its reverse
    char str[100];
    int i=0,j,length=0;
    printf("enter the string:");
    gets(str);
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("the length of string is:%d",length);
    for(j=0;j<=length;j++)
    {
        printf("the reverse of string is: %c",str[length-1-j]);
    }


    //check whether the string is a palindrome or not
    char  str[100];
    int i=0;length,j,flag=0;
    printf("enter the string:");
    gets(str);
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("the length is %d\n",length);
    for(j=0;j<length/2;j++)
    {
        if(str[j]!=str[length-1-j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("the word is a palindrome");
    else
        printf("the word is not a palindrome");



    //to check whether the string is a palindrome or not
    char str1[100],str2[100];
    int i=0,j,k,length=0,flag=0;
    printf("enter the string:");
    gets(str1);
    while(str1[i]!='\0')
    {
        length++;
        i++;
    }
    printf("the length is %d\n",length);
    for(j=0;j<=length;j++)
    {
        str2[j]=str1[j];
    }
    for(k=0;k<=length/2;k++)
    {
        if(str1[k]!=str2[length-1-k])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("the word is a palindrome");
    else
        printf("the word is not a palindrome");
        
    */
    return(0);
}
