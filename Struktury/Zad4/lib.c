#include<stdio.h>
struct point {
    int x;
    int y;
};

struct rect {
    struct point ll; /* lower left */
    struct point ur; /* upper right */
};

struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
};

struct rect makerect(struct point ll, struct point ur)
{
    struct rect temp;
    temp.ll = ll;
    temp.ur = ur;
    return temp;
};

/* ptinrect: zwr� je.li p nale�y do r, 0 je.li nie nale�y */
int ptinrect(struct point p, struct rect r)
{
    return p.x >= r.ll.x && p.x < r.ur.x && p.y >= r.ll.y && p.y < 
r.ur.y;
}

int rectinrect(struct rect r1, struct rect r2)
{
    return ptinrect(r1.ll, r2) && ptinrect(r1.ur, r2);
};


/* disjointrect: zwr� je.li r1 jest roz�.czny z r2,
0 . w przeciwnym przypadku */
int disjointrect(struct rect r1, struct rect r2)
{
    return !(ptinrect(r2.ll, r1)) && !(ptinrect(r2.ur, r1))
&& !(ptinrect(r1.ll, r2)) && !(ptinrect(r1.ur, r2));
};

int cz_ws_ll(struct rect r1, struct rect r2)
{
    int cw, pole;

    if (r1.ur.y > r2.ur.y && r1.ur.x > r2.ur.x) {
cw = (r2.ur.x - r1.ll.x) * (r2.ur.y - r1.ll.y);
    } else if (r1.ur.y <= r2.ur.y && r1.ur.x > r2.ur.x) {
cw = (r2.ur.x - r1.ll.x) * (r1.ur.y - r1.ll.y);
    } else if (r1.ur.y > r2.ur.y && r2.ur.x <= r2.ur.x) {
cw = (r1.ur.x - r1.ll.x) * (r2.ur.y - r1.ll.y);
    };

    pole =
((r2.ur.x - r2.ll.x) * (r2.ur.y - r2.ll.y)) +
((r1.ur.x - r1.ll.x) * (r1.ur.y - r1.ll.y)) - cw;

    return pole;
};

int cz_ws_ur(struct rect r1, struct rect r2)
{
    int cw, pole;
    if (r1.ll.y < r2.ll.y && r1.ll.x < r2.ll.x) {
cw = (r1.ur.x - r2.ll.x) * (r1.ur.y - r2.ll.y);
    } else if (r1.ll.y >= r2.ll.x && r1.ll.x < r2.ll.x) {
cw = (r1.ur.x - r2.ll.x) * (r1.ur.y - r1.ll.y);
    } else if (r1.ll.y < r2.ll.y && r1.ll.x >= r2.ll.x) {
cw = (r1.ur.x - r1.ll.x) * (r2.ll.y - r1.ll.y);
    };

    pole =
((r2.ur.x - r2.ll.x) * (r2.ur.y - r2.ll.y)) +
((r1.ur.x - r1.ll.x) * (r1.ur.y - r1.ll.y)) - cw;

    return pole;
};

int area(struct rect r1, struct rect r2)
{
    int pp;

    /* r1 zawiera sie w r2 lub r2 w r1 */

    if (rectinrect(r1, r2)) {
pp = (r2.ur.x - r2.ll.x) * (r2.ur.y - r2.ll.y);
    } else if (rectinrect(r2, r1)) {
pp = (r1.ur.x - r1.ll.x) * (r1.ur.y - r1.ll.y);
    }

    /* r1 i r2 sa rozlaczne */

    else if (disjointrect(r1, r2)) {
pp = ((r2.ur.x - r2.ll.x) * (r2.ur.y - r2.ll.y)) +
((r1.ur.x - r1.ll.x) * (r1.ur.y - r1.ll.y));
    }

    /* r1 i r2 maja czesc wspolna */

    else {

if (ptinrect(r1.ll, r2)) {
pp = cz_ws_ll(r1, r2);
} else if (ptinrect(r1.ur, r2)) {
pp = cz_ws_ur(r1, r2);
} else if (ptinrect(r2.ll, r1)) {
pp = cz_ws_ll(r2, r1);
} else if (ptinrect(r2.ur, r1)) {
pp = cz_ws_ur(r2, r1);
};

    };

    return pp;
};

void scanrect(char *prompt, struct rect *r)
{
    printf(prompt);
    printf("\nll.x: ");
    scanf("%i", &((*r).ll.x));
    printf("ll.y: ");
    scanf("%i", &((*r).ll.y));
    printf("ur.x: ");
    scanf("%i", &((*r).ur.x));
    printf("ur.y: ");
    scanf("%i", &((*r).ur.y));
};
