# IRRemote Quickstart
This quickstart project is for NEC protocol IR remotes. It will get you reacting to button presses on a remote
quickly.

To start using the quickstart project:
    1. Make sure IRRemote Library is installed in your Arduino IDE
    2. Add more `if` statements to handle button presses.
    3. Upload your code. 
    
### Handling a button press
Inside the loop, the example project is already reading the name of the pressed button into the variable `buttonPressed`.
To begin reacting to a pressed button on the remote, add an `if` statement matching the value in `buttonPressed `. For 
example, to do something when the `0` button on the remote is pressed, simply add an if statement. See the example below:

```C++
    String buttonPressed = IRMap::code_map(results.value);
    ...
    
    if(buttonPressed == "0") {
        // Do that things that's supposed to happen when the 0 button is pressed
    }
```
\