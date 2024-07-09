#include <iostream>
#define N 10

struct GoodsData {
    char name[256];
    int price;
};

typedef GoodsData Goods_t;

int prog12_7(){
    Goods_t goods[N] = {
        {"NEGI",99},
        {"TOMATO",68},
        {"NASU",72},
        {"KYUURI",39},
        {"KYABETU",158},
        {"JAGAIMO",29},
        {"NINJIN",48},
        {"SHISO",37},
        {"TAMANEGI",74},
        {"PI-MAN",54}
    }, *min, *max;
    min = &goods[0];
    max = &goods[0];
    for (int i = 0; i < N; i++) {
        if (min->price > goods[i].price) {
            min = &goods[i];
        }else if (max->price < goods[i].price) {
            max = &goods[i];
        }
    }
    printf("MAX: %s %d‰~\nMIN: %s %d‰~", max->name, max->price, min->name, min->price);
    return 0;
}
