#include <stdio.h>
#define p printf
#define s scanf
union Marks {
    int roll_no;
    char name[100];
    float chem_marks, maths_marks, phy_marks;
};

void main() {
	int n,i;
	p("Enter the N:");
	s("%d",&n);
    union Marks marks[n];
    
    for(i=0; i<n; i++){
    	    	
		p("Student %d\n",i+1);
		p("Enter name :");
        s("%s",marks[i].name);
        p("Enter roll no. :");
        s("%d", &marks[i].roll_no);
        p("Enter Chemistry marks :");
        s("%f", &marks[i].chem_marks);
        p("Enter Maths marks :");
        s("%f", &marks[i].maths_marks);
        p("Enter Physics marks :");
        s("%f", &marks[i].phy_marks);
    }
    
	for(i=0; i<n; i++) {
		
	    p("Student %d: \n",i+1);
	    float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300*100;
	    p(" Percentage :%.f \n", percentage);
	}

}

