/*15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible*/
#include<stdio.h>
int main()
{
	int marks,maths,phy,chem,math_phy,total;
	printf("\nEnthe marks of maths = ");
	scanf("%d",&maths);
	printf("\nEnthe marks of phy = ");
	scanf("%d",&phy);
	printf("\nEnthe marks of chem =");
	scanf("%d",&chem);	
	
	math_phy = maths + phy;
    total = maths + phy + chem;

    printf("\nTotal of Maths & Physics: %d",math_phy);
    printf("\nTotal of Maths, Physics & Chemistry: %d", total);

    if (maths >= 65 && phy >= 55 && chem >= 50)
    {
        if (math_phy >= 140 || total >= 190)
        {
            printf("\n Candidate is eligible");
		}
        else
        {
           printf("\nCandidate is not eligible");
    	}
	}
    else
    {
        printf("\nCandidate is not eligible");
	}
	return 0;
}
