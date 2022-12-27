/*

P-1-1. 合成函數(1)
令 f(x)=2x-1, g(x,y)=x+2y-3。本題要計算一個合成函數的值,例如f(g(f(1),3))=f(g(1,3))=f(4)=7。

Time limit: 1 秒

輸入格式:輸入一行,長度不超過 1000,它是一個 f 與 g 的合成函數,但所有的括弧與逗號都換成空白。輸入的整數絕對值皆不超過 1000。

輸出:輸出函數值。最後答案與運算過程不會超過正負 10 億的區間。

範例輸入:

f g f 1 3

範例輸出:

7

*/

#include <bits/stdc++.h>
int eval()
{
    int val, x, y, z;
    char token[7];
    scanf("%s", token);
    if (token[0] == 'f')
    {
        x = eval();
        return 2 * x - 1;
    }
    else if (token[0] == 'g')
    {
        x = eval();
        y = eval();
        return x + 2 * y - 3;
    }
    else
    {
        return atoi(token);
    }
}

int main()
{
    printf("%d\n", eval());
    return 0;
}
