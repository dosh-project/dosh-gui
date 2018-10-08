Forked by:
Portions Copyright (c) 2018, The Intense Coin developers 
Copyright (c) 2014-2017, The Monero Project Portions 
Copyright (c) 2012-2013, The Cryptonote developers
Copyright (c) 2018, The DOSH developers

# DOSH

Dosh endeavours to help non-governmental charities reach their goals, mainly focused on disaster charities and children’s charities. 

-= Building DOSH GUI =-

On *nix:



```bash
$ apt-get update
$ apt-get upgrade
$ apt-get install qtbase5-dev libssl-dev cmake git libboost1.58-all-dev build-essential g++
$ git clone https://github.com/Dosh/Dosh-QT-GUI-Wallet
$ cd Dosh-QT-GUI-Wallet/
$ cmake CMakeLists.txt
$ make -j 8

#### On Windows

Dependencies: MSVC 2015 or later, CMake 2.8.6 or later, Boost 1.59 or later and QT 5.10 or later.

You may download them from:

* http://www.microsoft.com/
* http://www.cmake.org/
* http://www.boost.org/
* https://www.qt.io/

To build, change to a directory where this file is located, and run these commands:
```
mkdir build
cd build
cmake -G "Visual Studio 15 Win64" ..
```

If you are building on an older processor without AVX support, add the following options to cmake:
```
-DPORTABLE=1 -DWITH_AVX2=0
```

You may find it helpful to explicitly include Boostand QT paths:
```
cmake.exe -DPORTABLE=1 -Wno-dev -DBOOST_ROOT=C:\boost_1_59_0 -DBOOST_LIBRARYDIR=C:\boost_1_59_0\libs\ -DCMAKE_PREFIX_PATH=C:\Qt\5.10.0\msvc2015_64 -G "Visual Studio 15 Win64" ..
```

And then build from within MSVC.




## Resources
* [Oficial website](https://mydosh.org/)
* [Pool Oficial](http://pool.mydosh.org)

## Social
* [Facebook](https://www.facebook.com/mydosh)
* [Twitter](https://twitter.com/Dosh)
* [Discord](https://discord.gg/TxJtH5F )
* [Telegram](https://t.me/doshtoken)

## License
GNU General Public License v3.0
