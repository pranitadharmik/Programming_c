#include<stdio.h>
void main()
{
    int choice;
    printf("PRESS 1 FOR AERONAUTICAL ENGINEERING\nPRESS 2 FOR COMPUTER ENGINEERING\nPRESS 3 FOR MECHANICAL ENGINEERING\nPRESS 4 FOR CHEMICAL ENGINEERING\nPRESS 5 FOR ELECTRONICS ENGINEERING\n");
    scanf("%d",&choice);
     
      switch(choice)
      {
        case 1:
        printf("AERONAUTICAL ENGINEERING\n");
        printf("SUBJECTS\n");
        printf("AERODYNAMICS\nAIRCRAFT STRUCTURES\nMATHEMATICS\nAERONAUTICAL DESIGNING/nCOMPUTATIONAL FLUID DYNAMICS\n");
        break;

        case 2:
         printf("COMPUTER ENGINEERING\n");
        printf("SUBJECTS\n");
        printf("ARTIFICIAL INTELLIGENCE\nSOFTWARE ENGINEERING\nCYBERSECURITY\nDATA STRUCTURE/nDISCRETE MATHEMATICS");
        break;

        case 3:
         printf("MECHANICAL ENGINEERING\n");
        printf("SUBJECTS\n");
        printf("FLUID MECHANICS\nENGINEERING DRAWING \nMATERIAL SCIENCE\nAPPLIED MECHANICS/nMATHEMATICS");
        break;

        case 4:
         printf("CHEMICAL ENGINEERING\n");
        printf("SUBJECTS\n");
        printf("THERNODYNAMICS\nPHYSICS\nENVIRONMENTAL ENGINEERING\nAPPLIED CHEMISTRY\nFLUIDS MECHANICS");
        break;

        case 5:
         printf("ELECTRONICS ENGINEERING\n");
        printf("SUBJECTS\n");
        printf("DIGITAL ELECTRONICS\nTELECOMMUNICATIONS NETWORK\nCONTROL SYSTEM\nEMBEDDED SYSTEM\nANTENNA DESIGN");
        break;

        default:
        printf("INVALID INPUT");
        break;

      }
}
