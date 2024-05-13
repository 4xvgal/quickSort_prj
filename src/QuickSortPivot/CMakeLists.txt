add_library(QuickSortPivot "")
target_sources(QuickSortPivot
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/QuickSortPivot.cpp

    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/QuickSortPivot.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Test/QuickSortPivotTester.hpp
        ${CMAKE_CURRENT_LIST_DIR}/PivotMode.hpp
    )

target_include_directories(QuickSortPivot
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )

