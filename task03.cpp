#include <iostream>

int main()
{
    int m, n;
    std::cout << " m = "; std::cin >> m;
    std::cout << " n = "; std::cin >> n;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}
