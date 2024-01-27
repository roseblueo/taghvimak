#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kabise(int year){
    int k;
    k=year%33;
    if (k==1 || k==5 || k==9 || k==13 || k==17 || k==22 || k==26 || k==30){
        return 1;
    }
}
void Calendar()
{
    int year, month , i , j;
    printf("\033[0;36m*************calendar menu***********\n");
    puts("\033[0;37m[0] Back to mian menu!");
    puts("{!} year is between 1206 and 1498");
    puts("{!} month is between 1 and 12");
    printf("\033[0;36m-------------------------------------\n");
    printf("\033[0;37mplease enter Year = ");
    scanf("%d", &year);
    if (year == 0) {
        system("cls");
        puts("\033[1;31mBack to main menu!\n\033[0;37m");
        system("pause");
        system("cls");
        return ;
    } 
       else if(year<1206 || year>1498){
        system("cls");
        printf("\033[1;31mInvalid input!\n\n\033[0;37m");
        system("pause");
        system("cls");
        return;
    }
    printf("please enter month = ");
    scanf("%d", &month);
    if (month == 0) {
    system("cls");
    puts("\033[1;31mBack to main menu!\n\033[0;37m");
    system("pause");
    system("cls");
    return ;
    } 
    else if(month<1 || month>12){
    system("cls");
    printf("\033[1;31mInvalid input!\n\n\033[0;37m");
    system("pause") ;
    system("cls");
    return;
}  
int a[]={0,31,31,31,31,31,31,30,30,30,30,30,29};
int la[]={0,31,31,31,31,31,31,30,30,30,30,30,30};
int sum=0;
for(int y=1206 ; y<year ; y++){
    sum+=kabise(year) ? 366 :365;
    }
    for (int i=0 ; i<month ; i++){
        if (month==1 || month==2 || month==3 || month==4 || month==5 || month==6){
            sum+=31;
        }
        if (month==7 || month ==8 || month==9 || month==10 || month==11){
            sum+=30;
        }
        if (month==12){
            sum+=kabise(year) ? 30 :29;
        }
    }
system("cls");   
int week = sum % 7;
printf("%d", year);
if (month < 10)
    printf(" ");
printf(" %d\n", month);
if (month==1){
    printf("       Farvardin    ");
}
if (month==2){
    printf("      Ordibehesht   ");
}
if (month==3){
    printf("       Khordad    ");
}
if (month==4){
    printf("          Tir        ");
}
if (month==5){
    printf("        Mordad      ");
}
if (month==6){
    printf("       Shahrivar    ");
}
if (month==7){
    printf("         Mehr    ");
}
if (month==8){
    printf("         Aban    ");
} 
if (month==9){
    printf("          Azar    ");
}
if (month==10){
    printf("          Dey    ");
}
if (month==11){
    printf("        Bahman    ");
}
if (month==12){
    printf("         Esfand   ");
}
printf("\033[0;34m\n-----------------------\n\033[0;37m");
printf("Sa Su Mo Tu We Th Fr\n");
printf("\033[0;34m-----------------------\n\033[0;37m");

if (kabise(year)) {
    for (j = 0; j < week; j++)
    {
        printf("   ");
    }
    for (i = 1; i <= la[month]; i++)
    {
        if ((week + i - 1) % 7 == 0)
        {
            printf("\n");
        }
        if (i < 10)
        {
            printf(" ");
        }
        printf("%d", i);
        printf(" ");
    }
}
else {
    for (j = 0; j < week; j++)
    {
        printf("   ");
    }

    for (i = 1; i <= a[month]; i++)
    {
        if ((week + i - 1) % 7 == 0)
        {
            printf("\n");
        }
        if (i < 10)
        {
            printf(" ");
        }
        printf("%d", i);
        printf(" ");
    }

}
printf("\n");
printf("\033[0;34m-----------------------\n\033[0;37m");
 system("pause");
   system("cls");
}
void Age ()
{
    printf("\033[0;32m*************Age menu*************\n");
    puts("\033[0;37m[0] Back to main menu!");
    puts("{!} Birth year is between 1206 and 1402");
    puts("{!} Birth month is between 1 and 12");
    puts("{!} Birth day is between 1 and 31");
    printf("\033[0;32m----------------------------------\n\033[0;37m");
      
   int year1, year2, f_year,month1, month2, day1, day2, f_month, f_day, K, sum, t_K; //  یک سالیه که از ما میگیره و دو مریوط به سالیه که باید محاسبه کنه
    printf("this year \033[0;33m=\033[0;37m ");
    scanf("%d", &year1);
     if (year1==0){
     system("cls");
     puts("\033[1;31mBack to main menu!\033[0;37m");
     return;
     }
     else if(year1 <1206 || year1 >1498){
      system("cls");
      printf("\033[1;31mInvalid input!\n\n\033[0;37m");
      system("pause");
      system("cls");
      return;
     }  
     printf("this month \033[0;33m=\033[0;37m ");
     scanf("%d", &month1);
      if (month1==0){
      system("cls");
      puts("Back to main menu");
      return ;
     }
     else if(month1 <1 || month1 >12){
      system("cls");
      printf("\033[1;31mInvalid input!\n\n\033[0;37m");
      system("pause") ;
      system("cls");
      return;
     }  
     printf("today\033[0;33m =\033[0;37m ");
     scanf("%d", &day1);
      if (day1 ==0 ){
      system ("cls");
      puts("Back to main menu");
      return ;
     }
      else if (day1<1 || day1>31){
      system("cls");
      printf("\033[1;31mInvalid input!\n\n\033[0;37m");
      system("pause");
      system("cls");
      return;
     }
     printf("\033[0;32m---------------------------------\n\033[0;37m");

  printf("Born year \033[0;33m= \033[0;37m");
  scanf("%d", &year2);
  if (year2==0){
     system("cls");
     puts("Back to main menu!");
     return;
     }
     else if(year2 <1206 || year2 >1402){
      system("cls");
      printf("\033[1;31mInvalid input!\n\n\033[0;37m");
      system("pause");
      system("cls");
      return;
     }  
  printf("Born month \033[0;33m=\033[0;37m ");
  scanf("%d", &month2);
    if (month2==0){
      system("cls");
      puts("Back to main menu");
      return ;
     }
     else if(month2 <1 || month2 >12){
      system("cls");
      printf("\033[1;31mInvalid input!\n\n\033[0;37m");
      system("pause") ;
      system("cls");
     }  
  printf("Born day \033[0;33m= \033[0;37m");
  scanf("%d", &day2);
    if (day2 ==0 ){
      system ("cls");
      puts("Back to main menu");
      return ;
     }
      else if (day2<1 || day2>31){
      system("cls");
      printf("\033[1;31mInvalid input!\n\n\033[0;37m");
      system("pause");
      system("cls");

     }
  system("cls");

  if(day1 >= day2){
    f_day = day1-day2;
    printf(" day \033[0;35m= \033[0;37m%d\n", f_day);
    if(month1 >= month2){
        f_month = month1 - month2;
        f_year = year1 - year2;
        printf(" month \033[0;35m=\033[0;37m %d\n", f_month);
        printf(" year \033[0;35m=\033[0;37m %d\n", f_year);
      }
      else if(month2 > month1){
       month1 += 12;
       year1 -= 1;
       f_year = year1 - year2;
       f_month = month1 - month2;
       printf(" month \033[0;35m=\033[0;37m %d\n",f_month);
       printf(" year \033[0;35m=\033[0;37m %d\n", f_year);
      }
  }
   else if(day2 > day1) {
    if(month1 == 1 || month1 ==2 || month1 == 3 || month1 ==4 || month1 ==5 || month1 ==6 ){
      day1 += 31;
      month1 -= 1;
      f_day = day1 - day2;
      printf(" day \033[0;35m= \033[0;37m%d\n", f_day);
      if(month1 >= month2){
        f_month = month1 - month2;
        f_year = year1 - year2;
        printf(" month \033[0;35m= \033[0;37m%d\n", f_month);
        printf(" year \033[0;35m=\033[0;37m %d\n", f_year);
      }
      else if(month2 > month1){
       month1 += 12;
       year1 -= 1;
       f_year = year1 - year2;
       f_month = month1 - month2;
       printf(" month \033[0;35m=\033[0;37m %d\n",f_month);
       printf(" year\033[0;35m =\033[0;37m %d\n", f_year);
      }
      }
    else if (month1 == 7 || month1 ==8 || month1 == 9 || month1 ==10 || month1 ==11 ) {
      day1 += 30;
      month1 -= 1;
      f_day = day1 - day2;
      printf(" day \033[0;35m= \033[0;37m%d\n", f_day);
      if(month1 >= month2){
        f_month = month1 - month2;
        f_year = year1 - year2;
        printf(" month \033[0;35m=\033[0;37m %d\n", f_month);
        printf(" year \033[0;35m=\033[0;37m %d\n", f_year);
      }
      else if(month2 > month1){
      month1 += 12;
      year1 -= 1;
      f_month=month1 - month2;
      f_year = year1 - year2;
      printf(" month \033[0;35m= \033[0;37m%d\n",f_month);
      printf(" year \033[0;35m= \033[0;37m%d\n", f_year);
      }
    }  
    else if(month1 == 12){
      K = year1 % 33;
     if(K==1 || K==5 || K==9 || K==13 || K==17 || K==22 || K==26 || K==30){
        day1 +=30;
        month1 -= 1;
        f_day = day1 - day2;
      printf(" day \033[0;35m= \033[0;37m%d\n", f_day);
      if(month1 >= month2){
        f_month = month1 - month2;
        f_year = year1 - year2;
        printf(" month \033[0;35m=\033[0;37m %d\n", f_month);
        printf(" year \033[0;35m= \033[0;37m%d\n", f_year);
      }
      else if(month2 > month1){
      month1 += 12;
      year1 -= 1;
      f_month=month1 - month2;
      f_year = year1 - year2;
      printf(" month \033[0;35m=\033[0;37m %d\n",f_month);
      printf(" year \033[0;35m= \033[0;37m%d\n", f_year);
      }
     }
     else{
      day1 +=29;
      month1 -= 1;
        f_day = day1 - day2;
      printf(" day = %d\n", f_day);
      if(month1 >= month2){
        f_month = month1 - month2;
        f_year = year1 - year2;
        printf(" month \033[0;35m= \033[0;37m%d\n", f_month);
        printf(" year\033[0;35m =\033[0;37m %d\n", f_year);
      }
      else if(month2 > month1){
      month1 += 12;
      year1 -= 1;
      f_year = year1 - year2;
      f_month=month1 - month2;
      printf(" month \033[0;35m=\033[0;37m %d\n",f_month);
      printf(" year \033[0;35m=\033[0;37m %d\n", f_year);
      }}}}
     f_year *= 365;
     f_month *= 31;
     sum = f_year + f_month + f_day ;
     K = year1 % 33;
     int y2=year2;
     int d2=day2;
     year1 /= 4;
     year2 /= 4;
     t_K = year1 - year2;
       printf(" Number of days passed since your birth \033[0;35m= \033[0;37m%d\n", sum + t_K - 2);
       name_day_birth(y2, month2, day2);
       system("pause"); 
       system("cls");
}
int name_day_birth(int y2 , int month2 , int d2){
    int days=0;
    for (int i=1206 ; i < y2 ; i++){
        days+=kabise(i) ? 366 :365;
    }
    for (int m=1 ; m< month2 ; m++){
         if (month2 ==1 || month2 ==2 || month2 ==3 || month2 ==4 || month2 ==5 || month2 ==6){
            days+=31;
        }
        if (month2 == 7 || month2 ==8 || month2 ==9 || month2 ==10 || month2 ==11){
            days+=30;
        }
        if (month2 == 12){
            days+=kabise(y2) ? 30 :29;
        }
    }
    days += d2;
    if (kabise(y2) && month2<12){
        days-=1;
    }

    int daypassed = days-130;
    int dayofweek =(daypassed %7 +6)%7;
 switch(dayofweek){
        case 0:
        printf(" you were born on \033[0;35mFriday\n\n\033[0;37m");
        break;
        case 1:
        printf(" you were born on \033[0;35mThursday\n\n\033[0;37m");
        break;
        case 2:
        printf(" you were born on \033[0;35mSaturday\n\n\033[0;37m");
        break;
        case 3:
        printf(" you were born on \033[0;35mSunday\n\n\033[0;37m");
        break;
        case 4:
        printf(" you were born on \033[0;35mMonday\n\n\033[0;37m");
        break;
        case 5:
        printf(" you were born on \033[0;35mTuesday\n\n\033[0;37m");
        break;
        case 6:
        printf(" you were born on \033[0;35mWednesday\n\n\033[0;37m");
        break;
    }
}
void sr_ad()
{
    int y_sh, m_sh, d_sh, tedad, m, kharej, y_mi, m_mi, r;
    printf("Solar year = ");
    scanf("%d", &y_sh);
     if(y_sh==0){
        system("cls");
        puts("\033[1;31mBack to main menu!\n\033[0;37m");
         system("pause"); 
          system("cls");
          Conversion();
          return;
        }
        else  if (y_sh<1206 || y_sh>1498){
          system("cls");
          printf("\033[1;31mInvalid input!\n\n\033[0;37m"); 
          system("pause"); 
          system("cls");
          Conversion(); 
          return;
        }
    printf("Solar month = ");
    scanf("%d", &m_sh);
    if(m_sh==0){
       system("cls");
        puts("\033[1;31mBack to main menu!\n\033[0;37m");
         system("pause"); 
          system("cls");
          Conversion();
          return;
        }
        else if(m_sh<1 || m_sh>12){
          system("cls");
          printf("\033[1;31mInvalid input!\n\n\033[0;37m");
          system("pause");
          system("cls");
          Conversion(); 
          return;
        }
    printf("Solar day = ");
    scanf("%d", &d_sh);
     if(d_sh==0){
         system("cls");
        puts("\033[1;31mBack to main menu!\n\033[0;37m");
         system("pause"); 
          system("cls");
          Conversion();
          return;
        }
        else if (d_sh<1 || d_sh>31) {
          system("cls");
          printf("\033[1;31mInvalid input!\n\n\033[0;37m");
          system("pause");
          system("cls");
          Conversion(); 
          return;
        }
      system ("cls");
    int a, b, c, d, e, f, g, h, i, j, k, l, Ka, sum;
    if (m_sh == 1 || m_sh == 2 || m_sh == 3 || m_sh == 4 || m_sh == 5 || m_sh == 6)
    {
        m = 31;
    }
    if (m_sh == 7 || m_sh == 8 || m_sh == 9 || m_sh == 10 || m_sh == 11)
    {
        m = 30;
    }
    Ka = y_sh % 33;
    if (m_sh == 12)
    {
        if (Ka == 1 || Ka == 5 || Ka == 9 || Ka == 13 || Ka == 17 || Ka == 22 || Ka == 26 || Ka == 30)
        {
            m = 30;
        }
        else
        {
            m = 29;
        }
    }
    kharej = y_sh / 4;
    tedad = ((y_sh - 1) * 365) + ((m_sh - 1) * m) + d_sh + kharej;
    tedad += 226899;
    // سال میلادی = شمسی + 622 یا 621
    if (m_sh < 12 || m_sh > 10)
    {
        sum = 622;
    }
    else if (m_sh >= 1 || m_sh < 10)
    {
        sum = 621;
    }
    y_mi = y_sh + sum;
    tedad -= (y_mi / 4);
    y_mi = (tedad / 365) + 1;
    printf("Georgian year = %d\n", y_mi);
    r = tedad % 365 + 1;

    if (r == 1)
    {
        printf("Georgian month = 1");
    }
    else if (r > 31)
    {
        a = r - 31;
        if (a > 31)
        {
            b = a - m;
        }
        else if (a < 31)
        {
            m_mi = 2;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", a);
        }
        if (b > m)
        {
            c = b - 31;
        }
        else if (b < m)
        {
            m_mi = 3;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", b);
        }
        if (c > 31)
        {
            d = c - 30;
        }
        else if (c < 31)
        {
            m_mi = 4;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", c);
        }
        if (d > 30)
        {
            e = d - 30;
        }
        else if (d < 30)
        {
            m_mi = 5;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", d);
        }
        if (e > 31)
        {
            f = e - 31;
        }
        else if (e < 31)
        {
            m_mi = 6;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", e);
        }
        if (f > 30)
        {
            g = f - 30;
        }
        else if (f < 30)
        {
            m_mi = 7;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", f);
        }
        if (g > 31)
        {
            h = g - 31;
        }
        else if (g < 31)
        {
            m_mi = 8;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", g);
        }
        if (h > 31)
        {
            i = h - 31;
        }
        else if (h < 31)
        {
            m_mi = 9;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", h);
        }
        if (i > 30)
        {
            j = i - 30;
        }
        else if (i < 30)
        {
            m_mi = 10;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", i);
            return;
        }
        if (j > 31)
        {
            k = j - 31;
        }
        else if (j < 31)
        {
            m_mi = 11;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", j);
        }
        if (k > 30)
        {
            l = k - 30;
        }
        else if (k < 30)
        {
            m_mi = 12;
            printf("Georgian month = %d\n", m_mi);
            printf("Georgian day = %d\n", k);
        }
    }
    else if (r <= 31)
    {
        m_mi = 2;
        printf("Georgian month = %d\n", m_mi);
    }
      system("pause");
      system("cls");
      Conversion();
        }
void sr_lu()
{
    int y_sh, m_sh, m, d_sh,day4 = 0/*سال*/, day5 /*ماه*/, Ka;
    printf("tsolar year = ");
    scanf("%d", &y_sh);
    if(y_sh==0){
        system("cls");
        puts("\033[1;31mBack to main menu!\n\033[0;37m");
         system("pause"); 
          system("cls");
          Conversion();
          return;
        }
        else  if (y_sh<1206 || y_sh>1498){
          system("cls");
          printf("\033[1;31mInvalid input!\n\n\033[0;37m"); 
          system("pause"); 
          system("cls");
          Conversion(); 
          return;
        }
    printf("solar month = ");
    scanf("%d", &m_sh);
     if(m_sh==0){
        system("cls");
        puts("\033[1;31mBack to main menu!\n\033[0;37m");
         system("pause"); 
          system("cls");
          Conversion();
          return;
        }
        else if(m_sh<1 || m_sh>12){
          system("cls");
          printf("\033[1;31mInvalid input!\n\n\033[0;37m");
          system("pause");
          system("cls");
          Conversion(); 
          return;
        }
    printf("solar day = ");
    scanf("%d", &d_sh);
    if(d_sh==0){
        system("cls");
        puts("\033[1;31mBack to main menu!\n\033[0;37m");
         system("pause"); 
          system("cls");
          Conversion();
          return;
        }
        else if (d_sh<1 || d_sh>31) {
          system("cls");
          printf("\033[1;31mInvalid input!\n\n\033[0;37m");
          system("pause");
          system("cls");
          Conversion(); 
          return;
        }
        system("cls");

     if (m_sh == 1 || m_sh== 2 || m_sh == 3 || m_sh == 4 || m_sh == 5 || m_sh == 6)
    {
        m = 31;
    }
    if (m_sh == 7 || m_sh == 8 || m_sh == 9 || m_sh == 10 || m_sh == 11)
    {
        m = 30;
    }
    Ka = y_sh % 33;
    if (m_sh == 12)
    {
        if (Ka == 1 || Ka == 5 || Ka == 9 || Ka == 13 || Ka == 17 || Ka == 22 || Ka == 26 || Ka == 30)
        {
            m = 30;
        }
        else
        {
            m = 29;
        }
    }
day4 += floor (y_sh * 365 + m_sh * m + d_sh + 10.875 * y_sh);
day5 = day4;
day4 /= 365;
day5 %= 365;
day5 /= m; 
printf("ga year=%d\n", day4 +1);
printf("ga month=%d\n", day5 -1);
      system("pause");
      system("cls");
      Conversion();
}      
void Conversion()
{
    int ch;
     printf("\033[0;33m*************Conversion menu***********\n");
     puts("\033[0;37m[0] Back to main menu!");
     puts("[1] Solar to Georgian");
     puts("[2] Solar to Lunar");
     printf("\033[0;33m--------------------------------------\n\033[0;37m");
     printf("select option:");
     scanf("%d", &ch);
      if (ch == 0){
         system("cls");
         puts("\033[1;31mBack to main menu!\n\033[0;37m");
          system("pause"); 
          system("cls");
          return;
        }
    else if(ch == 1){
        system("cls");
        printf("\033[0;34m________solar to ad________\n");
        puts("\033[0;37m[0] Back to menu");
        puts("{!} year is between 1206 and 1498");
        puts("{!} month is between 1 and 12");
        puts("{!} day is between 1 and 31");
        puts("\033[0;34m------------------------------\033[0;37m");
        sr_ad();
        }
    else if(ch == 2){
        system("cls");
        printf("\033[0;34m________solar to lunar________\n");
        puts("\033[0;37m[0] Back to menu");
        puts("{!} Birth year is between 1206 and 1498");
        puts("{!} Birth month is between 1 and 12");
        puts("{!} Birth day is between 1 and 31");
        puts("\033[0;34m---------------------------------\033[0;37m");
       sr_lu();
        }     
}   
int main(){

  system("cls");
  int number;
    while (1)
    {
        printf("\033[0;35m__________________________MENU__________________________\n");
        puts("\033[0;37m[0] Quit");
        puts("[1] Calendar");
        puts("[2] Age ");
        puts("[3] Conversion");
        printf("\033[0;35m--------------------------------------------------------\n");
        printf("\033[0;37mSelect Option : ");
        scanf("%d", &number);

        switch (number)
        {
        case 1:
            system("cls");
            Calendar();
            break;
        case 2:
            system("cls");
            Age();
            break;
        case 3:
            system("cls");
            Conversion();
            break;
        case 0:
            system("cls");
            printf("\033[0;32mBye!\n\033[0;37m");
            return 0;
        default:
            system("cls");
            printf("\033[1;31mInvalid input ! \n\033[0;37mretunrning to main menu.\n");
            system("pause");
            system("cls");
            break;
        }
    }
}