# Easter Terminal

A simple terminal program with hidden Easter eggs. Type commands and discover surprises.

```bash
git clone https://github.com/JustADev1024/easter-terminal.git
cd easter-terminal
mkdir build && cd build
cmake ..
make
./easter-terminal
```

Or compile manually:

```bash
clang++ -Ilibs/json/include src/main.cpp -o easter-terminal
./easter-terminal
```

## Project structure

```
easter-terminal/
├── src/
│   └── main.cpp
├── libs/
│   └── json/include/nlohmann/
│       └── json.hpp
├── data/
│   └── en.json
├── CMakeLists.txt
├── README.md
└── .gitignore
```

## Author

**JustADev1024**

## License

MIT
