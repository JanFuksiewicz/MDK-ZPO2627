
# ============================================================
# Wygenerowano przy pomocy: ChatGPT (OpenAI), model GPT-6
# Data: 2026-11-19
# Godzina: 17:13 (CET)
# ============================================================

cmake_minimum_required(VERSION 3.20)

project(MenedzerKolekcji
    VERSION 0.1.0
    LANGUAGES CXX
)

# Ustawienia standardu C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ============================================================
# Biblioteka zawierajaca klasy projektu
# ============================================================

add_library(kolekcja_lib
    src/Pozycja.cpp
    src/Ksiazka.cpp
    src/Film.cpp
    src/Gra.cpp
    #src/Kolekcja.cpp
)

target_include_directories(kolekcja_lib
    PUBLIC include
)

# ============================================================
# Glowny program
# ============================================================

add_executable(MenedzerKolekcji
    src/main.cpp
)

target_link_libraries(MenedzerKolekcji
    PRIVATE kolekcja_lib
)
