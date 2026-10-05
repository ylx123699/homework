#include<stdio.h>
struct student
{
	int id;
	float score;
};
void update_score(struct student* p, float new_score);
int main()
{
	struct student student;
	float new_score;
	scanf_s("%d %f", &student.id, &student.score);
	scanf_s("%f", &new_score);
	update_score(&student, new_score);
	printf("学号%d\n", student.id);
	printf("修改后的成绩%.2f\n", student.score);
	return 0;
}
void update_score(student* p, float new_score)
{
	p->score = new_score;
}