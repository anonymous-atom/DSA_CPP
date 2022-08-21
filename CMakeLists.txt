cmake_minimum_required(VERSION 3.23)
project(Matrix_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(main.cpp Matrix_1 Matrix_1/matrix_lower_row.cpp Matrix_1/matrix_lower_col.cpp Matrix_1/matrix_upper_row.cpp Matrix_1/matrix_upper_col.cpp Matrix_1/symmetrix_matrix.cpp Matrix_1/tri_diagonal_tri_band.cpp Matrix_1/Teoplitz_Matrix.cpp Matrix_Polynomial/Sparse_matrix.cpp Matrix_Polynomial/Matrix_Poly.cpp Search_Algos/Bubble_Sort.cpp Search_Algos/Insertion_Sort.cpp Search_Algos/All_Sorting_Techniques.cpp Recursion/tail_recur.cpp Recursion/head_recur.cpp Recursion/Tree_recur.cpp Recursion/Indirect_recursion.cpp Recursion/Nested_recursion.cpp Recursion/sum_n.cpp Recursion/fact_Recursion.cpp Recursion/Power_R.cpp Recursion/taylor_series.cpp Recursion/fibonacci.cpp Recursion/nCr_Pascal.cpp Recursion/tower_of_hanoi.cpp)
