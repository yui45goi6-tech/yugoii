#include <stdio.h>
#include <string.h>

int main(void) {
    char password[100];
    int high = 0;   // 大文字が含まれているか
    int low = 0;    // 小文字が含まれているか

    printf("パスワードを入力してください: ");
    scanf("%s", password);

    int length = strlen(password);

    for (int i = 0; i < length; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            high = 1;
        } else if (password[i] >= 'a' && password[i] <= 'z') {
            low = 1;
        }
    }

    if (length >= 8 && high && low) {
        printf("強いパスワードです。\n");
    } else {
        printf("強いパスワードではありません。\n");

        if (length < 8) {
            printf("8文字以上にしてください。\n");
        }
        if (!high) {
            printf("大文字を含めてください。\n");
        }
        if (!low) {
            printf("小文字を含めてください。\n");
        }
    }

    return 0;
}
