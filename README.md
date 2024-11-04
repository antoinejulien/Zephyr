# How to build and flash the project
1. Create a folder near your root :
```
$ mkdir ~/nrf/
```

2. Clone the repository :
```
$ cd ~/nrf/
$ git clone https://github.com/antoinejulien/Zephyr/
```

3. Setup west environment :
```
$ west init -l Zephyr
$ cd Zephyr
$ west update
```

4. Build and flash the project :
- -p : Makes a pristine (equivalent to build all) build. Can be removed if you don't want to build the whole project.

```
$ west build -p -b ms50sfa_nrf52832 --sysbuild app
$ west flash
```
