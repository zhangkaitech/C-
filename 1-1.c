/*某班有学生N名，每名学生信息由姓名、学号、成绩１、成绩２和成绩３组成，试编成要求：
(１）、学生信息由键盘输入
（２）求每人平均分
（３）按平均分数从高到低排序
（４）按学号查找学生信息
（　每小题写一函数，不用全局变量）*/
#include <stdio.h>
#include <stdlib.h>

// 学生信息结构体
typedef struct {
    char name[20];
    int id;
    float score1;
    float score2;
    float score3;
} Student;

// 学生信息输入函数
void input_student(Student *stu) {
    printf("name:");
    scanf("%s", stu->name);
    printf("number:");
    scanf("%d", &stu->id);
    printf("score1:");
    scanf("%f", &stu->score1);
    printf("score2:");
    scanf("%f", &stu->score2);
    printf("score3:");
    scanf("%f", &stu->score3);
}

// 学生信息输出函数
void output_student(Student stu) {
    printf("name:%s\n", stu.name);
    printf("number:%d\n", stu.id);
    printf("score1:%.2f\n", stu.score1);
    printf("score2:%.2f\n", stu.score2);
    printf("score3:%.2f\n", stu.score3);
}

// 学生信息平均分函数
float average_score(Student stu) {
    return (stu.score1 + stu.score2 + stu.score3) / 3.0;
}

// 学生信息排序函数
void sort_student(Student *stu, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (average_score(stu[i]) < average_score(stu[j])) {
                Student temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
}

// 学生信息查找函数
int find_student(Student *stu, int n, int id) {
    for (int i = 0; i < n; i++) {
        if (stu[i].id == id) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("enter the number of students:");
    scanf("%d", &n);
    Student *stu = (Student*)malloc(n * sizeof(Student));
    for (int i = 0; i < n; i++) {
        input_student(&stu[i]);
    }
    printf("here is the student information:\n");
    for (int i = 0; i < n; i++) {
        output_student(stu[i]);
    }
    sort_student(stu, n);
    printf("ranged by average score:\n");
    for (int i = 0; i < n; i++) {
        output_student(stu[i]);
    }
    int id;
    printf("enter the student number to find:");
    scanf("%d", &id);
    int index = find_student(stu, n, id);
    if (index == -1) {
        printf("student not found.\n");
    }
    else {
        printf("here is the student information of student :\n");
        output_student(stu[index]);
    }
    free(stu);
    return 0;
}