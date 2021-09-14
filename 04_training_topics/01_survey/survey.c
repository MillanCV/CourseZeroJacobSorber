#include <stdio.h>

int main() {
    FILE *questions = NULL, *answers = NULL;
    char answer[1024];
    int c;

    questions = fopen("questions.txt", "r");
    answers = fopen("answers.txt", "w");

    while( (c = fgetc(questions)) != EOF) {
        if ( c != '\n') {
            printf("%c", c);
        }
        else {
            printf(" ");
            scanf("%s", &answer);
            fputs(answer, answers);
            fputs("\n", answers);
        }
    }

    fclose(questions);
    fclose(answers);

    return 0;
}