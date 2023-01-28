#include<stdio.h>

#include<stdlib.h>

#include<math.h>

#include<string.h>

#include<time.h>

int main() {
  LOOP: while (1) {
    system("clear");
    printf("************************************************************************************************************************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\tHOME MENU\n");
    printf("************************************************************************************************************************************************************************************************\n");
    int gv, co, str = 0;
    printf("\n\t\t\t\t\t\t\t\t     Welcome to your simple Assistant\n");
    printf("\tHere is the list of Functions you can perform\n");
    printf("\n\tPRESS 01 FOR PERFORM MATH CULCULATION\n\tPRESS 02 TO SORT NUMBERS\n\tPRESS 03 FOR CALCULATE ASCII VALUE\n\tPRESS 04 TO GET PETTERNS\n\tPRESS 05 FOR MORE OPTIONS\n\tPRESS 0 TO EXIT THE PROGRAM");
    int a, ac;
    printf("\n\n\tPRESS A NUMBER\n");
    scanf(" %d", & a);
    if (a == 0) {
      return 0;
    } else if (a == 1) {
      goto CAL;
    } else if (a == 3) {
      goto ASCII;
    } else if (a == 2) {
      goto SORT;
    } else if (a == 5) {
      printf("\n\n\tPlease Note That Following Accesories are Still Under Construction\n\tNumber to Binary Converter\n\tSafe Password Generator\n\tPlay A Game\n\tChange Letter Case\n\n\t\tCome and Cheak soon...\nEnter 0 to Home Menu\nEnter 1 to Exit\n");
      scanf(" %d", & gv);
      if (gv == 0) {
        goto LOOP;
      } else if (gv == 1) {
        return 0;
      }
    } else if (a == 4) {
      goto PTRN;
    } /*PATTERN*/
    PTRN: {
      int qws,
      ytr;printf("\nWhich Pattern You Wish to Get\n01 HEART PATTERN\n02 HONEY COMB PATTERN\n03 STAR PATTERN\n");scanf(" %d", & qws);
      if (qws == 3) {
        int i = 30;
        for (int a = 1; a <= 12; a++) {
          for (int b = i; b >= a - 18; b--) {
            printf(" ");
          }
          for (int b = 1; b <= (2 * a - 1); b++) {
            printf("*");
          }
          printf("\n");
        }
        int c = 97;
        for (int d = 1; d <= 7; d++) {
          for (int e = 1; e <= 4 * d; e++) {
            printf(" ");
          }
          for (int f = 1; f <= c - 8 * d; f++) {
            printf("*");
          }
          printf("\n");
        }
        for (int g = 1; g <= 8; g++) {
          for (int h = 1; h <= 30 - g; h++) {
            printf(" ");
          }
          for (int j = 1; j <= 34 + g * 2 + 3; j++) {
            printf("*");
          }
          printf("\n");
        }
        for (int k = 1; k <= 9; k++) {
          for (int l = 1; l <= 22 - k; l++) {
            printf(" ");
          }
          for (int m = 1; m <= 29 - 3 * k; m++) {
            printf("*");
          }
          for (int n = 1; n <= 8 * (k - 1) + 3; n++) {
            printf(" ");
          }
          for (int o = 1; o <= 29 - 3 * k; o++) {
            printf("*");
          }
          printf("\n");
        }
        printf("\n\n\tPress 0 to Exit\n\tPress 01 for Home Menu\n");
        scanf(" %d", & ytr);
        if (ytr == 1) {
          goto LOOP;
        } else {
          return 0;
        }
      } else if (qws == 1) {
        int e, k1, s, a, b, c, d, i, c1, c2, c3;
        printf("\n\tEnter a Number to get Heart Pattern\n");
        scanf(" %d", & i);
        c1 = i;
        c2 = i;
        c3 = i;
        s = i / 2;
        int w = i;
        for (a = 1; a <= c1; a++) {
          if (c1 != 0) {
            for (int x = 1; x <= s; x++) {
              printf(" ");
            }
            s--;
            for (b = 1; b <= c2; b++) {
              printf("*");
            }
            for (c = 1; c <= c3; c++) {
              printf(" ");
            }
            for (d = 1; d <= c2; d++) {
              printf("*");
            }
            c2++;
            c2++;
            c3--;
            c3--;
            c1--;
            printf("\n");
          }
        }
        k1 = 4 * i - 3;
        e = 4 * i - 2;
        for (int l = 1; l <= e; l++) {
          for (int m = 1; m <= l; m++) {
            printf(" ");
          }
          for (int o = 1; o <= k1; o++) {
            printf("*");
          }
          k1--;
          k1--;
          printf("\n");
        }
        printf("\n\n\tPress 0 to Exit\n\tPress 01 for Home Menu\n");
        scanf(" %d", & ytr);
        if (ytr == 1) {
          goto LOOP;
        } else {
          return 0;
        }
      } else if (qws == 2) {
        {
          int v, i, q;
          printf("Enter a Number to get Honey Comb pattern: \n\n");
          scanf(" %d", & i);
          for (int x = 1; x <= i; x++) {
            q = x;
            for (int y = i; y >= x; y--) {
              printf(" ");
            }
            for (int z = 1; z <= x; z++) {
              printf("*");
            }
            for (int w = 1; w <= (2 * i - 1); w++) {
              printf("*");
            }
            for (v = 1; v <= x; v++) {
              printf("*");
            }
            printf("\n");
          }
          for (int a = 1; a <= (i - 1); a++) {
            for (int b = 0; b <= a; b++) {
              printf(" ");
            }
            for (int c = i; c >= a; c--) {
              printf("*");
            }
            for (int d = 1; d <= ((2 * i) - 2); d++) {
              printf("*");
            }
            for (int e = (i - 1); e >= a; e--) {
              printf("*");
            }
            printf("\n");
          }
          printf("\n\n\tPress 0 to Exit\n\tPress 01 for Home Menu\n");
          scanf(" %d", & ytr);
          if (ytr == 1) {
            goto LOOP;
          } else {
            return 0;
          }
        }
      }
    } /*NUMBER SORTING*/
    SORT: {
      system("clear");int am,
      ops,
      fg,
      temp;int srter[150];printf("\n\tHow many numbers would you like to sort\n");scanf(" %d", & am);printf("\n\tPRESS 0 to EXIT\n\tPRESS 01 For ASSENDING ORDER\n\tPRESS 02 for DESSENDING ORDER\n\tPRESS 03 for Home Menu\n");scanf(" %d", & ops);
      if (ops == 1) {
        printf("\n\t\tEnter the Numbers to Sort in Assending Order\n\n");
        for (int ww = 1; ww <= am; ww++) {
          scanf(" %d", & srter[ww]);
        }
        for (int ww = 1; ww <= am; ww++) {
          for (int www = 1; www <= am - ww; www++) {
            if (srter[www] > srter[www + 1]) {
              temp = srter[www];
              srter[www] = srter[www + 1];
              srter[www + 1] = temp;
            }
          }
        }
        for (int ww = 1; ww <= am; ww++) {
          printf(" %d", srter[ww]);
        }
        printf("\n\tEnter 00 to EXIT\n\tEnter 01 for RESORT\n\tEnter 02 for HOME MENU\n");
        scanf(" %d", & fg);
        if (fg == 0) {
          return 0;
        } else if (fg == 1) {
          goto SORT;
        } else if (fg == 2) {
          goto LOOP;
        }
      } else if (ops == 2) {
        printf("\n\t\tEnter the Numbers to Sort in Dessending Order\n\n");
        for (int ww = 1; ww <= am; ww++) {
          scanf(" %d", & srter[ww]);
        }
        for (int ww = 1; ww <= am; ww++) {
          for (int www = 1; www <= am - ww; www++) {
            if (srter[www] < srter[www + 1]) {
              temp = srter[www];
              srter[www] = srter[www + 1];
              srter[www + 1] = temp;
            }
          }
        }
        for (int ww = 1; ww <= am; ww++) {
          printf(" %d", srter[ww]);
        }
        printf("\n\tEnter 00 to EXIT\n\tEnter 01 for RESORT\n\tEnter 02 for HOME MENU\n");
        scanf(" %d", & fg);
        if (fg == 0) {
          return 0;
        } else if (fg == 1) {
          goto SORT;
        } else if (fg == 2) {
          goto LOOP;
        }
      } else if (ops == 3) {
        goto LOOP;
      } else {
        return 0;
      }
    } /*FUNCTION CALCULATOR*/
    FCAL: {
      system("clear");printf("\n\tFUNCTION CALCULATOR");printf("\n\n\t0 Calculate Again\n\t1 Return to main Calculator\n\t2 Return to Home\n");SUB: {
        printf("Enter the Function and Value\n\n");char fun[10];double rd,
        ci1;int s,
        vl = 0;scanf(" %s", & fun);
        for (int cm = 0; fun[cm] != '\0'; cm++) {
          vl += fun[cm];
        }
        scanf(" %lf", & ci1);rd = ci1 * (M_PI / 180);
        if (vl == 234 || vl == 330) {
          printf("\tsin(%d)=%.5lf\n", (int) ci1, sin(rd));
          scanf(" %d", & s);
          if (s == 1) {
            goto CAL;
          } else if (s == 2) {
            goto LOOP;
          } else if (s == 0) {
            goto SUB;
          } else {
            return 0;
          }
        } else if (vl == 229 || vl == 325) {
          printf("\tcos(%d)=%.5lf\n", (int) ci1, cos(rd));
          scanf(" %d", & s);
          if (s == 1) {
            goto CAL;
          } else if (s == 2) {
            goto LOOP;
          } else if (s == 0) {
            goto SUB;
          } else {
            return 0;
          }
        } else if (vl == 227 || vl == 323) {
          printf("\ttan(%d)=%.5lf\n", (int) ci1, tan(rd));
          scanf(" %d", & s);
          if (s == 1) {
            goto CAL;
          } else if (s == 2) {
            goto LOOP;
          } else if (s == 0) {
            goto SUB;
          } else {
            return 0;
          }
        } else if (vl == 301 || vl == 429) {
          printf("\tcosh(%d)=%.5lf\n", (int) ci1, cosh(rd));
          scanf(" %d", & s);
          if (s == 1) {
            goto CAL;
          } else if (s == 2) {
            goto LOOP;
          } else if (s == 0) {
            goto SUB;
          } else {
            return 0;
          }
        } else if (vl == 306 || vl == 434) {
          printf("\tsinh(%d)=%.5lf\n", (int) ci1, sinh(rd));
          scanf(" %d", & s);
          if (s == 1) {
            goto CAL;
          } else if (s == 2) {
            goto LOOP;
          } else if (s == 0) {
            goto SUB;
          } else {
            return 0;
          }
        } else if (vl == 299 || vl == 427) {
          printf("\ttanh(%d)=.5%lf\n", (int) ci1, tanh(rd));
          scanf(" %d", & s);
          if (s == 1) {
            goto CAL;
          } else if (s == 2) {
            goto LOOP;
          } else if (s == 0) {
            goto SUB;
          } else {
            return 0;
          }
        } else if (vl == 226 || vl == 322) {
          printf("\tlog(%d)=%.5lf\n", (int) ci1, log(ci1));
          scanf(" %d", & s);
          if (s == 1) {
            goto CAL;
          } else if (s == 2) {
            goto LOOP;
          } else if (s == 0) {
            goto SUB;
          } else {
            return 0;
          }
        } else {
          printf("\nAn Error Occured\n");
          scanf(" %d", & s);
          if (s == 1) {
            goto CAL;
          } else if (s == 2) {
            goto LOOP;
          } else if (s == 0) {
            goto SUB;
          } else {
            return 0;
          }
        }
      }
    } /*ASCII VALUE CALCULATOR*/
    ASCII: {
      system("clear");printf("\tEnter the Character or Characters to get ASCII Value\n");int gg;char ascii[60];ac = 0;scanf(" %s", & ascii);
      for (int cm = 0; ascii[cm] != '\0'; cm++) {
        ac += ascii[cm];
      }
      printf("ASCII Value for your input is=%d", ac);printf("\n\tPress 0 to Exit\n\tPress 1 for Input Again\n\tPress 2 for Home Menu");scanf(" %d", & gg);
      if (gg == 1) {
        goto ASCII;
      } else if (gg == 2) {
        goto LOOP;
      } else {
        return 0;
      }
    } /*CALCULATOR*/
    CAL: {
      system("clear");printf("\n\t0 Simple Calculation\n\t1 Function Calculation\n\t2 Home Menu\n\t3 Exit\n\n\t\t\t4 for Squre Root\n\t\t\t5 for Power of an integer\n\t\t\t6 Get Quatient and Reminder of a Number\n\t");scanf(" %d", & co);
      if (co == 1) {
        goto FCAL;
      } else if (co == 2) {
        goto LOOP;
      } else if (co == 3) {
        return 0;
      } else if (co == 4) {
        float sq;
        printf("\nEnter A Number to get Squre Root\n");
        scanf("%f", & sq);
        printf("Squre Root of %.2f is=%.5f\n", sq, sqrt(sq));
        goto CAL;
      } else if (co == 5) {
        float po;
        int ex;
        printf("\nEnter the Base and Exponent Respectivly\n");
        scanf(" %f%d", & po, & ex);
        printf("\n\t%.2f^%d=%.5f\n", po, ex, pow(po, ex));
        goto CAL;
      } else if (co == 6) {
        double qr, dr;
        printf("\nEnter a Number and divider respectivly to get Quatient and Reminder\n");
        scanf(" %lf%lf", & qr, & dr);
        int resultq = qr / dr;
        double resultr = qr - (resultq * dr);
        printf("\nQuatient = %d\nReminder = %.3lf\n", resultq, resultr);
        goto CAL;
      } else {
        printf("\n\tEnter a Valid Calculation");
        printf("\n\n\aNote that this calculator does not use BODMAS ORDER\nThis cal only perform Left->Right Operation\n\t0 Exit\n\t1 Calculate Again\n\t2 Home Menu\n");
        printf("\n\t\t\v Press C at the end of input and then press Enter to calculate\nEg(5+5c ENTER)\n");
        float ci, answer, fst; {
          mcl: printf("\nEnter the Calculation\n");scanf(" %f", & fst);answer = fst;int ca,
          q = 3;char co;
          for (ca = 2; ca <= 101; ca++) {
            if (ca % 2 == 1) {
              scanf(" %f", & ci);
            } else {
              scanf(" %c", & co);
            }
            if (co == 'c' || co == 'C') {
              printf("\n=  %.2f\n\n", answer);
              int pp;
              scanf(" %d", & pp);
              if (pp == 1) {
                goto mcl;
              } else if (pp == 2) {
                goto LOOP;
              } else {
                return 0;
              }
            }
            if (ca == q) {
              q += 2;
              switch (co) {
              case '+':
                answer = answer + ci;
                break;
              case '-':
                answer = answer - ci;
                break;
              case '*':
                answer = answer * ci;
                break;
              case '/':
                answer = answer / ci;
                break;
              case 'c' || 'C':
                goto LOOP;
                break;
              default:
                printf("\n\tAn Error Occured\n");
              }
            }
          }
        }
      }
    }
  }
}