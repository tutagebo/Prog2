#include <iostream>

int prog11_5() {
    struct GoodsData {
        char name[256];
        int price;
    };
    GoodsData goods, *pgoods;
    pgoods = &goods;
    strcpy_s(pgoods->name, "�����������{�[");
    pgoods->price = 138;
    int rPrice = pgoods->price * 1.1;
    printf("�i��: %s\n�̔����i: %d", pgoods->name, rPrice);
    return 0;
}
