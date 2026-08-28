# Easter Terminal

A simple terminal program with hidden Easter eggs. Type commands and discover surprises.

```bash
git clone https://github.com/JustADev1024/easter-terminal.git
cd easter-terminal
mkdir build && cd build
cmake ..
make
cp ./easter-terminal ..
cd ..
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

MIT License

Copyright (c) 2026 JustADev1024

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
