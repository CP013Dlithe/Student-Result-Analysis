#include<stdio.h>
#include<stdlib.h>
void admin(){

}
void teacher(){

}
void student(){

}

int main(){
int choice;
while(1){
printf("WELCOME TO STUDENT RESULT ANALYSIS SYSTEM!!!!!!!!\n");
printf("MENU:\n");
printf("1.ADMIN\n2.TEACHER\n3.STUDENT\n\n");
printf("ENTER YOUR CHOICE :");
scanf("%d",&choice);
if(choice==1){
admin();

}

else if(choice==2){
teacher();

}

else if(choice==3){
student();

}
else{
printf("INVALID!!!!!!!!!!!!!!!");
exit(0);
}



}





}