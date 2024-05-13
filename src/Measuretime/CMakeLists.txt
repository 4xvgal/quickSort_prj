add_library(Measuretime "")
target_sources(Measuretime
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/measuretime.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/measuretime.hpp
    )

target_include_directories(Measuretime
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )