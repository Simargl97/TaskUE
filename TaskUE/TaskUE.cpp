#include <iostream>
#include <ctime>

int main() {
    const int N = 5; 
    int array[N][N];
    
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
            array[i][j] = i + j;
    
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j)
            std::cout << array[i][j] << " ";
        std::cout << std::endl;
    }
    
    std::time_t t = std::time(0);
    std::tm now;
    localtime_s(&now, &t);

    int current_day = now.tm_mday;
    
    int row_index = current_day % N;
    int sum = 0;
    for(int j = 0; j < N; ++j)
        sum += array[row_index][j];

    std::cout << "Sum of elements in row " << row_index << ": " << sum << std::endl;
  
    return 0;
}