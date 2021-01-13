# gui-wallet
![](https://i.paste.pics/014eecc6d1ee9dce3fba36f376a9c7a8.png)

This is the goodness gui wallet source code and binary release for Windows and linux

Compilation tips :

Dependencies needed : boost >= 1.58, CMake >= 3.1, GCC >=4.7.3, Qt >=5.0

Currently built release is compiled with boost 1.68.0 and Qt 5.12.10

Compilation informations for Windows:

Update core submodule

```html
$ cd iridium-wallet
$ git submodule update --init
$ git submodule foreach git pull origin master
```

Compile

```html
$ git clone -b master https://github.com/GoodnessCoin/gui-wallet.git
$ cd gui-wallet
$ mkdir build
$ cd build
$ cmake -DCMAKE_BUILD_TYPE=Release -DQt5_DIR=C:\Qt\Qt5.12.10\5.12.10\msvc2017\lib\cmake -DCMAKE_PREFIX_PATH=C:\Qt\Qt5.12.10\5.12.10\msvc2017_64 -DBOOST_ROOT=C:/local/boost_1_68_0 -G "Visual Studio 15 2017 Win64" ..
$ cmake --build . --config Release
$ cpack -C Release
```

The compiled wallet will be located at ...\gui-wallet\build\Release
