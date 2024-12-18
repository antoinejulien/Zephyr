# How to build and flash the project
1. Create a folder near your root :
```
$ mkdir ~/nrf/
```

2. Clone the repository :
```
$ cd ~/nrf/
$ git clone git@gitlab.com:humanware.ca/projects/BNWindows/lowlevel/nrf52/BrailleNoteWindows.git
```

3. Setup west environment :
```
$ west init -l BrailleNoteWindows
$ cd BrailleNoteWindows
$ west update
```

4. Build and flash the project :
- -p : Makes a pristine (equivalent to build all) build. Can be removed if you don't want to build the whole project.

```
$ west build -p -b ms50sfa_nrf52832 --sysbuild app
$ west flash
```
