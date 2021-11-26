#include<iostream>

auto quicksort(int a[], int lewy, int prawy) -> void
{
	if(prawy<=lewy) return;
	
	int i = lewy - 1;
    int j = prawy + 1;
	int k = a[(lewy+prawy)/2];
	
	while(true)
	{
		while(k>a[++i]);

		while(k<a[--j]);

		if(i<=j)
        {
            swap(a[i],a[j]);
        }	
		else
        {
            break;
        }
	}

	if(j>lewy)
    {
        quicksort(a, lewy, j);
    }
	
	if(i<prawy)
    {
        quicksort(a, i, prawy);
    }
	
}
auto main() -> int
{
    int a[100];
    int n;

    std::cout << "Rozmiar: ";
    std::cin >> n;

    for(auto i=0;i<n;i++)
    {
        std::cout << "a[" << i << "]: ";
        std::cin >> a[i];
    }
    
    quicksort(a,0,n-1);
    
    std::cout << "\nPosortowane: \n";
    for(auto i=0;i<n;i++)
    {
        std::cout << "a[" << i << "]: " << a[i] << "\n";
    }

    return 0;
}

