引入 <stdio.h>

整形 主函数()
{
    // 初始化数据
    整形 i = 10;
    整形 j = 20;
    整形 a[10] = {0,};

    浮点型 money = 200.50;

    字符 name[256] = "艾伦";

    // 打印类容
    若 (i >= j)
    {
        打印("hello world");
    }

    // 初始化数组
    循环(i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    // 遍历数组
    循环(i = 0; i < 10; i++)
    {
        打印("%d", a[i]);
    }

    返回 0;
}

主函数 