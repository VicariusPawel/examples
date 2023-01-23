cmake_minimum_required(VERSION 3.22)

project(examples LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(staticextern
	staticextern/main.cpp
	staticextern/static1.cpp
	staticextern/static2.cpp
	staticextern/extern1.cpp
	staticextern/extern2.cpp
)
