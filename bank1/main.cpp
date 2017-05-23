#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string.h>
#define ui unsigned int
int main() {
    ui lbanknotow;
    scanf("%u", &lbanknotow);
    std::vector<unsigned int>W;
    W.resize(lbanknotow);
    for(ui i=0; i<lbanknotow; i++)
        scanf("%u", &W[i]);
    std::sort(W.begin(), W.end());
    ui wydaj;
    scanf("%u", &wydaj);
    ui tab[wydaj+1];
    memset(tab, 1, (wydaj+1)*sizeof(unsigned int));
    tab[0]=0;
    for(; W.size()>0; W.pop_back())
    {
        for(int i=wydaj-W.back(); i>0; i--)
            if(i>0)
                if(tab[i]<16843009 && tab[i+W.back()]>tab[i])
                    tab[i+W.back()]=tab[i]+1;
        tab[W.back()]=1;
                if (tab[wydaj]!=16843009) break;
    }
    if(tab[wydaj]==16843009)
    {
        printf("-1");
        return 0;
    }
    printf("%u", tab[wydaj]);
}
