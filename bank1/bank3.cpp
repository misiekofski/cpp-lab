#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#define ui unsigned int
#define usi unsigned short int
ui tab[20001];
ui lbanknotow, wydaj;
int main() {
    scanf("%u", &lbanknotow);
        if(lbanknotow==0)
        {
                scanf("%u", &wydaj);
                if(wydaj==0)
                    printf("0");
                else
                    printf("-1");
                return 0;
        }
        std::vector<std::pair <ui, ui> >W(lbanknotow);
    for(ui i=0; i<lbanknotow; i++)
        scanf("%u", &W[i].first);
        for(ui i=0; i<lbanknotow; i++)
        scanf("%u", &W[i].second);
        std::sort(W.rbegin(), W.rend());
    scanf("%u", &wydaj);
    for(int k=lbanknotow-2; k>=0; k--)
        if(W[k].first==W[k+1].first)
        {
            W[k].second+=W[k+1].second;
            W[k+1].first=0;
            W[k+1].second=0;
        }
    std::sort(W.rbegin(), W.rend());
    for(ui i=0; i<lbanknotow && W[i].first!=0; i++)
        if(W[i].first*W[i].second>wydaj)
            W[i].second=wydaj/W[i].first+1;
    memset(tab, 1, (wydaj+1)*sizeof(unsigned int));
    tab[0]=0;
        for(ui k=0; k<lbanknotow; k++)
    {
            for(int j=0; j<W[k].second; j++)
            for(int i=wydaj-W[k].first; i>=0; i--)
                if(tab[i]!=16843009 && tab[i+W[k].first]>tab[i])
                    tab[i+W[k].first]=tab[i]+1;
                    if(tab[wydaj]!=16843009) break;
        }
    if(tab[wydaj]==16843009)
        printf("-1");
        else
        printf("%u\n", tab[wydaj]);
}
