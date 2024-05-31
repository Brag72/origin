cmake_minimum_required(VERSION 3.22.0)
project(Client)

add_executable(Client Client.cpp)

target_link_libraries(Client LeaverLib)

# копирование .dll в папку Client
add_custom_command(TARGET Client POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:LeaverLib>
    $<TARGET_FILE_DIR:Client>
)

# удаление файлов сборки библиотеки
add_custom_command(TARGET Client POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/LeaverLib
)