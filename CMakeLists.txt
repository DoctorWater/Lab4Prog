cmake_minimum_required(VERSION 3.21)
project(Laba4Prog)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba4Prog main.cpp IGeoFig.h IPhysObject.h Vector2D.h IPrintable.h IDialogInitiable.h BaseCObject.h Triangle.cpp Triangle.h Parallelogram.cpp Parallelogram.h Menu.cpp Menu.h BaseCertainForm.h)
