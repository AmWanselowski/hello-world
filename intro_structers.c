#include<stdio.h>


struct Person{
    char name[15];
    int age;
    int grade;
};

//void Print_struct(struct Person People[]);

int main(){

    struct Person Anderson = {"Anderson",30,98};
    struct Person Lianne = {"Lianne",39,90};
    struct Person Mike = {"Mike",19,85};
    struct Person Neon = {"Neon Sam",29,84};
    
    struct Person People[] = {Anderson,Lianne,Mike,Neon};

    int max_age = 0;

//Print_struct(struct Person People[]);
    for(int i = 0; i < (sizeof(People)/sizeof(People[0])); i++){
        printf("Name: %s \t| \tAge: %d \t| \tGrade: %d \n",People[i].name,People[i].age, People[i].grade);
    }

    for(int i = 0; i < (sizeof(People)/sizeof(People[0])); i++){
        if(People[i].age > max_age)
            max_age = People[i].age;
    }

    printf("Max age: %d\n",max_age);

    return 0;
}

/*void Print_struct(struct Person People[]){
      */