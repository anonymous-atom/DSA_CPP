cmake_minimum_required(VERSION 3.23)
project(Matrix_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(main.cpp Matrix_1 Matrix_1/matrix_lower_row.cpp Matrix_1/matrix_lower_col.cpp Matrix_1/matrix_upper_row.cpp Matrix_1/matrix_upper_col.cpp Matrix_1/symmetrix_matrix.cpp Matrix_1/tri_diagonal_tri_band.cpp Matrix_1/Teoplitz_Matrix.cpp)
