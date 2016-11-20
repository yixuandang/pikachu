# pikachu
A project I create to draw a Pikachu in c language  
It is actually really funny cause I wrote it in c without `include <graphic.h>`  
Basically it is just a bunch of `printf()` and I am sure there will be another easier way to do it. Please do contact me if you find another way to do it.

-------------------------------------------------------
### Compile

So before `make` just make sure type `make fclean` first to clear the lib and exe and then you can `make` again to create your own pikachu.  

-------------------------------------------------------

### Example

It should looks like this or close to this despite the colors:  

![Pikachu](https://github.com/yixuandang/pikachu/blob/master/example.png)

-------------------------------------------------------
### PS:

Also in the folder there is a short movie (**pikachu_1.mp4**) I made to show the process of how the pikachu was coded. Check it out if you're interested.  
By the way the color I define will be listed below as a reference to you:  
```
#define KNRM "\x1B[0m"  //color normal  
#define KRED "\x1B[31m" //color red  
#define KGRN "\x1B[32m" //color green  
#define KYEL "\x1B[33m" //color yellow  
#define KBLU "\x1B[34m" //color blue  
#define KMAG "\x1B[35m" //color pink/purple?
#define KCYN "\x1B[36m" //color @#%$&)*  
#define KWHT "\x1B[37m" //color white  
```
