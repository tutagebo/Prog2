#include <iostream>

int prog10_11() {
    struct GoodsData {
        char name[50];
        int listPrice;
        double dis;
        int price;
    };
    GoodsData goods1 = { "ƒ„ƒ“ƒ„ƒ“‚Â‚¯ƒ{[",180,0.8,0 }, t;
    GoodsData goods2 = { "‚Ë‚é‚Ë‚é‚Ë‚é‚Ë",153,0.9,0 };

    goods1.price = goods1.listPrice * (1 - goods1.dis);
    goods2.price = goods2.listPrice * (1 - goods2.dis);

    if (goods1.price > goods2.price) {
        t = goods1;
        goods1 = goods2;
        goods2 = t;
    }

    printf("%s\n%s", goods1.name, goods2.name);
    return 0;
}
