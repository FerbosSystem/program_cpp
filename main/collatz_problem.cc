#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include "../include/func.hh"
#include <TH1I.h>
#include <TCanvas.h>

int main(int argc, char *argv[])
{
    TCanvas *c = new TCanvas ("c","c",800,600);
    TH1I *h_collatz = new TH1I ("h_collatz", "h_collatz", 1e2, 0, 1e2);
    std::vector<int> v;
    unsigned int n = argc > 1 ? atoi(argv[1]) : 0;
    int count = 0;

    printf("argv[1]..%s\n", argv[1]);
    std::cout << n << std::endl;
    while (n > 1)
    {
        if (n % 2 == 0)
            case_even(&n);
        else
            case_odd(&n);

        //printf("n..%d\n", n);

	h_collatz -> Fill(n);
        v.push_back(n);
	count ++;
	if(count%1000==0) std::cout << "count: " << count << std::endl;
	if(count > 10000000) break;
    }
    printf("v.size()..%zu\n", v.size());

    c -> SetLogy();
    //c -> SetLogx();
    h_collatz -> Draw();
    c -> SaveAs("../pic/tmp.png");

    return 0;
}
