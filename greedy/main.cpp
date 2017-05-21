#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second < right.second;
    }
};

int main()
{
    int ile;
    scanf("%d", &ile);

    vector<pair<int, int> > wycieczki;

    for (int i=0;i<ile;i++) {

            int p,k;
            scanf("%d %d", &p, &k);
            wycieczki.push_back(make_pair(p, k));

    }

    sort(wycieczki.begin(), wycieczki.end(), sort_pred());

    int granica = -1;
    int licznik = 0;

    for (vector<pair<int, int> >::iterator it = wycieczki.begin(); it !=wycieczki.end(); it++) {
        pair<int, int> w = *it;
         if (w.first > granica) {
            granica = w.second;
            licznik++;
            fprintf (stderr, "%d - %d\n", w.first, w.second);
         }
    }

    printf("%d\n", licznik);

return 0;
}
