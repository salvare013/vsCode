# 设置cmake版本要求
cmake_minimum_required(VERSION 3.22...3.30 FATAL_ERROR)
# 设置项目名
get_filename_component(PROJECT_NAME ${CMAKE_SOURCE_DIR} NAME)
project(${PROJECT_NAME} C)
# C标准
set(CMAKE_C_STANDARD 11)
# 头文件查找路径
include_directories (${PROJECT_SOURCE_DIR}/inc)
# 可执行文件生成路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 库文件生成路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#############################################################

# 手动添加生成程序

# add_executable (${PROJECT_NAME} ./main.c )

# target_link_libraries(${PROJECT_NAME} m)

#############################################################

# 链接源文件生成程序
add_subdirectory(./src)

# # 链接库文件生成程序
# add_subdirectory(./lib)

# # # Linux下使用数学函数需要手动链接数学库

target_link_libraries(${PROJECT_NAME} m)


#############################################################################

# 生成库(Windows用GCC生成动态库)

# 手动添加生成静态库

# add_library(PROJECT_STATIC STATIC src)
# set_target_properties(PROJECT_STATIC PROPERTIES OUTPUT_NAME ${PROJECT_NAME})

# 手动添加生成动态库
# add_library(PROJECT_SHARED SHARED src)
# set_target_properties(PROJECT_SHARED PROPERTIES OUTPUT_NAME ${PROJECT_NAME})

##############################################################################

# # # # 获取源文件列表
# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)

# # # # 用源文件列表生成静态库

# add_library(PROJECT_STATIC STATIC ${SRC_LIST})
# set_target_properties(PROJECT_STATIC PROPERTIES OUTPUT_NAME ${PROJECT_NAME})

# # # 用源文件列表生成共享库

# add_library(PROJECT_SHARED SHARED ${SRC_LIST})
# set_target_properties(PROJECT_SHARED PROPERTIES OUTPUT_NAME ${PROJECT_NAME})

##############################################################################
