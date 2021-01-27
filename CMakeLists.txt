#
# The Compiler Abstraction Library
#
# Copyright (C) 2020-2021, HENSOLDT Cyber GmbH
#
# SPDX-License-Identifier: BSD-3-Clause
#

cmake_minimum_required(VERSION 3.17)

#-------------------------------------------------------------------------------
project(lib_compiler C)

#-------------------------------------------------------------------------------
# LIBRARY
#-------------------------------------------------------------------------------
add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME}
    INTERFACE
        "include"
)
