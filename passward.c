#include <stdio.h>
#include <ctype.h>   
#include <string.h>  

int main() {
    char str[100];
    int i;
    int has_upper = 0, has_lower = 0;

    // ユーザーからパスワードを入力してもらう
    printf("パスワードを入力してください: ");
    scanf("%s", str);

    // パスワードの長さを取得
    int length = strlen(str);

    // 8文字以上かどうかの確認
    if (length < 8) {
        printf("パスワードは8文字以上にしてください。\n");
    }

    // 大文字と小文字の確認
    for (i = 0; i < length; i++) {
        if (isupper(str[i])) {
            has_upper = 1;  // 大文字が含まれている場合
        }
        if (islower(str[i])) {
            has_lower = 1;  // 小文字が含まれている場合
        }
    }

    // 条件を満たしているか確認して結果を表示
    if (length >= 8 && has_upper && has_lower) {
        printf("強いパスワードです。\n");
    } else {
        if (length < 8) {
            printf("パスワードは8文字以上にしてください。\n");
        }
        if (!has_upper) {
            printf("大文字が含まれていません。大文字を含めてください。\n");
        }
        if (!has_lower) {
            printf("小文字が含まれていません。小文字を含めてください。\n");
        }
    }

    return 0;
}
