# CIS22C_FinalProject

#Guidelines:

- Try not to commit code that doesn't work. If you need to, be sure to comment it out and to include appropriate messages to indicate that it is a working in progress / something that you need help with.

For example:
  /*
    This code doesn't work. Seon is helping me with it.
  */
  // {Example Code}

- When writing functions / methods, document it properly. Every function should have a comment block presented before the prototype.
  - Include the purpose of the function, any arguments it accepts and what they represent, and what the function will return if anything
  /*
    Prints a message to the console
  
    @param msg, the message to be printed
    @return none
  */
  
  void printMsg(string msg);

- If a particular long becomes incredibly long (80 chars or more), consider breaking it into several lines.
- When writing your code, do not sacrifice clarity for the sake of having shorter names. Try to make variable names meaningful.
  When deciding on names for functions, try to make the name short but make sure that it describes the function's purpose, exactly.
  For example:
    ChecksForErrors() is a lot more clear than Error()
- There will be a TODO list at the top of the main.
  It will probably look something like this
  /** TO-DO
  **  [] write some method
  **  [] format display
  **/
  If you finish something on there, don't immediately remove it. Simply mark an 'x' inside the box and leave it there. I will remove them after a day or two so that I can see what's been done and document them properly. Also mark your name at the end of it.

  How it should look:
  /** TO-DO
**  [x] write some method - Kenny
  **  [] format display
  **/
