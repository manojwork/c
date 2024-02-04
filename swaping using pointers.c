
    #include<stdio.h>
    #include<stdlib.h> 
    void main()
    {
        int n,a;
        char *name; 
        printf("enter the no of elements :");
        scanf("%d",&n);
        name=(char*)malloc(n*sizeof(char));
        printf("enter the name : ");
        gets(name);
       printf("%s is the string",name+);
    }   