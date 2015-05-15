
#include <vector>
#include <memory>
#include <iostream>
void buildHeap( std::vector<int> & array );
void heapify( std::vector<int>& array, int idx, int max );
void show(std::vector<int>& array)
{
    for(std::vector<int>::iterator it = array.begin(); it != array.end(); ++it ){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void sort( std::vector<int>& array )
{
    show(array);
    buildHeap( array );
    int i = array.size() -1 ;
    for( ; i > 1; --i ){
        std::swap( array[0], array[i] );
        heapify( array, 0, i );
    }
}

void buildHeap( std::vector<int> & array )
{
    int i = array.size() / 2 - 1;
    for( ; i > 0; --i ){
        heapify( array, i, array.size() );
        std::cout << "heapify " << std::endl;
        show(array);
    }
}

void heapify( std::vector<int>& array, int idx, int max )
{
    int left = 2*idx+1;
    int right = 2*idx+2;
    int largest = -1;

    if( (left < max ) && array[left] > array[idx] ){
        largest = left;
    }
    else{
        largest = idx;
    }

    if( (right < max) && (array[right] > array[largest]) ){
        largest = right;
    }

    if( largest != idx ){
        std::swap( array[idx], array[largest]);
        heapify( array, largest, max );
    }
}

int main()
{
    int myints[] = {1, 2, 3, 4 ,5 ,6,7,8,9,10,11,12,13,14,15,16};
    std::vector<int> array( myints, myints+sizeof(myints)/sizeof(int));
    sort(array);
    show(array);
    return 0;
}
