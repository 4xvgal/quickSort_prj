add_executable(main main.cpp)

add_subdirectory(Measuretime)
add_subdirectory(RealRandom)
add_subdirectory(QuickSortPivot)

target_link_libraries(main
    Measuretime
    RealRandom
    QuickSort
    QuickSortPivot
)
